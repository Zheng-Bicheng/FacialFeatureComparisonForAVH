/*---------------------------------------------------------------------------
 * Copyright (c) 2023 Arm Limited (or its affiliates). All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *---------------------------------------------------------------------------*/

#include <stdio.h>
#include "main.h"
#include "cmsis_os2.h"

#include <crt_config.h>
#include <tvmgen_face_feature.h>
#include <math.h>
#include "input_0.h"
#include "output_0.h"
#include "input_1.h"
#include "output_1.h"

// 计算两个向量的点积
float dot_product(const float* a, const float* b, int n) {
    float sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += a[i] * b[i];
    }
    return sum;
}

// 计算一个向量的欧几里得范数
float norm(const float* a, int n) {
    float sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += a[i] * a[i];
    }
    return sqrt(sum);
}

// 计算两个向量的余弦相似度
float cosine_similarity(const float* a, const float* b, int n) {
    float dot = dot_product(a, b, n);
    float norm_a = norm(a, n);
    float norm_b = norm(b, n);
    if (norm_a == 0.0f || norm_b == 0.0f) {
        // 如果其中一个向量的范数为0，则相似度为0
        return 0.0f;
    }
    return dot / (norm_a * norm_b);
}

/*---------------------------------------------------------------------------
 * Application main thread
 *---------------------------------------------------------------------------*/

static void app_main (void *argument) {
  (void)argument;

  printf("-> 读取人脸A的数据-开始\r\n");
  struct tvmgen_face_feature_inputs cls_input_0 = {
		.x = input_0,
	};
	struct tvmgen_face_feature_outputs cls_output_0 = {
		.output = output_0,
	};
  printf("-> 读取人脸A的数据-结束\r\n");

  printf("-> 第一次推理-开始\r\n");
	tvmgen_face_feature_run(&cls_input_0, &cls_output_0);
  printf("-> 第一次推理-结束\r\n");

  printf("-> 读取人脸B的数据-开始\r\n");
  struct tvmgen_face_feature_inputs cls_input_1 = {
		.x = input_1,
	};
	struct tvmgen_face_feature_outputs cls_output_1 = {
		.output = output_1,
	};
  printf("-> 读取人脸B的数据-结束\r\n");

  printf("-> 第二次推理-开始\r\n");
	tvmgen_face_feature_run(&cls_input_1, &cls_output_1);
  printf("-> 第二次推理-结束\r\n");
		
  printf("-> 计算相似度-开始\r\n");
  float sim = cosine_similarity(output_0, output_1, 512);
  printf("-> 计算相似度-结束\r\n");
  
  printf("有 %f 的概率是同一张人脸\r\n", sim * 100);
  printf("EXITTHESIM\r\n");
  osDelay(osWaitForever);
}

/*---------------------------------------------------------------------------
 * Application initialization
 *---------------------------------------------------------------------------*/
void app_initialize (void) {
  osThreadNew(app_main, NULL, NULL);
}
