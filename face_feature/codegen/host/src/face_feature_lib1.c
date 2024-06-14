// tvm target: c -keys=arm_cpu,cpu -mcpu=cortex-m55
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add(float* p0, float* T_add, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  void* fused_nn_conv2d_constant_let = (&(global_const_workspace_2_var[14981632]));
  void* fused_constant_let = (&(global_const_workspace_2_var[14910464]));
  void* data_vec_let = (&(global_workspace_3_var[0]));
  for (int32_t h = 0; h < 28; ++h) {
    for (int32_t w = 0; w < 28; ++w) {
      for (int32_t ci = 0; ci < 3; ++ci) {
        for (int32_t vh = 0; vh < 5; ++vh) {
          for (int32_t vw = 0; vw < 5; ++vw) {
            int32_t cse_var_1 = (w * 4);
            ((float*)data_vec_let)[(((((h * 2100) + (w * 75)) + (ci * 25)) + (vh * 5)) + vw)] = (((1 <= ((h * 4) + vh)) && (1 <= (cse_var_1 + vw))) ? p0[((((((ci * 12544) + (h * 448)) + (vh * 112)) + cse_var_1) + vw) - 113)] : 0.000000e+00f);
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 16; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 28; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 28; ++ax3_outer) {
        void* conv_let = (&(global_workspace_3_var[235200]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
          for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
            ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 3; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_2 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 2100) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_1 * 2))] * ((float*)fused_constant_let)[(((ax1_outer * 108) + (ci_1 * 36)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_3 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 2100) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_2 * 2)) + 10)] * ((float*)fused_constant_let)[(((ax1_outer * 108) + (ci_1 * 36)) + vc)]));
            }
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_4 = ((vw_3 * 4) + vc_1);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 2100) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_3 * 2)) + 1)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_1) + 4)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_5 = (((vw_4 * 4) + vc_1) + 8);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 2100) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_4 * 2)) + 11)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_1) + 4)]));
            }
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_6 = ((vw_5 * 4) + vc_2);
              ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[(((((ax2_outer * 2100) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_5 * 2)) + 2)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_2) + 8)]));
            }
            for (int32_t vw_6 = 0; vw_6 < 2; ++vw_6) {
              int32_t cse_var_7 = (((vw_6 * 4) + vc_2) + 8);
              ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[(((((ax2_outer * 2100) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_6 * 2)) + 12)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_2) + 8)]));
            }
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            for (int32_t vw_7 = 0; vw_7 < 2; ++vw_7) {
              int32_t cse_var_8 = ((vw_7 * 4) + vc_3);
              ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[(((((ax2_outer * 2100) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_7 * 2)) + 5)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_3) + 12)]));
            }
            for (int32_t vw_8 = 0; vw_8 < 2; ++vw_8) {
              int32_t cse_var_9 = (((vw_8 * 4) + vc_3) + 8);
              ((float*)conv_let)[cse_var_9] = (((float*)conv_let)[cse_var_9] + (((float*)data_vec_let)[(((((ax2_outer * 2100) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_8 * 2)) + 15)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_3) + 12)]));
            }
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            for (int32_t vw_9 = 0; vw_9 < 2; ++vw_9) {
              int32_t cse_var_10 = ((vw_9 * 4) + vc_4);
              ((float*)conv_let)[cse_var_10] = (((float*)conv_let)[cse_var_10] + (((float*)data_vec_let)[(((((ax2_outer * 2100) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_9 * 2)) + 6)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_4) + 16)]));
            }
            for (int32_t vw_10 = 0; vw_10 < 2; ++vw_10) {
              int32_t cse_var_11 = (((vw_10 * 4) + vc_4) + 8);
              ((float*)conv_let)[cse_var_11] = (((float*)conv_let)[cse_var_11] + (((float*)data_vec_let)[(((((ax2_outer * 2100) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_10 * 2)) + 16)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_4) + 16)]));
            }
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            for (int32_t vw_11 = 0; vw_11 < 2; ++vw_11) {
              int32_t cse_var_12 = ((vw_11 * 4) + vc_5);
              ((float*)conv_let)[cse_var_12] = (((float*)conv_let)[cse_var_12] + (((float*)data_vec_let)[(((((ax2_outer * 2100) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_11 * 2)) + 7)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_5) + 20)]));
            }
            for (int32_t vw_12 = 0; vw_12 < 2; ++vw_12) {
              int32_t cse_var_13 = (((vw_12 * 4) + vc_5) + 8);
              ((float*)conv_let)[cse_var_13] = (((float*)conv_let)[cse_var_13] + (((float*)data_vec_let)[(((((ax2_outer * 2100) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_12 * 2)) + 17)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_5) + 20)]));
            }
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            for (int32_t vw_13 = 0; vw_13 < 2; ++vw_13) {
              int32_t cse_var_14 = ((vw_13 * 4) + vc_6);
              ((float*)conv_let)[cse_var_14] = (((float*)conv_let)[cse_var_14] + (((float*)data_vec_let)[(((((ax2_outer * 2100) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_13 * 2)) + 10)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_6) + 24)]));
            }
            for (int32_t vw_14 = 0; vw_14 < 2; ++vw_14) {
              int32_t cse_var_15 = (((vw_14 * 4) + vc_6) + 8);
              ((float*)conv_let)[cse_var_15] = (((float*)conv_let)[cse_var_15] + (((float*)data_vec_let)[(((((ax2_outer * 2100) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_14 * 2)) + 20)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_6) + 24)]));
            }
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            for (int32_t vw_15 = 0; vw_15 < 2; ++vw_15) {
              int32_t cse_var_16 = ((vw_15 * 4) + vc_7);
              ((float*)conv_let)[cse_var_16] = (((float*)conv_let)[cse_var_16] + (((float*)data_vec_let)[(((((ax2_outer * 2100) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_15 * 2)) + 11)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_7) + 28)]));
            }
            for (int32_t vw_16 = 0; vw_16 < 2; ++vw_16) {
              int32_t cse_var_17 = (((vw_16 * 4) + vc_7) + 8);
              ((float*)conv_let)[cse_var_17] = (((float*)conv_let)[cse_var_17] + (((float*)data_vec_let)[(((((ax2_outer * 2100) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_16 * 2)) + 21)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_7) + 28)]));
            }
          }
          for (int32_t vc_8 = 0; vc_8 < 4; ++vc_8) {
            for (int32_t vw_17 = 0; vw_17 < 2; ++vw_17) {
              int32_t cse_var_18 = ((vw_17 * 4) + vc_8);
              ((float*)conv_let)[cse_var_18] = (((float*)conv_let)[cse_var_18] + (((float*)data_vec_let)[(((((ax2_outer * 2100) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_17 * 2)) + 12)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_8) + 32)]));
            }
            for (int32_t vw_18 = 0; vw_18 < 2; ++vw_18) {
              int32_t cse_var_19 = (((vw_18 * 4) + vc_8) + 8);
              ((float*)conv_let)[cse_var_19] = (((float*)conv_let)[cse_var_19] + (((float*)data_vec_let)[(((((ax2_outer * 2100) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_18 * 2)) + 22)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_8) + 32)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            T_add[(((((ax1_outer * 12544) + (ax1_inner * 3136)) + (ax2_outer * 112)) + (ax3_outer * 2)) + ax3_inner)] = (((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_let)[((ax1_outer * 4) + ax1_inner)]);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            T_add[((((((ax1_outer * 12544) + (ax1_inner_1 * 3136)) + (ax2_outer * 112)) + (ax3_outer * 2)) + ax3_inner_1) + 56)] = (((float*)conv_let)[(((ax3_inner_1 * 4) + ax1_inner_1) + 8)] + ((float*)fused_nn_conv2d_constant_let)[((ax1_outer * 4) + ax1_inner_1)]);
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_1(float* p0, float* T_add, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  void* fused_nn_conv2d_constant_1_let = (&(global_const_workspace_6_var[14981376]));
  void* fused_constant_1_let = (&(global_const_workspace_6_var[14940416]));
  void* fused_constant_1_global_global_let = (&(global_workspace_7_var[1611200]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 16; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_1_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_1_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_7_var[802816]));
  for (int32_t c_outer_c = 0; c_outer_c < 16; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 14; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_7_var[1605632]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 6; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 58; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 4) + ax2_c_1);
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 232) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 57)) && (1 <= ax3_c_1)) && (ax3_c_1 < 57)) ? p0[((((((c_outer_c * 12544) + (ax1_inner_c * 3136)) + (i_c_outer * 224)) + (ax2_c_1 * 56)) + ax3_c_1) - 57)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 28; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 12544) + (i_c_outer * 896)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 12544) + (i_c_outer * 896)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 224)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 12544) + (i_c_outer * 896)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 448)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 12544) + (i_c_outer * 896)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 672)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 12544) + (i_c_outer * 896)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 232) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_1_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 12544) + (i_c_outer * 896)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 224);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 232) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 232)] * ((float*)fused_constant_1_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 12544) + (i_c_outer * 896)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 448);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 232) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 464)] * ((float*)fused_constant_1_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 12544) + (i_c_outer * 896)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 672);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 232) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 696)] * ((float*)fused_constant_1_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_16) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 64; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 56; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 56; ++ax3) {
        T_add[(((ax1 * 3136) + (ax2 * 56)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 12544) + (ax2 * 224)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_1_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_10(float* p0, float* T_add, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var) {
  void* fused_nn_conv2d_constant_12_let = (&(global_const_workspace_44_var[14979072]));
  void* fused_constant_12_let = (&(global_const_workspace_44_var[14935808]));
  void* fused_constant_12_global_global_let = (&(global_workspace_45_var[810496]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 32; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_12_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_12_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_45_var[401408]));
  for (int32_t c_outer_c = 0; c_outer_c < 32; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 2; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_45_var[802816]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 16; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 30; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 14) + ax2_c_1);
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 120) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 29)) && (1 <= ax3_c_1)) && (ax3_c_1 < 29)) ? p0[((((((c_outer_c * 3136) + (ax1_inner_c * 784)) + (i_c_outer * 392)) + (ax2_c_1 * 28)) + ax3_c_1) - 29)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 14; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 112)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 224)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 336)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_4 = 0; j_c_inner_init_4 < 2; ++j_c_inner_init_4) {
          for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_4 * 4)) + c_inner_c_init_4) + 448)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_5 = 0; j_c_inner_init_5 < 2; ++j_c_inner_init_5) {
          for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_5 * 4)) + c_inner_c_init_5) + 560)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_6 = 0; j_c_inner_init_6 < 2; ++j_c_inner_init_6) {
          for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_6 * 4)) + c_inner_c_init_6) + 672)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_7 = 0; j_c_inner_init_7 < 2; ++j_c_inner_init_7) {
          for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_7 * 4)) + c_inner_c_init_7) + 784)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_8 = 0; j_c_inner_init_8 < 2; ++j_c_inner_init_8) {
          for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_8 * 4)) + c_inner_c_init_8) + 896)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_9 = 0; j_c_inner_init_9 < 2; ++j_c_inner_init_9) {
          for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_9 * 4)) + c_inner_c_init_9) + 1008)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_10 = 0; j_c_inner_init_10 < 2; ++j_c_inner_init_10) {
          for (int32_t c_inner_c_init_10 = 0; c_inner_c_init_10 < 4; ++c_inner_c_init_10) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_10 * 4)) + c_inner_c_init_10) + 1120)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_11 = 0; j_c_inner_init_11 < 2; ++j_c_inner_init_11) {
          for (int32_t c_inner_c_init_11 = 0; c_inner_c_init_11 < 4; ++c_inner_c_init_11) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_11 * 4)) + c_inner_c_init_11) + 1232)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_12 = 0; j_c_inner_init_12 < 2; ++j_c_inner_init_12) {
          for (int32_t c_inner_c_init_12 = 0; c_inner_c_init_12 < 4; ++c_inner_c_init_12) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_12 * 4)) + c_inner_c_init_12) + 1344)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_13 = 0; j_c_inner_init_13 < 2; ++j_c_inner_init_13) {
          for (int32_t c_inner_c_init_13 = 0; c_inner_c_init_13 < 4; ++c_inner_c_init_13) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_13 * 4)) + c_inner_c_init_13) + 1456)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 120) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_12_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 112);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 120)] * ((float*)fused_constant_12_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 224);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 240)] * ((float*)fused_constant_12_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 336);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 360)] * ((float*)fused_constant_12_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_16) + c_inner_c_3)]));
              }
            }
            for (int32_t j_c_inner_4 = 0; j_c_inner_4 < 2; ++j_c_inner_4) {
              for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
                int32_t cse_var_22 = (j_c_outer * 8);
                int32_t cse_var_21 = (j_c_inner_4 * 4);
                int32_t cse_var_20 = (dj * 4);
                int32_t cse_var_19 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_22) + cse_var_21) + c_inner_c_4) + 448);
                ((float*)DepthwiseConv2d_global_let)[cse_var_19] = (((float*)DepthwiseConv2d_global_let)[cse_var_19] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_22) + cse_var_21) + cse_var_20) + c_inner_c_4) + 480)] * ((float*)fused_constant_12_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_20) + c_inner_c_4)]));
              }
            }
            for (int32_t j_c_inner_5 = 0; j_c_inner_5 < 2; ++j_c_inner_5) {
              for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
                int32_t cse_var_26 = (j_c_outer * 8);
                int32_t cse_var_25 = (j_c_inner_5 * 4);
                int32_t cse_var_24 = (dj * 4);
                int32_t cse_var_23 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_26) + cse_var_25) + c_inner_c_5) + 560);
                ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_26) + cse_var_25) + cse_var_24) + c_inner_c_5) + 600)] * ((float*)fused_constant_12_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_24) + c_inner_c_5)]));
              }
            }
            for (int32_t j_c_inner_6 = 0; j_c_inner_6 < 2; ++j_c_inner_6) {
              for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
                int32_t cse_var_30 = (j_c_outer * 8);
                int32_t cse_var_29 = (j_c_inner_6 * 4);
                int32_t cse_var_28 = (dj * 4);
                int32_t cse_var_27 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_30) + cse_var_29) + c_inner_c_6) + 672);
                ((float*)DepthwiseConv2d_global_let)[cse_var_27] = (((float*)DepthwiseConv2d_global_let)[cse_var_27] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_30) + cse_var_29) + cse_var_28) + c_inner_c_6) + 720)] * ((float*)fused_constant_12_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_28) + c_inner_c_6)]));
              }
            }
            for (int32_t j_c_inner_7 = 0; j_c_inner_7 < 2; ++j_c_inner_7) {
              for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
                int32_t cse_var_34 = (j_c_outer * 8);
                int32_t cse_var_33 = (j_c_inner_7 * 4);
                int32_t cse_var_32 = (dj * 4);
                int32_t cse_var_31 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_34) + cse_var_33) + c_inner_c_7) + 784);
                ((float*)DepthwiseConv2d_global_let)[cse_var_31] = (((float*)DepthwiseConv2d_global_let)[cse_var_31] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_34) + cse_var_33) + cse_var_32) + c_inner_c_7) + 840)] * ((float*)fused_constant_12_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_32) + c_inner_c_7)]));
              }
            }
            for (int32_t j_c_inner_8 = 0; j_c_inner_8 < 2; ++j_c_inner_8) {
              for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
                int32_t cse_var_38 = (j_c_outer * 8);
                int32_t cse_var_37 = (j_c_inner_8 * 4);
                int32_t cse_var_36 = (dj * 4);
                int32_t cse_var_35 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_38) + cse_var_37) + c_inner_c_8) + 896);
                ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_38) + cse_var_37) + cse_var_36) + c_inner_c_8) + 960)] * ((float*)fused_constant_12_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_36) + c_inner_c_8)]));
              }
            }
            for (int32_t j_c_inner_9 = 0; j_c_inner_9 < 2; ++j_c_inner_9) {
              for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
                int32_t cse_var_42 = (j_c_outer * 8);
                int32_t cse_var_41 = (j_c_inner_9 * 4);
                int32_t cse_var_40 = (dj * 4);
                int32_t cse_var_39 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_42) + cse_var_41) + c_inner_c_9) + 1008);
                ((float*)DepthwiseConv2d_global_let)[cse_var_39] = (((float*)DepthwiseConv2d_global_let)[cse_var_39] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_42) + cse_var_41) + cse_var_40) + c_inner_c_9) + 1080)] * ((float*)fused_constant_12_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_40) + c_inner_c_9)]));
              }
            }
            for (int32_t j_c_inner_10 = 0; j_c_inner_10 < 2; ++j_c_inner_10) {
              for (int32_t c_inner_c_10 = 0; c_inner_c_10 < 4; ++c_inner_c_10) {
                int32_t cse_var_46 = (j_c_outer * 8);
                int32_t cse_var_45 = (j_c_inner_10 * 4);
                int32_t cse_var_44 = (dj * 4);
                int32_t cse_var_43 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_46) + cse_var_45) + c_inner_c_10) + 1120);
                ((float*)DepthwiseConv2d_global_let)[cse_var_43] = (((float*)DepthwiseConv2d_global_let)[cse_var_43] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_46) + cse_var_45) + cse_var_44) + c_inner_c_10) + 1200)] * ((float*)fused_constant_12_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_44) + c_inner_c_10)]));
              }
            }
            for (int32_t j_c_inner_11 = 0; j_c_inner_11 < 2; ++j_c_inner_11) {
              for (int32_t c_inner_c_11 = 0; c_inner_c_11 < 4; ++c_inner_c_11) {
                int32_t cse_var_50 = (j_c_outer * 8);
                int32_t cse_var_49 = (j_c_inner_11 * 4);
                int32_t cse_var_48 = (dj * 4);
                int32_t cse_var_47 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_50) + cse_var_49) + c_inner_c_11) + 1232);
                ((float*)DepthwiseConv2d_global_let)[cse_var_47] = (((float*)DepthwiseConv2d_global_let)[cse_var_47] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_50) + cse_var_49) + cse_var_48) + c_inner_c_11) + 1320)] * ((float*)fused_constant_12_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_48) + c_inner_c_11)]));
              }
            }
            for (int32_t j_c_inner_12 = 0; j_c_inner_12 < 2; ++j_c_inner_12) {
              for (int32_t c_inner_c_12 = 0; c_inner_c_12 < 4; ++c_inner_c_12) {
                int32_t cse_var_54 = (j_c_outer * 8);
                int32_t cse_var_53 = (j_c_inner_12 * 4);
                int32_t cse_var_52 = (dj * 4);
                int32_t cse_var_51 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_54) + cse_var_53) + c_inner_c_12) + 1344);
                ((float*)DepthwiseConv2d_global_let)[cse_var_51] = (((float*)DepthwiseConv2d_global_let)[cse_var_51] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_54) + cse_var_53) + cse_var_52) + c_inner_c_12) + 1440)] * ((float*)fused_constant_12_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_52) + c_inner_c_12)]));
              }
            }
            for (int32_t j_c_inner_13 = 0; j_c_inner_13 < 2; ++j_c_inner_13) {
              for (int32_t c_inner_c_13 = 0; c_inner_c_13 < 4; ++c_inner_c_13) {
                int32_t cse_var_58 = (j_c_outer * 8);
                int32_t cse_var_57 = (j_c_inner_13 * 4);
                int32_t cse_var_56 = (dj * 4);
                int32_t cse_var_55 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_58) + cse_var_57) + c_inner_c_13) + 1456);
                ((float*)DepthwiseConv2d_global_let)[cse_var_55] = (((float*)DepthwiseConv2d_global_let)[cse_var_55] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_58) + cse_var_57) + cse_var_56) + c_inner_c_13) + 1560)] * ((float*)fused_constant_12_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_56) + c_inner_c_13)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 128; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 28; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 28; ++ax3) {
        T_add[(((ax1 * 784) + (ax2 * 28)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 3136) + (ax2 * 112)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_12_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_11(float* p0, float* T_add, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var) {
  void* fused_nn_conv2d_constant_14_let = (&(global_const_workspace_50_var[14978560]));
  void* fused_constant_14_let = (&(global_const_workspace_50_var[14678016]));
  void* data_vec_let = (&(global_workspace_51_var[0]));
  for (int32_t h = 0; h < 28; ++h) {
    for (int32_t w = 0; w < 7; ++w) {
      for (int32_t ci = 0; ci < 64; ++ci) {
        for (int32_t vw = 0; vw < 4; ++vw) {
          ((float*)data_vec_let)[((((h * 1792) + (w * 256)) + (ci * 4)) + vw)] = p0[((((ci * 784) + (h * 28)) + (w * 4)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 28; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 7; ++ax3_outer) {
        void* conv_let = (&(global_workspace_51_var[200704]));
        for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 16; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 16; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 32)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 16; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 48)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 64; ++ci_1) {
          for (int32_t vc = 0; vc < 16; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1792) + (ax3_outer * 256)) + (ci_1 * 4))] * ((float*)fused_constant_14_let)[(((ax1_outer * 1024) + (ci_1 * 16)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 16; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 16);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1792) + (ax3_outer * 256)) + (ci_1 * 4)) + 1)] * ((float*)fused_constant_14_let)[(((ax1_outer * 1024) + (ci_1 * 16)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 16; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 32);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1792) + (ax3_outer * 256)) + (ci_1 * 4)) + 2)] * ((float*)fused_constant_14_let)[(((ax1_outer * 1024) + (ci_1 * 16)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 16; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 48);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1792) + (ax3_outer * 256)) + (ci_1 * 4)) + 3)] * ((float*)fused_constant_14_let)[(((ax1_outer * 1024) + (ci_1 * 16)) + vc_3)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
          T_add[((((ax1_outer * 12544) + (ax1_inner * 784)) + (ax2_outer * 28)) + (ax3_outer * 4))] = (((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_14_let)[((ax1_outer * 16) + ax1_inner)]);
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 16; ++ax1_inner_1) {
          T_add[(((((ax1_outer * 12544) + (ax1_inner_1 * 784)) + (ax2_outer * 28)) + (ax3_outer * 4)) + 1)] = (((float*)conv_let)[(ax1_inner_1 + 16)] + ((float*)fused_nn_conv2d_constant_14_let)[((ax1_outer * 16) + ax1_inner_1)]);
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 16; ++ax1_inner_2) {
          T_add[(((((ax1_outer * 12544) + (ax1_inner_2 * 784)) + (ax2_outer * 28)) + (ax3_outer * 4)) + 2)] = (((float*)conv_let)[(ax1_inner_2 + 32)] + ((float*)fused_nn_conv2d_constant_14_let)[((ax1_outer * 16) + ax1_inner_2)]);
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 16; ++ax1_inner_3) {
          T_add[(((((ax1_outer * 12544) + (ax1_inner_3 * 784)) + (ax2_outer * 28)) + (ax3_outer * 4)) + 3)] = (((float*)conv_let)[(ax1_inner_3 + 48)] + ((float*)fused_nn_conv2d_constant_14_let)[((ax1_outer * 16) + ax1_inner_3)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_12(float* p0, float* T_add, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var) {
  void* fused_nn_conv2d_constant_15_let = (&(global_const_workspace_54_var[14978048]));
  void* fused_constant_15_let = (&(global_const_workspace_54_var[14931200]));
  void* fused_constant_15_global_global_let = (&(global_workspace_55_var[1011200]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 32; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_15_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_15_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_55_var[401408]));
  for (int32_t c_outer_c = 0; c_outer_c < 32; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 2; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_55_var[1003520]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 16; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 30; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 14) + ax2_c_1);
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 120) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 29)) && (1 <= ax3_c_1)) && (ax3_c_1 < 29)) ? p0[((((((c_outer_c * 3136) + (ax1_inner_c * 784)) + (i_c_outer * 392)) + (ax2_c_1 * 28)) + ax3_c_1) - 29)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 14; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 112)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 224)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 336)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_4 = 0; j_c_inner_init_4 < 2; ++j_c_inner_init_4) {
          for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_4 * 4)) + c_inner_c_init_4) + 448)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_5 = 0; j_c_inner_init_5 < 2; ++j_c_inner_init_5) {
          for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_5 * 4)) + c_inner_c_init_5) + 560)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_6 = 0; j_c_inner_init_6 < 2; ++j_c_inner_init_6) {
          for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_6 * 4)) + c_inner_c_init_6) + 672)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_7 = 0; j_c_inner_init_7 < 2; ++j_c_inner_init_7) {
          for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_7 * 4)) + c_inner_c_init_7) + 784)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_8 = 0; j_c_inner_init_8 < 2; ++j_c_inner_init_8) {
          for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_8 * 4)) + c_inner_c_init_8) + 896)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_9 = 0; j_c_inner_init_9 < 2; ++j_c_inner_init_9) {
          for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_9 * 4)) + c_inner_c_init_9) + 1008)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_10 = 0; j_c_inner_init_10 < 2; ++j_c_inner_init_10) {
          for (int32_t c_inner_c_init_10 = 0; c_inner_c_init_10 < 4; ++c_inner_c_init_10) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_10 * 4)) + c_inner_c_init_10) + 1120)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_11 = 0; j_c_inner_init_11 < 2; ++j_c_inner_init_11) {
          for (int32_t c_inner_c_init_11 = 0; c_inner_c_init_11 < 4; ++c_inner_c_init_11) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_11 * 4)) + c_inner_c_init_11) + 1232)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_12 = 0; j_c_inner_init_12 < 2; ++j_c_inner_init_12) {
          for (int32_t c_inner_c_init_12 = 0; c_inner_c_init_12 < 4; ++c_inner_c_init_12) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_12 * 4)) + c_inner_c_init_12) + 1344)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_13 = 0; j_c_inner_init_13 < 2; ++j_c_inner_init_13) {
          for (int32_t c_inner_c_init_13 = 0; c_inner_c_init_13 < 4; ++c_inner_c_init_13) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_13 * 4)) + c_inner_c_init_13) + 1456)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 120) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 112);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 120)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 224);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 240)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 336);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 360)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_16) + c_inner_c_3)]));
              }
            }
            for (int32_t j_c_inner_4 = 0; j_c_inner_4 < 2; ++j_c_inner_4) {
              for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
                int32_t cse_var_22 = (j_c_outer * 8);
                int32_t cse_var_21 = (j_c_inner_4 * 4);
                int32_t cse_var_20 = (dj * 4);
                int32_t cse_var_19 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_22) + cse_var_21) + c_inner_c_4) + 448);
                ((float*)DepthwiseConv2d_global_let)[cse_var_19] = (((float*)DepthwiseConv2d_global_let)[cse_var_19] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_22) + cse_var_21) + cse_var_20) + c_inner_c_4) + 480)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_20) + c_inner_c_4)]));
              }
            }
            for (int32_t j_c_inner_5 = 0; j_c_inner_5 < 2; ++j_c_inner_5) {
              for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
                int32_t cse_var_26 = (j_c_outer * 8);
                int32_t cse_var_25 = (j_c_inner_5 * 4);
                int32_t cse_var_24 = (dj * 4);
                int32_t cse_var_23 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_26) + cse_var_25) + c_inner_c_5) + 560);
                ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_26) + cse_var_25) + cse_var_24) + c_inner_c_5) + 600)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_24) + c_inner_c_5)]));
              }
            }
            for (int32_t j_c_inner_6 = 0; j_c_inner_6 < 2; ++j_c_inner_6) {
              for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
                int32_t cse_var_30 = (j_c_outer * 8);
                int32_t cse_var_29 = (j_c_inner_6 * 4);
                int32_t cse_var_28 = (dj * 4);
                int32_t cse_var_27 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_30) + cse_var_29) + c_inner_c_6) + 672);
                ((float*)DepthwiseConv2d_global_let)[cse_var_27] = (((float*)DepthwiseConv2d_global_let)[cse_var_27] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_30) + cse_var_29) + cse_var_28) + c_inner_c_6) + 720)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_28) + c_inner_c_6)]));
              }
            }
            for (int32_t j_c_inner_7 = 0; j_c_inner_7 < 2; ++j_c_inner_7) {
              for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
                int32_t cse_var_34 = (j_c_outer * 8);
                int32_t cse_var_33 = (j_c_inner_7 * 4);
                int32_t cse_var_32 = (dj * 4);
                int32_t cse_var_31 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_34) + cse_var_33) + c_inner_c_7) + 784);
                ((float*)DepthwiseConv2d_global_let)[cse_var_31] = (((float*)DepthwiseConv2d_global_let)[cse_var_31] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_34) + cse_var_33) + cse_var_32) + c_inner_c_7) + 840)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_32) + c_inner_c_7)]));
              }
            }
            for (int32_t j_c_inner_8 = 0; j_c_inner_8 < 2; ++j_c_inner_8) {
              for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
                int32_t cse_var_38 = (j_c_outer * 8);
                int32_t cse_var_37 = (j_c_inner_8 * 4);
                int32_t cse_var_36 = (dj * 4);
                int32_t cse_var_35 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_38) + cse_var_37) + c_inner_c_8) + 896);
                ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_38) + cse_var_37) + cse_var_36) + c_inner_c_8) + 960)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_36) + c_inner_c_8)]));
              }
            }
            for (int32_t j_c_inner_9 = 0; j_c_inner_9 < 2; ++j_c_inner_9) {
              for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
                int32_t cse_var_42 = (j_c_outer * 8);
                int32_t cse_var_41 = (j_c_inner_9 * 4);
                int32_t cse_var_40 = (dj * 4);
                int32_t cse_var_39 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_42) + cse_var_41) + c_inner_c_9) + 1008);
                ((float*)DepthwiseConv2d_global_let)[cse_var_39] = (((float*)DepthwiseConv2d_global_let)[cse_var_39] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_42) + cse_var_41) + cse_var_40) + c_inner_c_9) + 1080)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_40) + c_inner_c_9)]));
              }
            }
            for (int32_t j_c_inner_10 = 0; j_c_inner_10 < 2; ++j_c_inner_10) {
              for (int32_t c_inner_c_10 = 0; c_inner_c_10 < 4; ++c_inner_c_10) {
                int32_t cse_var_46 = (j_c_outer * 8);
                int32_t cse_var_45 = (j_c_inner_10 * 4);
                int32_t cse_var_44 = (dj * 4);
                int32_t cse_var_43 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_46) + cse_var_45) + c_inner_c_10) + 1120);
                ((float*)DepthwiseConv2d_global_let)[cse_var_43] = (((float*)DepthwiseConv2d_global_let)[cse_var_43] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_46) + cse_var_45) + cse_var_44) + c_inner_c_10) + 1200)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_44) + c_inner_c_10)]));
              }
            }
            for (int32_t j_c_inner_11 = 0; j_c_inner_11 < 2; ++j_c_inner_11) {
              for (int32_t c_inner_c_11 = 0; c_inner_c_11 < 4; ++c_inner_c_11) {
                int32_t cse_var_50 = (j_c_outer * 8);
                int32_t cse_var_49 = (j_c_inner_11 * 4);
                int32_t cse_var_48 = (dj * 4);
                int32_t cse_var_47 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_50) + cse_var_49) + c_inner_c_11) + 1232);
                ((float*)DepthwiseConv2d_global_let)[cse_var_47] = (((float*)DepthwiseConv2d_global_let)[cse_var_47] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_50) + cse_var_49) + cse_var_48) + c_inner_c_11) + 1320)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_48) + c_inner_c_11)]));
              }
            }
            for (int32_t j_c_inner_12 = 0; j_c_inner_12 < 2; ++j_c_inner_12) {
              for (int32_t c_inner_c_12 = 0; c_inner_c_12 < 4; ++c_inner_c_12) {
                int32_t cse_var_54 = (j_c_outer * 8);
                int32_t cse_var_53 = (j_c_inner_12 * 4);
                int32_t cse_var_52 = (dj * 4);
                int32_t cse_var_51 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_54) + cse_var_53) + c_inner_c_12) + 1344);
                ((float*)DepthwiseConv2d_global_let)[cse_var_51] = (((float*)DepthwiseConv2d_global_let)[cse_var_51] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_54) + cse_var_53) + cse_var_52) + c_inner_c_12) + 1440)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_52) + c_inner_c_12)]));
              }
            }
            for (int32_t j_c_inner_13 = 0; j_c_inner_13 < 2; ++j_c_inner_13) {
              for (int32_t c_inner_c_13 = 0; c_inner_c_13 < 4; ++c_inner_c_13) {
                int32_t cse_var_58 = (j_c_outer * 8);
                int32_t cse_var_57 = (j_c_inner_13 * 4);
                int32_t cse_var_56 = (dj * 4);
                int32_t cse_var_55 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_58) + cse_var_57) + c_inner_c_13) + 1456);
                ((float*)DepthwiseConv2d_global_let)[cse_var_55] = (((float*)DepthwiseConv2d_global_let)[cse_var_55] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_58) + cse_var_57) + cse_var_56) + c_inner_c_13) + 1560)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_56) + c_inner_c_13)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 128; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 28; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 28; ++ax3) {
        T_add[(((ax1 * 784) + (ax2 * 28)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 3136) + (ax2 * 112)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_15_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_13(float* p0, float* T_add, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var) {
  void* fused_nn_conv2d_constant_17_let = (&(global_const_workspace_60_var[14968320]));
  void* fused_constant_17_let = (&(global_const_workspace_60_var[14215168]));
  void* data_vec_let = (&(global_workspace_61_var[0]));
  for (int32_t h = 0; h < 28; ++h) {
    for (int32_t w = 0; w < 7; ++w) {
      for (int32_t ci = 0; ci < 64; ++ci) {
        for (int32_t vw = 0; vw < 4; ++vw) {
          ((float*)data_vec_let)[((((h * 1792) + (w * 256)) + (ci * 4)) + vw)] = p0[((((ci * 784) + (h * 28)) + (w * 4)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 16; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 28; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 7; ++ax3_outer) {
        void* conv_let = (&(global_workspace_61_var[200704]));
        for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 16; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 16; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 32)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 16; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 48)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 64; ++ci_1) {
          for (int32_t vc = 0; vc < 16; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1792) + (ax3_outer * 256)) + (ci_1 * 4))] * ((float*)fused_constant_17_let)[(((ax1_outer * 1024) + (ci_1 * 16)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 16; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 16);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1792) + (ax3_outer * 256)) + (ci_1 * 4)) + 1)] * ((float*)fused_constant_17_let)[(((ax1_outer * 1024) + (ci_1 * 16)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 16; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 32);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1792) + (ax3_outer * 256)) + (ci_1 * 4)) + 2)] * ((float*)fused_constant_17_let)[(((ax1_outer * 1024) + (ci_1 * 16)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 16; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 48);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1792) + (ax3_outer * 256)) + (ci_1 * 4)) + 3)] * ((float*)fused_constant_17_let)[(((ax1_outer * 1024) + (ci_1 * 16)) + vc_3)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
          T_add[((((ax1_outer * 12544) + (ax1_inner * 784)) + (ax2_outer * 28)) + (ax3_outer * 4))] = (((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_17_let)[((ax1_outer * 16) + ax1_inner)]);
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 16; ++ax1_inner_1) {
          T_add[(((((ax1_outer * 12544) + (ax1_inner_1 * 784)) + (ax2_outer * 28)) + (ax3_outer * 4)) + 1)] = (((float*)conv_let)[(ax1_inner_1 + 16)] + ((float*)fused_nn_conv2d_constant_17_let)[((ax1_outer * 16) + ax1_inner_1)]);
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 16; ++ax1_inner_2) {
          T_add[(((((ax1_outer * 12544) + (ax1_inner_2 * 784)) + (ax2_outer * 28)) + (ax3_outer * 4)) + 2)] = (((float*)conv_let)[(ax1_inner_2 + 32)] + ((float*)fused_nn_conv2d_constant_17_let)[((ax1_outer * 16) + ax1_inner_2)]);
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 16; ++ax1_inner_3) {
          T_add[(((((ax1_outer * 12544) + (ax1_inner_3 * 784)) + (ax2_outer * 28)) + (ax3_outer * 4)) + 3)] = (((float*)conv_let)[(ax1_inner_3 + 48)] + ((float*)fused_nn_conv2d_constant_17_let)[((ax1_outer * 16) + ax1_inner_3)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_14(float* p0, float* T_add, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var) {
  void* fused_nn_conv2d_constant_18_let = (&(global_const_workspace_64_var[14967296]));
  void* fused_constant_18_let = (&(global_const_workspace_64_var[14901248]));
  void* fused_constant_18_global_global_let = (&(global_workspace_65_var[1016976]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 64; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_18_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_18_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_65_var[802816]));
  for (int32_t c_outer_c = 0; c_outer_c < 64; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_65_var[1003520]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 29; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 29; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 116) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((1 <= ax2_c_1) && (1 <= ax3_c_1)) ? p0[(((((c_outer_c * 3136) + (ax1_inner_c * 784)) + (ax2_c_1 * 28)) + ax3_c_1) - 29)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 7; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 56)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 112)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 168)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_4 = 0; j_c_inner_init_4 < 2; ++j_c_inner_init_4) {
        for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_4 * 4)) + c_inner_c_init_4) + 224)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_5 = 0; j_c_inner_init_5 < 2; ++j_c_inner_init_5) {
        for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_5 * 4)) + c_inner_c_init_5) + 280)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_6 = 0; j_c_inner_init_6 < 2; ++j_c_inner_init_6) {
        for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_6 * 4)) + c_inner_c_init_6) + 336)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_7 = 0; j_c_inner_init_7 < 2; ++j_c_inner_init_7) {
        for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_7 * 4)) + c_inner_c_init_7) + 392)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_8 = 0; j_c_inner_init_8 < 2; ++j_c_inner_init_8) {
        for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_8 * 4)) + c_inner_c_init_8) + 448)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_9 = 0; j_c_inner_init_9 < 2; ++j_c_inner_init_9) {
        for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_9 * 4)) + c_inner_c_init_9) + 504)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_10 = 0; j_c_inner_init_10 < 2; ++j_c_inner_init_10) {
        for (int32_t c_inner_c_init_10 = 0; c_inner_c_init_10 < 4; ++c_inner_c_init_10) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_10 * 4)) + c_inner_c_init_10) + 560)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_11 = 0; j_c_inner_init_11 < 2; ++j_c_inner_init_11) {
        for (int32_t c_inner_c_init_11 = 0; c_inner_c_init_11 < 4; ++c_inner_c_init_11) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_11 * 4)) + c_inner_c_init_11) + 616)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_12 = 0; j_c_inner_init_12 < 2; ++j_c_inner_init_12) {
        for (int32_t c_inner_c_init_12 = 0; c_inner_c_init_12 < 4; ++c_inner_c_init_12) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_12 * 4)) + c_inner_c_init_12) + 672)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_13 = 0; j_c_inner_init_13 < 2; ++j_c_inner_init_13) {
        for (int32_t c_inner_c_init_13 = 0; c_inner_c_init_13 < 4; ++c_inner_c_init_13) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_13 * 4)) + c_inner_c_init_13) + 728)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 3; ++di) {
        for (int32_t dj = 0; dj < 3; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner * 4)) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 116) + (j_c_outer * 16)) + (j_c_inner * 8)) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_18_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_5 = (dj * 4);
              int32_t cse_var_4 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_1 * 4)) + c_inner_c_1) + 56);
              ((float*)DepthwiseConv2d_global_let)[cse_var_4] = (((float*)DepthwiseConv2d_global_let)[cse_var_4] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_1 * 8)) + cse_var_5) + c_inner_c_1) + 232)] * ((float*)fused_constant_18_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_5) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_2 * 4)) + c_inner_c_2) + 112);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_2 * 8)) + cse_var_7) + c_inner_c_2) + 464)] * ((float*)fused_constant_18_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_7) + c_inner_c_2)]));
            }
          }
          for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_9 = (dj * 4);
              int32_t cse_var_8 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_3 * 4)) + c_inner_c_3) + 168);
              ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_3 * 8)) + cse_var_9) + c_inner_c_3) + 696)] * ((float*)fused_constant_18_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_9) + c_inner_c_3)]));
            }
          }
          for (int32_t j_c_inner_4 = 0; j_c_inner_4 < 2; ++j_c_inner_4) {
            for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_4 * 4)) + c_inner_c_4) + 224);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_4 * 8)) + cse_var_11) + c_inner_c_4) + 928)] * ((float*)fused_constant_18_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_11) + c_inner_c_4)]));
            }
          }
          for (int32_t j_c_inner_5 = 0; j_c_inner_5 < 2; ++j_c_inner_5) {
            for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
              int32_t cse_var_13 = (dj * 4);
              int32_t cse_var_12 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_5 * 4)) + c_inner_c_5) + 280);
              ((float*)DepthwiseConv2d_global_let)[cse_var_12] = (((float*)DepthwiseConv2d_global_let)[cse_var_12] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_5 * 8)) + cse_var_13) + c_inner_c_5) + 1160)] * ((float*)fused_constant_18_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_13) + c_inner_c_5)]));
            }
          }
          for (int32_t j_c_inner_6 = 0; j_c_inner_6 < 2; ++j_c_inner_6) {
            for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
              int32_t cse_var_15 = (dj * 4);
              int32_t cse_var_14 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_6 * 4)) + c_inner_c_6) + 336);
              ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_6 * 8)) + cse_var_15) + c_inner_c_6) + 1392)] * ((float*)fused_constant_18_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_15) + c_inner_c_6)]));
            }
          }
          for (int32_t j_c_inner_7 = 0; j_c_inner_7 < 2; ++j_c_inner_7) {
            for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
              int32_t cse_var_17 = (dj * 4);
              int32_t cse_var_16 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_7 * 4)) + c_inner_c_7) + 392);
              ((float*)DepthwiseConv2d_global_let)[cse_var_16] = (((float*)DepthwiseConv2d_global_let)[cse_var_16] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_7 * 8)) + cse_var_17) + c_inner_c_7) + 1624)] * ((float*)fused_constant_18_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_17) + c_inner_c_7)]));
            }
          }
          for (int32_t j_c_inner_8 = 0; j_c_inner_8 < 2; ++j_c_inner_8) {
            for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
              int32_t cse_var_19 = (dj * 4);
              int32_t cse_var_18 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_8 * 4)) + c_inner_c_8) + 448);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_8 * 8)) + cse_var_19) + c_inner_c_8) + 1856)] * ((float*)fused_constant_18_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_19) + c_inner_c_8)]));
            }
          }
          for (int32_t j_c_inner_9 = 0; j_c_inner_9 < 2; ++j_c_inner_9) {
            for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
              int32_t cse_var_21 = (dj * 4);
              int32_t cse_var_20 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_9 * 4)) + c_inner_c_9) + 504);
              ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_9 * 8)) + cse_var_21) + c_inner_c_9) + 2088)] * ((float*)fused_constant_18_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_21) + c_inner_c_9)]));
            }
          }
          for (int32_t j_c_inner_10 = 0; j_c_inner_10 < 2; ++j_c_inner_10) {
            for (int32_t c_inner_c_10 = 0; c_inner_c_10 < 4; ++c_inner_c_10) {
              int32_t cse_var_23 = (dj * 4);
              int32_t cse_var_22 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_10 * 4)) + c_inner_c_10) + 560);
              ((float*)DepthwiseConv2d_global_let)[cse_var_22] = (((float*)DepthwiseConv2d_global_let)[cse_var_22] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_10 * 8)) + cse_var_23) + c_inner_c_10) + 2320)] * ((float*)fused_constant_18_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_23) + c_inner_c_10)]));
            }
          }
          for (int32_t j_c_inner_11 = 0; j_c_inner_11 < 2; ++j_c_inner_11) {
            for (int32_t c_inner_c_11 = 0; c_inner_c_11 < 4; ++c_inner_c_11) {
              int32_t cse_var_25 = (dj * 4);
              int32_t cse_var_24 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_11 * 4)) + c_inner_c_11) + 616);
              ((float*)DepthwiseConv2d_global_let)[cse_var_24] = (((float*)DepthwiseConv2d_global_let)[cse_var_24] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_11 * 8)) + cse_var_25) + c_inner_c_11) + 2552)] * ((float*)fused_constant_18_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_25) + c_inner_c_11)]));
            }
          }
          for (int32_t j_c_inner_12 = 0; j_c_inner_12 < 2; ++j_c_inner_12) {
            for (int32_t c_inner_c_12 = 0; c_inner_c_12 < 4; ++c_inner_c_12) {
              int32_t cse_var_27 = (dj * 4);
              int32_t cse_var_26 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_12 * 4)) + c_inner_c_12) + 672);
              ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_12 * 8)) + cse_var_27) + c_inner_c_12) + 2784)] * ((float*)fused_constant_18_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_27) + c_inner_c_12)]));
            }
          }
          for (int32_t j_c_inner_13 = 0; j_c_inner_13 < 2; ++j_c_inner_13) {
            for (int32_t c_inner_c_13 = 0; c_inner_c_13 < 4; ++c_inner_c_13) {
              int32_t cse_var_29 = (dj * 4);
              int32_t cse_var_28 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_13 * 4)) + c_inner_c_13) + 728);
              ((float*)DepthwiseConv2d_global_let)[cse_var_28] = (((float*)DepthwiseConv2d_global_let)[cse_var_28] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_13 * 8)) + cse_var_29) + c_inner_c_13) + 3016)] * ((float*)fused_constant_18_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_29) + c_inner_c_13)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 256; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
        T_add[(((ax1 * 196) + (ax2 * 14)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 784) + (ax2 * 56)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_18_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_15(float* p0, float* T_add, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var) {
  void* fused_nn_conv2d_constant_19_let = (&(global_const_workspace_68_var[14977536]));
  void* fused_constant_19_let = (&(global_const_workspace_68_var[13783040]));
  void* data_vec_let = (&(global_workspace_69_var[0]));
  for (int32_t h = 0; h < 14; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 256; ++ci) {
        for (int32_t vw = 0; vw < 7; ++vw) {
          ((float*)data_vec_let)[((((h * 3584) + (w * 1792)) + (ci * 7)) + vw)] = p0[((((ci * 196) + (h * 14)) + (w * 7)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 14; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_69_var[200704]));
        for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 7; ++vw_init) {
            ((float*)conv_let)[((vw_init * 16) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 256; ++ci_1) {
          for (int32_t vc = 0; vc < 16; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 7; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 16) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 3584) + (ax3_outer * 1792)) + (ci_1 * 7)) + vw_1)] * ((float*)fused_constant_19_let)[(((ax1_outer * 4096) + (ci_1 * 16)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
            T_add[(((((ax1_outer * 3136) + (ax1_inner * 196)) + (ax2_outer * 14)) + (ax3_outer * 7)) + ax3_inner)] = (((float*)conv_let)[((ax3_inner * 16) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_19_let)[((ax1_outer * 16) + ax1_inner)]);
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_16(float* p0, float* T_add, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var) {
  void* fused_nn_conv2d_constant_20_let = (&(global_const_workspace_70_var[14966272]));
  void* fused_constant_20_let = (&(global_const_workspace_70_var[13651968]));
  void* data_vec_let = (&(global_workspace_71_var[0]));
  for (int32_t h = 0; h < 14; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 128; ++ci) {
        for (int32_t vw = 0; vw < 7; ++vw) {
          ((float*)data_vec_let)[((((h * 1792) + (w * 896)) + (ci * 7)) + vw)] = p0[((((ci * 196) + (h * 14)) + (w * 7)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 16; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 14; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_71_var[100352]));
        for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 7; ++vw_init) {
            ((float*)conv_let)[((vw_init * 16) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 128; ++ci_1) {
          for (int32_t vc = 0; vc < 16; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 7; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 16) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1792) + (ax3_outer * 896)) + (ci_1 * 7)) + vw_1)] * ((float*)fused_constant_20_let)[(((ax1_outer * 2048) + (ci_1 * 16)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
            T_add[(((((ax1_outer * 3136) + (ax1_inner * 196)) + (ax2_outer * 14)) + (ax3_outer * 7)) + ax3_inner)] = (((float*)conv_let)[((ax3_inner * 16) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_20_let)[((ax1_outer * 16) + ax1_inner)]);
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_17(float* p0, float* T_add, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var) {
  void* fused_nn_conv2d_constant_21_let = (&(global_const_workspace_74_var[14965248]));
  void* fused_constant_21_let = (&(global_const_workspace_74_var[14892032]));
  void* fused_constant_21_global_global_let = (&(global_workspace_75_var[401408]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 64; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_21_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_21_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_75_var[200704]));
  for (int32_t c_outer_c = 0; c_outer_c < 64; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_75_var[410624]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 16; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 16; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 64) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= ax2_c_1) && (ax2_c_1 < 15)) && (1 <= ax3_c_1)) && (ax3_c_1 < 15)) ? p0[(((((c_outer_c * 784) + (ax1_inner_c * 196)) + (ax2_c_1 * 14)) + ax3_c_1) - 15)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 7; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 56)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 112)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 168)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_4 = 0; j_c_inner_init_4 < 2; ++j_c_inner_init_4) {
        for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_4 * 4)) + c_inner_c_init_4) + 224)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_5 = 0; j_c_inner_init_5 < 2; ++j_c_inner_init_5) {
        for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_5 * 4)) + c_inner_c_init_5) + 280)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_6 = 0; j_c_inner_init_6 < 2; ++j_c_inner_init_6) {
        for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_6 * 4)) + c_inner_c_init_6) + 336)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_7 = 0; j_c_inner_init_7 < 2; ++j_c_inner_init_7) {
        for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_7 * 4)) + c_inner_c_init_7) + 392)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_8 = 0; j_c_inner_init_8 < 2; ++j_c_inner_init_8) {
        for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_8 * 4)) + c_inner_c_init_8) + 448)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_9 = 0; j_c_inner_init_9 < 2; ++j_c_inner_init_9) {
        for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_9 * 4)) + c_inner_c_init_9) + 504)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_10 = 0; j_c_inner_init_10 < 2; ++j_c_inner_init_10) {
        for (int32_t c_inner_c_init_10 = 0; c_inner_c_init_10 < 4; ++c_inner_c_init_10) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_10 * 4)) + c_inner_c_init_10) + 560)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_11 = 0; j_c_inner_init_11 < 2; ++j_c_inner_init_11) {
        for (int32_t c_inner_c_init_11 = 0; c_inner_c_init_11 < 4; ++c_inner_c_init_11) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_11 * 4)) + c_inner_c_init_11) + 616)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_12 = 0; j_c_inner_init_12 < 2; ++j_c_inner_init_12) {
        for (int32_t c_inner_c_init_12 = 0; c_inner_c_init_12 < 4; ++c_inner_c_init_12) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_12 * 4)) + c_inner_c_init_12) + 672)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_13 = 0; j_c_inner_init_13 < 2; ++j_c_inner_init_13) {
        for (int32_t c_inner_c_init_13 = 0; c_inner_c_init_13 < 4; ++c_inner_c_init_13) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_13 * 4)) + c_inner_c_init_13) + 728)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 3; ++di) {
        for (int32_t dj = 0; dj < 3; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 8);
              int32_t cse_var_4 = (j_c_inner * 4);
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 784) + cse_var_5) + cse_var_4) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 64) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_9 = (j_c_outer * 8);
              int32_t cse_var_8 = (j_c_inner_1 * 4);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 784) + cse_var_9) + cse_var_8) + c_inner_c_1) + 56);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 64)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_7) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_13 = (j_c_outer * 8);
              int32_t cse_var_12 = (j_c_inner_2 * 4);
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 784) + cse_var_13) + cse_var_12) + c_inner_c_2) + 112);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_13) + cse_var_12) + cse_var_11) + c_inner_c_2) + 128)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_11) + c_inner_c_2)]));
            }
          }
          for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_17 = (j_c_outer * 8);
              int32_t cse_var_16 = (j_c_inner_3 * 4);
              int32_t cse_var_15 = (dj * 4);
              int32_t cse_var_14 = (((((c_outer_c * 784) + cse_var_17) + cse_var_16) + c_inner_c_3) + 168);
              ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_17) + cse_var_16) + cse_var_15) + c_inner_c_3) + 192)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_15) + c_inner_c_3)]));
            }
          }
          for (int32_t j_c_inner_4 = 0; j_c_inner_4 < 2; ++j_c_inner_4) {
            for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
              int32_t cse_var_21 = (j_c_outer * 8);
              int32_t cse_var_20 = (j_c_inner_4 * 4);
              int32_t cse_var_19 = (dj * 4);
              int32_t cse_var_18 = (((((c_outer_c * 784) + cse_var_21) + cse_var_20) + c_inner_c_4) + 224);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_21) + cse_var_20) + cse_var_19) + c_inner_c_4) + 256)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_19) + c_inner_c_4)]));
            }
          }
          for (int32_t j_c_inner_5 = 0; j_c_inner_5 < 2; ++j_c_inner_5) {
            for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
              int32_t cse_var_25 = (j_c_outer * 8);
              int32_t cse_var_24 = (j_c_inner_5 * 4);
              int32_t cse_var_23 = (dj * 4);
              int32_t cse_var_22 = (((((c_outer_c * 784) + cse_var_25) + cse_var_24) + c_inner_c_5) + 280);
              ((float*)DepthwiseConv2d_global_let)[cse_var_22] = (((float*)DepthwiseConv2d_global_let)[cse_var_22] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_25) + cse_var_24) + cse_var_23) + c_inner_c_5) + 320)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_23) + c_inner_c_5)]));
            }
          }
          for (int32_t j_c_inner_6 = 0; j_c_inner_6 < 2; ++j_c_inner_6) {
            for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
              int32_t cse_var_29 = (j_c_outer * 8);
              int32_t cse_var_28 = (j_c_inner_6 * 4);
              int32_t cse_var_27 = (dj * 4);
              int32_t cse_var_26 = (((((c_outer_c * 784) + cse_var_29) + cse_var_28) + c_inner_c_6) + 336);
              ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_29) + cse_var_28) + cse_var_27) + c_inner_c_6) + 384)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_27) + c_inner_c_6)]));
            }
          }
          for (int32_t j_c_inner_7 = 0; j_c_inner_7 < 2; ++j_c_inner_7) {
            for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
              int32_t cse_var_33 = (j_c_outer * 8);
              int32_t cse_var_32 = (j_c_inner_7 * 4);
              int32_t cse_var_31 = (dj * 4);
              int32_t cse_var_30 = (((((c_outer_c * 784) + cse_var_33) + cse_var_32) + c_inner_c_7) + 392);
              ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_33) + cse_var_32) + cse_var_31) + c_inner_c_7) + 448)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_31) + c_inner_c_7)]));
            }
          }
          for (int32_t j_c_inner_8 = 0; j_c_inner_8 < 2; ++j_c_inner_8) {
            for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
              int32_t cse_var_37 = (j_c_outer * 8);
              int32_t cse_var_36 = (j_c_inner_8 * 4);
              int32_t cse_var_35 = (dj * 4);
              int32_t cse_var_34 = (((((c_outer_c * 784) + cse_var_37) + cse_var_36) + c_inner_c_8) + 448);
              ((float*)DepthwiseConv2d_global_let)[cse_var_34] = (((float*)DepthwiseConv2d_global_let)[cse_var_34] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_37) + cse_var_36) + cse_var_35) + c_inner_c_8) + 512)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_35) + c_inner_c_8)]));
            }
          }
          for (int32_t j_c_inner_9 = 0; j_c_inner_9 < 2; ++j_c_inner_9) {
            for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
              int32_t cse_var_41 = (j_c_outer * 8);
              int32_t cse_var_40 = (j_c_inner_9 * 4);
              int32_t cse_var_39 = (dj * 4);
              int32_t cse_var_38 = (((((c_outer_c * 784) + cse_var_41) + cse_var_40) + c_inner_c_9) + 504);
              ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_41) + cse_var_40) + cse_var_39) + c_inner_c_9) + 576)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_39) + c_inner_c_9)]));
            }
          }
          for (int32_t j_c_inner_10 = 0; j_c_inner_10 < 2; ++j_c_inner_10) {
            for (int32_t c_inner_c_10 = 0; c_inner_c_10 < 4; ++c_inner_c_10) {
              int32_t cse_var_45 = (j_c_outer * 8);
              int32_t cse_var_44 = (j_c_inner_10 * 4);
              int32_t cse_var_43 = (dj * 4);
              int32_t cse_var_42 = (((((c_outer_c * 784) + cse_var_45) + cse_var_44) + c_inner_c_10) + 560);
              ((float*)DepthwiseConv2d_global_let)[cse_var_42] = (((float*)DepthwiseConv2d_global_let)[cse_var_42] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_45) + cse_var_44) + cse_var_43) + c_inner_c_10) + 640)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_43) + c_inner_c_10)]));
            }
          }
          for (int32_t j_c_inner_11 = 0; j_c_inner_11 < 2; ++j_c_inner_11) {
            for (int32_t c_inner_c_11 = 0; c_inner_c_11 < 4; ++c_inner_c_11) {
              int32_t cse_var_49 = (j_c_outer * 8);
              int32_t cse_var_48 = (j_c_inner_11 * 4);
              int32_t cse_var_47 = (dj * 4);
              int32_t cse_var_46 = (((((c_outer_c * 784) + cse_var_49) + cse_var_48) + c_inner_c_11) + 616);
              ((float*)DepthwiseConv2d_global_let)[cse_var_46] = (((float*)DepthwiseConv2d_global_let)[cse_var_46] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_49) + cse_var_48) + cse_var_47) + c_inner_c_11) + 704)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_47) + c_inner_c_11)]));
            }
          }
          for (int32_t j_c_inner_12 = 0; j_c_inner_12 < 2; ++j_c_inner_12) {
            for (int32_t c_inner_c_12 = 0; c_inner_c_12 < 4; ++c_inner_c_12) {
              int32_t cse_var_53 = (j_c_outer * 8);
              int32_t cse_var_52 = (j_c_inner_12 * 4);
              int32_t cse_var_51 = (dj * 4);
              int32_t cse_var_50 = (((((c_outer_c * 784) + cse_var_53) + cse_var_52) + c_inner_c_12) + 672);
              ((float*)DepthwiseConv2d_global_let)[cse_var_50] = (((float*)DepthwiseConv2d_global_let)[cse_var_50] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_53) + cse_var_52) + cse_var_51) + c_inner_c_12) + 768)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_51) + c_inner_c_12)]));
            }
          }
          for (int32_t j_c_inner_13 = 0; j_c_inner_13 < 2; ++j_c_inner_13) {
            for (int32_t c_inner_c_13 = 0; c_inner_c_13 < 4; ++c_inner_c_13) {
              int32_t cse_var_57 = (j_c_outer * 8);
              int32_t cse_var_56 = (j_c_inner_13 * 4);
              int32_t cse_var_55 = (dj * 4);
              int32_t cse_var_54 = (((((c_outer_c * 784) + cse_var_57) + cse_var_56) + c_inner_c_13) + 728);
              ((float*)DepthwiseConv2d_global_let)[cse_var_54] = (((float*)DepthwiseConv2d_global_let)[cse_var_54] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_57) + cse_var_56) + cse_var_55) + c_inner_c_13) + 832)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_55) + c_inner_c_13)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 256; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
        T_add[(((ax1 * 196) + (ax2 * 14)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 784) + (ax2 * 56)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_21_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_18(float* p0, float* T_add, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var) {
  void* fused_nn_conv2d_constant_23_let = (&(global_const_workspace_80_var[14964224]));
  void* fused_constant_23_let = (&(global_const_workspace_80_var[13389824]));
  void* data_vec_let = (&(global_workspace_81_var[0]));
  for (int32_t h = 0; h < 14; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 128; ++ci) {
        for (int32_t vw = 0; vw < 7; ++vw) {
          ((float*)data_vec_let)[((((h * 1792) + (w * 896)) + (ci * 7)) + vw)] = p0[((((ci * 196) + (h * 14)) + (w * 7)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 16; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 14; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_81_var[100352]));
        for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 7; ++vw_init) {
            ((float*)conv_let)[((vw_init * 16) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 128; ++ci_1) {
          for (int32_t vc = 0; vc < 16; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 7; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 16) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1792) + (ax3_outer * 896)) + (ci_1 * 7)) + vw_1)] * ((float*)fused_constant_23_let)[(((ax1_outer * 2048) + (ci_1 * 16)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
            T_add[(((((ax1_outer * 3136) + (ax1_inner * 196)) + (ax2_outer * 14)) + (ax3_outer * 7)) + ax3_inner)] = (((float*)conv_let)[((ax3_inner * 16) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_23_let)[((ax1_outer * 16) + ax1_inner)]);
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_19(float* p0, float* T_add, uint8_t* global_const_workspace_84_var, uint8_t* global_workspace_85_var) {
  void* fused_nn_conv2d_constant_24_let = (&(global_const_workspace_84_var[14963200]));
  void* fused_constant_24_let = (&(global_const_workspace_84_var[14882816]));
  void* fused_constant_24_global_global_let = (&(global_workspace_85_var[501760]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 64; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_24_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_24_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_85_var[200704]));
  for (int32_t c_outer_c = 0; c_outer_c < 64; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_85_var[510976]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 16; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 16; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 64) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= ax2_c_1) && (ax2_c_1 < 15)) && (1 <= ax3_c_1)) && (ax3_c_1 < 15)) ? p0[(((((c_outer_c * 784) + (ax1_inner_c * 196)) + (ax2_c_1 * 14)) + ax3_c_1) - 15)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 7; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 56)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 112)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 168)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_4 = 0; j_c_inner_init_4 < 2; ++j_c_inner_init_4) {
        for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_4 * 4)) + c_inner_c_init_4) + 224)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_5 = 0; j_c_inner_init_5 < 2; ++j_c_inner_init_5) {
        for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_5 * 4)) + c_inner_c_init_5) + 280)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_6 = 0; j_c_inner_init_6 < 2; ++j_c_inner_init_6) {
        for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_6 * 4)) + c_inner_c_init_6) + 336)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_7 = 0; j_c_inner_init_7 < 2; ++j_c_inner_init_7) {
        for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_7 * 4)) + c_inner_c_init_7) + 392)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_8 = 0; j_c_inner_init_8 < 2; ++j_c_inner_init_8) {
        for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_8 * 4)) + c_inner_c_init_8) + 448)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_9 = 0; j_c_inner_init_9 < 2; ++j_c_inner_init_9) {
        for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_9 * 4)) + c_inner_c_init_9) + 504)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_10 = 0; j_c_inner_init_10 < 2; ++j_c_inner_init_10) {
        for (int32_t c_inner_c_init_10 = 0; c_inner_c_init_10 < 4; ++c_inner_c_init_10) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_10 * 4)) + c_inner_c_init_10) + 560)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_11 = 0; j_c_inner_init_11 < 2; ++j_c_inner_init_11) {
        for (int32_t c_inner_c_init_11 = 0; c_inner_c_init_11 < 4; ++c_inner_c_init_11) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_11 * 4)) + c_inner_c_init_11) + 616)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_12 = 0; j_c_inner_init_12 < 2; ++j_c_inner_init_12) {
        for (int32_t c_inner_c_init_12 = 0; c_inner_c_init_12 < 4; ++c_inner_c_init_12) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_12 * 4)) + c_inner_c_init_12) + 672)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_13 = 0; j_c_inner_init_13 < 2; ++j_c_inner_init_13) {
        for (int32_t c_inner_c_init_13 = 0; c_inner_c_init_13 < 4; ++c_inner_c_init_13) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_13 * 4)) + c_inner_c_init_13) + 728)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 3; ++di) {
        for (int32_t dj = 0; dj < 3; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 8);
              int32_t cse_var_4 = (j_c_inner * 4);
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 784) + cse_var_5) + cse_var_4) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 64) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_24_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_9 = (j_c_outer * 8);
              int32_t cse_var_8 = (j_c_inner_1 * 4);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 784) + cse_var_9) + cse_var_8) + c_inner_c_1) + 56);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 64)] * ((float*)fused_constant_24_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_7) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_13 = (j_c_outer * 8);
              int32_t cse_var_12 = (j_c_inner_2 * 4);
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 784) + cse_var_13) + cse_var_12) + c_inner_c_2) + 112);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_13) + cse_var_12) + cse_var_11) + c_inner_c_2) + 128)] * ((float*)fused_constant_24_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_11) + c_inner_c_2)]));
            }
          }
          for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_17 = (j_c_outer * 8);
              int32_t cse_var_16 = (j_c_inner_3 * 4);
              int32_t cse_var_15 = (dj * 4);
              int32_t cse_var_14 = (((((c_outer_c * 784) + cse_var_17) + cse_var_16) + c_inner_c_3) + 168);
              ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_17) + cse_var_16) + cse_var_15) + c_inner_c_3) + 192)] * ((float*)fused_constant_24_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_15) + c_inner_c_3)]));
            }
          }
          for (int32_t j_c_inner_4 = 0; j_c_inner_4 < 2; ++j_c_inner_4) {
            for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
              int32_t cse_var_21 = (j_c_outer * 8);
              int32_t cse_var_20 = (j_c_inner_4 * 4);
              int32_t cse_var_19 = (dj * 4);
              int32_t cse_var_18 = (((((c_outer_c * 784) + cse_var_21) + cse_var_20) + c_inner_c_4) + 224);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_21) + cse_var_20) + cse_var_19) + c_inner_c_4) + 256)] * ((float*)fused_constant_24_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_19) + c_inner_c_4)]));
            }
          }
          for (int32_t j_c_inner_5 = 0; j_c_inner_5 < 2; ++j_c_inner_5) {
            for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
              int32_t cse_var_25 = (j_c_outer * 8);
              int32_t cse_var_24 = (j_c_inner_5 * 4);
              int32_t cse_var_23 = (dj * 4);
              int32_t cse_var_22 = (((((c_outer_c * 784) + cse_var_25) + cse_var_24) + c_inner_c_5) + 280);
              ((float*)DepthwiseConv2d_global_let)[cse_var_22] = (((float*)DepthwiseConv2d_global_let)[cse_var_22] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_25) + cse_var_24) + cse_var_23) + c_inner_c_5) + 320)] * ((float*)fused_constant_24_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_23) + c_inner_c_5)]));
            }
          }
          for (int32_t j_c_inner_6 = 0; j_c_inner_6 < 2; ++j_c_inner_6) {
            for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
              int32_t cse_var_29 = (j_c_outer * 8);
              int32_t cse_var_28 = (j_c_inner_6 * 4);
              int32_t cse_var_27 = (dj * 4);
              int32_t cse_var_26 = (((((c_outer_c * 784) + cse_var_29) + cse_var_28) + c_inner_c_6) + 336);
              ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_29) + cse_var_28) + cse_var_27) + c_inner_c_6) + 384)] * ((float*)fused_constant_24_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_27) + c_inner_c_6)]));
            }
          }
          for (int32_t j_c_inner_7 = 0; j_c_inner_7 < 2; ++j_c_inner_7) {
            for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
              int32_t cse_var_33 = (j_c_outer * 8);
              int32_t cse_var_32 = (j_c_inner_7 * 4);
              int32_t cse_var_31 = (dj * 4);
              int32_t cse_var_30 = (((((c_outer_c * 784) + cse_var_33) + cse_var_32) + c_inner_c_7) + 392);
              ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_33) + cse_var_32) + cse_var_31) + c_inner_c_7) + 448)] * ((float*)fused_constant_24_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_31) + c_inner_c_7)]));
            }
          }
          for (int32_t j_c_inner_8 = 0; j_c_inner_8 < 2; ++j_c_inner_8) {
            for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
              int32_t cse_var_37 = (j_c_outer * 8);
              int32_t cse_var_36 = (j_c_inner_8 * 4);
              int32_t cse_var_35 = (dj * 4);
              int32_t cse_var_34 = (((((c_outer_c * 784) + cse_var_37) + cse_var_36) + c_inner_c_8) + 448);
              ((float*)DepthwiseConv2d_global_let)[cse_var_34] = (((float*)DepthwiseConv2d_global_let)[cse_var_34] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_37) + cse_var_36) + cse_var_35) + c_inner_c_8) + 512)] * ((float*)fused_constant_24_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_35) + c_inner_c_8)]));
            }
          }
          for (int32_t j_c_inner_9 = 0; j_c_inner_9 < 2; ++j_c_inner_9) {
            for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
              int32_t cse_var_41 = (j_c_outer * 8);
              int32_t cse_var_40 = (j_c_inner_9 * 4);
              int32_t cse_var_39 = (dj * 4);
              int32_t cse_var_38 = (((((c_outer_c * 784) + cse_var_41) + cse_var_40) + c_inner_c_9) + 504);
              ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_41) + cse_var_40) + cse_var_39) + c_inner_c_9) + 576)] * ((float*)fused_constant_24_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_39) + c_inner_c_9)]));
            }
          }
          for (int32_t j_c_inner_10 = 0; j_c_inner_10 < 2; ++j_c_inner_10) {
            for (int32_t c_inner_c_10 = 0; c_inner_c_10 < 4; ++c_inner_c_10) {
              int32_t cse_var_45 = (j_c_outer * 8);
              int32_t cse_var_44 = (j_c_inner_10 * 4);
              int32_t cse_var_43 = (dj * 4);
              int32_t cse_var_42 = (((((c_outer_c * 784) + cse_var_45) + cse_var_44) + c_inner_c_10) + 560);
              ((float*)DepthwiseConv2d_global_let)[cse_var_42] = (((float*)DepthwiseConv2d_global_let)[cse_var_42] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_45) + cse_var_44) + cse_var_43) + c_inner_c_10) + 640)] * ((float*)fused_constant_24_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_43) + c_inner_c_10)]));
            }
          }
          for (int32_t j_c_inner_11 = 0; j_c_inner_11 < 2; ++j_c_inner_11) {
            for (int32_t c_inner_c_11 = 0; c_inner_c_11 < 4; ++c_inner_c_11) {
              int32_t cse_var_49 = (j_c_outer * 8);
              int32_t cse_var_48 = (j_c_inner_11 * 4);
              int32_t cse_var_47 = (dj * 4);
              int32_t cse_var_46 = (((((c_outer_c * 784) + cse_var_49) + cse_var_48) + c_inner_c_11) + 616);
              ((float*)DepthwiseConv2d_global_let)[cse_var_46] = (((float*)DepthwiseConv2d_global_let)[cse_var_46] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_49) + cse_var_48) + cse_var_47) + c_inner_c_11) + 704)] * ((float*)fused_constant_24_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_47) + c_inner_c_11)]));
            }
          }
          for (int32_t j_c_inner_12 = 0; j_c_inner_12 < 2; ++j_c_inner_12) {
            for (int32_t c_inner_c_12 = 0; c_inner_c_12 < 4; ++c_inner_c_12) {
              int32_t cse_var_53 = (j_c_outer * 8);
              int32_t cse_var_52 = (j_c_inner_12 * 4);
              int32_t cse_var_51 = (dj * 4);
              int32_t cse_var_50 = (((((c_outer_c * 784) + cse_var_53) + cse_var_52) + c_inner_c_12) + 672);
              ((float*)DepthwiseConv2d_global_let)[cse_var_50] = (((float*)DepthwiseConv2d_global_let)[cse_var_50] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_53) + cse_var_52) + cse_var_51) + c_inner_c_12) + 768)] * ((float*)fused_constant_24_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_51) + c_inner_c_12)]));
            }
          }
          for (int32_t j_c_inner_13 = 0; j_c_inner_13 < 2; ++j_c_inner_13) {
            for (int32_t c_inner_c_13 = 0; c_inner_c_13 < 4; ++c_inner_c_13) {
              int32_t cse_var_57 = (j_c_outer * 8);
              int32_t cse_var_56 = (j_c_inner_13 * 4);
              int32_t cse_var_55 = (dj * 4);
              int32_t cse_var_54 = (((((c_outer_c * 784) + cse_var_57) + cse_var_56) + c_inner_c_13) + 728);
              ((float*)DepthwiseConv2d_global_let)[cse_var_54] = (((float*)DepthwiseConv2d_global_let)[cse_var_54] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_57) + cse_var_56) + cse_var_55) + c_inner_c_13) + 832)] * ((float*)fused_constant_24_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_55) + c_inner_c_13)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 256; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
        T_add[(((ax1 * 196) + (ax2 * 14)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 784) + (ax2 * 56)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_24_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_2(float* p0, float* T_add, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  void* fused_nn_conv2d_constant_2_let = (&(global_const_workspace_10_var[14977024]));
  void* fused_constant_2_let = (&(global_const_workspace_10_var[14612480]));
  void* data_vec_let = (&(global_workspace_11_var[0]));
  for (int32_t h = 0; h < 56; ++h) {
    for (int32_t w = 0; w < 8; ++w) {
      for (int32_t ci = 0; ci < 64; ++ci) {
        for (int32_t vw = 0; vw < 7; ++vw) {
          ((float*)data_vec_let)[((((h * 3584) + (w * 448)) + (ci * 7)) + vw)] = p0[((((ci * 3136) + (h * 56)) + (w * 7)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 56; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
        void* conv_let = (&(global_workspace_11_var[802816]));
        for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 16; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 16; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 32)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 16; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 48)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 16; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 64)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 16; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 80)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 16; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 96)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 64; ++ci_1) {
          for (int32_t vc = 0; vc < 16; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 3584) + (ax3_outer * 448)) + (ci_1 * 7))] * ((float*)fused_constant_2_let)[(((ax1_outer * 1024) + (ci_1 * 16)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 16; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 16);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 3584) + (ax3_outer * 448)) + (ci_1 * 7)) + 1)] * ((float*)fused_constant_2_let)[(((ax1_outer * 1024) + (ci_1 * 16)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 16; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 32);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 3584) + (ax3_outer * 448)) + (ci_1 * 7)) + 2)] * ((float*)fused_constant_2_let)[(((ax1_outer * 1024) + (ci_1 * 16)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 16; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 48);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 3584) + (ax3_outer * 448)) + (ci_1 * 7)) + 3)] * ((float*)fused_constant_2_let)[(((ax1_outer * 1024) + (ci_1 * 16)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 16; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 64);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 3584) + (ax3_outer * 448)) + (ci_1 * 7)) + 4)] * ((float*)fused_constant_2_let)[(((ax1_outer * 1024) + (ci_1 * 16)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 16; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 80);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 3584) + (ax3_outer * 448)) + (ci_1 * 7)) + 5)] * ((float*)fused_constant_2_let)[(((ax1_outer * 1024) + (ci_1 * 16)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 16; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 96);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 3584) + (ax3_outer * 448)) + (ci_1 * 7)) + 6)] * ((float*)fused_constant_2_let)[(((ax1_outer * 1024) + (ci_1 * 16)) + vc_6)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
          T_add[((((ax1_outer * 50176) + (ax1_inner * 3136)) + (ax2_outer * 56)) + (ax3_outer * 7))] = (((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_2_let)[((ax1_outer * 16) + ax1_inner)]);
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 16; ++ax1_inner_1) {
          T_add[(((((ax1_outer * 50176) + (ax1_inner_1 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 7)) + 1)] = (((float*)conv_let)[(ax1_inner_1 + 16)] + ((float*)fused_nn_conv2d_constant_2_let)[((ax1_outer * 16) + ax1_inner_1)]);
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 16; ++ax1_inner_2) {
          T_add[(((((ax1_outer * 50176) + (ax1_inner_2 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 7)) + 2)] = (((float*)conv_let)[(ax1_inner_2 + 32)] + ((float*)fused_nn_conv2d_constant_2_let)[((ax1_outer * 16) + ax1_inner_2)]);
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 16; ++ax1_inner_3) {
          T_add[(((((ax1_outer * 50176) + (ax1_inner_3 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 7)) + 3)] = (((float*)conv_let)[(ax1_inner_3 + 48)] + ((float*)fused_nn_conv2d_constant_2_let)[((ax1_outer * 16) + ax1_inner_3)]);
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 16; ++ax1_inner_4) {
          T_add[(((((ax1_outer * 50176) + (ax1_inner_4 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 7)) + 4)] = (((float*)conv_let)[(ax1_inner_4 + 64)] + ((float*)fused_nn_conv2d_constant_2_let)[((ax1_outer * 16) + ax1_inner_4)]);
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 16; ++ax1_inner_5) {
          T_add[(((((ax1_outer * 50176) + (ax1_inner_5 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 7)) + 5)] = (((float*)conv_let)[(ax1_inner_5 + 80)] + ((float*)fused_nn_conv2d_constant_2_let)[((ax1_outer * 16) + ax1_inner_5)]);
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 16; ++ax1_inner_6) {
          T_add[(((((ax1_outer * 50176) + (ax1_inner_6 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 7)) + 6)] = (((float*)conv_let)[(ax1_inner_6 + 96)] + ((float*)fused_nn_conv2d_constant_2_let)[((ax1_outer * 16) + ax1_inner_6)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_20(float* p0, float* T_add, uint8_t* global_const_workspace_90_var, uint8_t* global_workspace_91_var) {
  void* fused_nn_conv2d_constant_26_let = (&(global_const_workspace_90_var[14962176]));
  void* fused_constant_26_let = (&(global_const_workspace_90_var[13127680]));
  void* data_vec_let = (&(global_workspace_91_var[0]));
  for (int32_t h = 0; h < 14; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 128; ++ci) {
        for (int32_t vw = 0; vw < 7; ++vw) {
          ((float*)data_vec_let)[((((h * 1792) + (w * 896)) + (ci * 7)) + vw)] = p0[((((ci * 196) + (h * 14)) + (w * 7)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 16; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 14; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_91_var[100352]));
        for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 7; ++vw_init) {
            ((float*)conv_let)[((vw_init * 16) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 128; ++ci_1) {
          for (int32_t vc = 0; vc < 16; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 7; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 16) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1792) + (ax3_outer * 896)) + (ci_1 * 7)) + vw_1)] * ((float*)fused_constant_26_let)[(((ax1_outer * 2048) + (ci_1 * 16)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
            T_add[(((((ax1_outer * 3136) + (ax1_inner * 196)) + (ax2_outer * 14)) + (ax3_outer * 7)) + ax3_inner)] = (((float*)conv_let)[((ax3_inner * 16) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_26_let)[((ax1_outer * 16) + ax1_inner)]);
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_21(float* p0, float* T_add, uint8_t* global_const_workspace_94_var, uint8_t* global_workspace_95_var) {
  void* fused_nn_conv2d_constant_27_let = (&(global_const_workspace_94_var[14961152]));
  void* fused_constant_27_let = (&(global_const_workspace_94_var[14873600]));
  void* fused_constant_27_global_global_let = (&(global_workspace_95_var[401408]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 64; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_27_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_27_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_95_var[200704]));
  for (int32_t c_outer_c = 0; c_outer_c < 64; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_95_var[410624]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 16; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 16; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 64) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= ax2_c_1) && (ax2_c_1 < 15)) && (1 <= ax3_c_1)) && (ax3_c_1 < 15)) ? p0[(((((c_outer_c * 784) + (ax1_inner_c * 196)) + (ax2_c_1 * 14)) + ax3_c_1) - 15)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 7; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 56)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 112)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 168)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_4 = 0; j_c_inner_init_4 < 2; ++j_c_inner_init_4) {
        for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_4 * 4)) + c_inner_c_init_4) + 224)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_5 = 0; j_c_inner_init_5 < 2; ++j_c_inner_init_5) {
        for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_5 * 4)) + c_inner_c_init_5) + 280)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_6 = 0; j_c_inner_init_6 < 2; ++j_c_inner_init_6) {
        for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_6 * 4)) + c_inner_c_init_6) + 336)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_7 = 0; j_c_inner_init_7 < 2; ++j_c_inner_init_7) {
        for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_7 * 4)) + c_inner_c_init_7) + 392)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_8 = 0; j_c_inner_init_8 < 2; ++j_c_inner_init_8) {
        for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_8 * 4)) + c_inner_c_init_8) + 448)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_9 = 0; j_c_inner_init_9 < 2; ++j_c_inner_init_9) {
        for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_9 * 4)) + c_inner_c_init_9) + 504)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_10 = 0; j_c_inner_init_10 < 2; ++j_c_inner_init_10) {
        for (int32_t c_inner_c_init_10 = 0; c_inner_c_init_10 < 4; ++c_inner_c_init_10) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_10 * 4)) + c_inner_c_init_10) + 560)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_11 = 0; j_c_inner_init_11 < 2; ++j_c_inner_init_11) {
        for (int32_t c_inner_c_init_11 = 0; c_inner_c_init_11 < 4; ++c_inner_c_init_11) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_11 * 4)) + c_inner_c_init_11) + 616)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_12 = 0; j_c_inner_init_12 < 2; ++j_c_inner_init_12) {
        for (int32_t c_inner_c_init_12 = 0; c_inner_c_init_12 < 4; ++c_inner_c_init_12) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_12 * 4)) + c_inner_c_init_12) + 672)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_13 = 0; j_c_inner_init_13 < 2; ++j_c_inner_init_13) {
        for (int32_t c_inner_c_init_13 = 0; c_inner_c_init_13 < 4; ++c_inner_c_init_13) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_13 * 4)) + c_inner_c_init_13) + 728)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 3; ++di) {
        for (int32_t dj = 0; dj < 3; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 8);
              int32_t cse_var_4 = (j_c_inner * 4);
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 784) + cse_var_5) + cse_var_4) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 64) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_9 = (j_c_outer * 8);
              int32_t cse_var_8 = (j_c_inner_1 * 4);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 784) + cse_var_9) + cse_var_8) + c_inner_c_1) + 56);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 64)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_7) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_13 = (j_c_outer * 8);
              int32_t cse_var_12 = (j_c_inner_2 * 4);
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 784) + cse_var_13) + cse_var_12) + c_inner_c_2) + 112);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_13) + cse_var_12) + cse_var_11) + c_inner_c_2) + 128)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_11) + c_inner_c_2)]));
            }
          }
          for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_17 = (j_c_outer * 8);
              int32_t cse_var_16 = (j_c_inner_3 * 4);
              int32_t cse_var_15 = (dj * 4);
              int32_t cse_var_14 = (((((c_outer_c * 784) + cse_var_17) + cse_var_16) + c_inner_c_3) + 168);
              ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_17) + cse_var_16) + cse_var_15) + c_inner_c_3) + 192)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_15) + c_inner_c_3)]));
            }
          }
          for (int32_t j_c_inner_4 = 0; j_c_inner_4 < 2; ++j_c_inner_4) {
            for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
              int32_t cse_var_21 = (j_c_outer * 8);
              int32_t cse_var_20 = (j_c_inner_4 * 4);
              int32_t cse_var_19 = (dj * 4);
              int32_t cse_var_18 = (((((c_outer_c * 784) + cse_var_21) + cse_var_20) + c_inner_c_4) + 224);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_21) + cse_var_20) + cse_var_19) + c_inner_c_4) + 256)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_19) + c_inner_c_4)]));
            }
          }
          for (int32_t j_c_inner_5 = 0; j_c_inner_5 < 2; ++j_c_inner_5) {
            for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
              int32_t cse_var_25 = (j_c_outer * 8);
              int32_t cse_var_24 = (j_c_inner_5 * 4);
              int32_t cse_var_23 = (dj * 4);
              int32_t cse_var_22 = (((((c_outer_c * 784) + cse_var_25) + cse_var_24) + c_inner_c_5) + 280);
              ((float*)DepthwiseConv2d_global_let)[cse_var_22] = (((float*)DepthwiseConv2d_global_let)[cse_var_22] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_25) + cse_var_24) + cse_var_23) + c_inner_c_5) + 320)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_23) + c_inner_c_5)]));
            }
          }
          for (int32_t j_c_inner_6 = 0; j_c_inner_6 < 2; ++j_c_inner_6) {
            for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
              int32_t cse_var_29 = (j_c_outer * 8);
              int32_t cse_var_28 = (j_c_inner_6 * 4);
              int32_t cse_var_27 = (dj * 4);
              int32_t cse_var_26 = (((((c_outer_c * 784) + cse_var_29) + cse_var_28) + c_inner_c_6) + 336);
              ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_29) + cse_var_28) + cse_var_27) + c_inner_c_6) + 384)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_27) + c_inner_c_6)]));
            }
          }
          for (int32_t j_c_inner_7 = 0; j_c_inner_7 < 2; ++j_c_inner_7) {
            for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
              int32_t cse_var_33 = (j_c_outer * 8);
              int32_t cse_var_32 = (j_c_inner_7 * 4);
              int32_t cse_var_31 = (dj * 4);
              int32_t cse_var_30 = (((((c_outer_c * 784) + cse_var_33) + cse_var_32) + c_inner_c_7) + 392);
              ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_33) + cse_var_32) + cse_var_31) + c_inner_c_7) + 448)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_31) + c_inner_c_7)]));
            }
          }
          for (int32_t j_c_inner_8 = 0; j_c_inner_8 < 2; ++j_c_inner_8) {
            for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
              int32_t cse_var_37 = (j_c_outer * 8);
              int32_t cse_var_36 = (j_c_inner_8 * 4);
              int32_t cse_var_35 = (dj * 4);
              int32_t cse_var_34 = (((((c_outer_c * 784) + cse_var_37) + cse_var_36) + c_inner_c_8) + 448);
              ((float*)DepthwiseConv2d_global_let)[cse_var_34] = (((float*)DepthwiseConv2d_global_let)[cse_var_34] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_37) + cse_var_36) + cse_var_35) + c_inner_c_8) + 512)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_35) + c_inner_c_8)]));
            }
          }
          for (int32_t j_c_inner_9 = 0; j_c_inner_9 < 2; ++j_c_inner_9) {
            for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
              int32_t cse_var_41 = (j_c_outer * 8);
              int32_t cse_var_40 = (j_c_inner_9 * 4);
              int32_t cse_var_39 = (dj * 4);
              int32_t cse_var_38 = (((((c_outer_c * 784) + cse_var_41) + cse_var_40) + c_inner_c_9) + 504);
              ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_41) + cse_var_40) + cse_var_39) + c_inner_c_9) + 576)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_39) + c_inner_c_9)]));
            }
          }
          for (int32_t j_c_inner_10 = 0; j_c_inner_10 < 2; ++j_c_inner_10) {
            for (int32_t c_inner_c_10 = 0; c_inner_c_10 < 4; ++c_inner_c_10) {
              int32_t cse_var_45 = (j_c_outer * 8);
              int32_t cse_var_44 = (j_c_inner_10 * 4);
              int32_t cse_var_43 = (dj * 4);
              int32_t cse_var_42 = (((((c_outer_c * 784) + cse_var_45) + cse_var_44) + c_inner_c_10) + 560);
              ((float*)DepthwiseConv2d_global_let)[cse_var_42] = (((float*)DepthwiseConv2d_global_let)[cse_var_42] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_45) + cse_var_44) + cse_var_43) + c_inner_c_10) + 640)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_43) + c_inner_c_10)]));
            }
          }
          for (int32_t j_c_inner_11 = 0; j_c_inner_11 < 2; ++j_c_inner_11) {
            for (int32_t c_inner_c_11 = 0; c_inner_c_11 < 4; ++c_inner_c_11) {
              int32_t cse_var_49 = (j_c_outer * 8);
              int32_t cse_var_48 = (j_c_inner_11 * 4);
              int32_t cse_var_47 = (dj * 4);
              int32_t cse_var_46 = (((((c_outer_c * 784) + cse_var_49) + cse_var_48) + c_inner_c_11) + 616);
              ((float*)DepthwiseConv2d_global_let)[cse_var_46] = (((float*)DepthwiseConv2d_global_let)[cse_var_46] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_49) + cse_var_48) + cse_var_47) + c_inner_c_11) + 704)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_47) + c_inner_c_11)]));
            }
          }
          for (int32_t j_c_inner_12 = 0; j_c_inner_12 < 2; ++j_c_inner_12) {
            for (int32_t c_inner_c_12 = 0; c_inner_c_12 < 4; ++c_inner_c_12) {
              int32_t cse_var_53 = (j_c_outer * 8);
              int32_t cse_var_52 = (j_c_inner_12 * 4);
              int32_t cse_var_51 = (dj * 4);
              int32_t cse_var_50 = (((((c_outer_c * 784) + cse_var_53) + cse_var_52) + c_inner_c_12) + 672);
              ((float*)DepthwiseConv2d_global_let)[cse_var_50] = (((float*)DepthwiseConv2d_global_let)[cse_var_50] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_53) + cse_var_52) + cse_var_51) + c_inner_c_12) + 768)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_51) + c_inner_c_12)]));
            }
          }
          for (int32_t j_c_inner_13 = 0; j_c_inner_13 < 2; ++j_c_inner_13) {
            for (int32_t c_inner_c_13 = 0; c_inner_c_13 < 4; ++c_inner_c_13) {
              int32_t cse_var_57 = (j_c_outer * 8);
              int32_t cse_var_56 = (j_c_inner_13 * 4);
              int32_t cse_var_55 = (dj * 4);
              int32_t cse_var_54 = (((((c_outer_c * 784) + cse_var_57) + cse_var_56) + c_inner_c_13) + 728);
              ((float*)DepthwiseConv2d_global_let)[cse_var_54] = (((float*)DepthwiseConv2d_global_let)[cse_var_54] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_57) + cse_var_56) + cse_var_55) + c_inner_c_13) + 832)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_55) + c_inner_c_13)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 256; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
        T_add[(((ax1 * 196) + (ax2 * 14)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 784) + (ax2 * 56)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_27_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_22(float* p0, float* T_add, uint8_t* global_const_workspace_100_var, uint8_t* global_workspace_101_var) {
  void* fused_nn_conv2d_constant_29_let = (&(global_const_workspace_100_var[14960128]));
  void* fused_constant_29_let = (&(global_const_workspace_100_var[12865536]));
  void* data_vec_let = (&(global_workspace_101_var[0]));
  for (int32_t h = 0; h < 14; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 128; ++ci) {
        for (int32_t vw = 0; vw < 7; ++vw) {
          ((float*)data_vec_let)[((((h * 1792) + (w * 896)) + (ci * 7)) + vw)] = p0[((((ci * 196) + (h * 14)) + (w * 7)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 16; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 14; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_101_var[100352]));
        for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 7; ++vw_init) {
            ((float*)conv_let)[((vw_init * 16) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 128; ++ci_1) {
          for (int32_t vc = 0; vc < 16; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 7; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 16) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1792) + (ax3_outer * 896)) + (ci_1 * 7)) + vw_1)] * ((float*)fused_constant_29_let)[(((ax1_outer * 2048) + (ci_1 * 16)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
            T_add[(((((ax1_outer * 3136) + (ax1_inner * 196)) + (ax2_outer * 14)) + (ax3_outer * 7)) + ax3_inner)] = (((float*)conv_let)[((ax3_inner * 16) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_29_let)[((ax1_outer * 16) + ax1_inner)]);
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_23(float* p0, float* T_add, uint8_t* global_const_workspace_104_var, uint8_t* global_workspace_105_var) {
  void* fused_nn_conv2d_constant_30_let = (&(global_const_workspace_104_var[14959104]));
  void* fused_constant_30_let = (&(global_const_workspace_104_var[14864384]));
  void* fused_constant_30_global_global_let = (&(global_workspace_105_var[501760]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 64; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_30_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_30_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_105_var[200704]));
  for (int32_t c_outer_c = 0; c_outer_c < 64; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_105_var[510976]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 16; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 16; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 64) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= ax2_c_1) && (ax2_c_1 < 15)) && (1 <= ax3_c_1)) && (ax3_c_1 < 15)) ? p0[(((((c_outer_c * 784) + (ax1_inner_c * 196)) + (ax2_c_1 * 14)) + ax3_c_1) - 15)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 7; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 56)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 112)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 168)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_4 = 0; j_c_inner_init_4 < 2; ++j_c_inner_init_4) {
        for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_4 * 4)) + c_inner_c_init_4) + 224)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_5 = 0; j_c_inner_init_5 < 2; ++j_c_inner_init_5) {
        for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_5 * 4)) + c_inner_c_init_5) + 280)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_6 = 0; j_c_inner_init_6 < 2; ++j_c_inner_init_6) {
        for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_6 * 4)) + c_inner_c_init_6) + 336)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_7 = 0; j_c_inner_init_7 < 2; ++j_c_inner_init_7) {
        for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_7 * 4)) + c_inner_c_init_7) + 392)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_8 = 0; j_c_inner_init_8 < 2; ++j_c_inner_init_8) {
        for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_8 * 4)) + c_inner_c_init_8) + 448)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_9 = 0; j_c_inner_init_9 < 2; ++j_c_inner_init_9) {
        for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_9 * 4)) + c_inner_c_init_9) + 504)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_10 = 0; j_c_inner_init_10 < 2; ++j_c_inner_init_10) {
        for (int32_t c_inner_c_init_10 = 0; c_inner_c_init_10 < 4; ++c_inner_c_init_10) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_10 * 4)) + c_inner_c_init_10) + 560)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_11 = 0; j_c_inner_init_11 < 2; ++j_c_inner_init_11) {
        for (int32_t c_inner_c_init_11 = 0; c_inner_c_init_11 < 4; ++c_inner_c_init_11) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_11 * 4)) + c_inner_c_init_11) + 616)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_12 = 0; j_c_inner_init_12 < 2; ++j_c_inner_init_12) {
        for (int32_t c_inner_c_init_12 = 0; c_inner_c_init_12 < 4; ++c_inner_c_init_12) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_12 * 4)) + c_inner_c_init_12) + 672)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_13 = 0; j_c_inner_init_13 < 2; ++j_c_inner_init_13) {
        for (int32_t c_inner_c_init_13 = 0; c_inner_c_init_13 < 4; ++c_inner_c_init_13) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_13 * 4)) + c_inner_c_init_13) + 728)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 3; ++di) {
        for (int32_t dj = 0; dj < 3; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 8);
              int32_t cse_var_4 = (j_c_inner * 4);
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 784) + cse_var_5) + cse_var_4) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 64) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_30_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_9 = (j_c_outer * 8);
              int32_t cse_var_8 = (j_c_inner_1 * 4);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 784) + cse_var_9) + cse_var_8) + c_inner_c_1) + 56);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 64)] * ((float*)fused_constant_30_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_7) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_13 = (j_c_outer * 8);
              int32_t cse_var_12 = (j_c_inner_2 * 4);
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 784) + cse_var_13) + cse_var_12) + c_inner_c_2) + 112);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_13) + cse_var_12) + cse_var_11) + c_inner_c_2) + 128)] * ((float*)fused_constant_30_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_11) + c_inner_c_2)]));
            }
          }
          for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_17 = (j_c_outer * 8);
              int32_t cse_var_16 = (j_c_inner_3 * 4);
              int32_t cse_var_15 = (dj * 4);
              int32_t cse_var_14 = (((((c_outer_c * 784) + cse_var_17) + cse_var_16) + c_inner_c_3) + 168);
              ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_17) + cse_var_16) + cse_var_15) + c_inner_c_3) + 192)] * ((float*)fused_constant_30_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_15) + c_inner_c_3)]));
            }
          }
          for (int32_t j_c_inner_4 = 0; j_c_inner_4 < 2; ++j_c_inner_4) {
            for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
              int32_t cse_var_21 = (j_c_outer * 8);
              int32_t cse_var_20 = (j_c_inner_4 * 4);
              int32_t cse_var_19 = (dj * 4);
              int32_t cse_var_18 = (((((c_outer_c * 784) + cse_var_21) + cse_var_20) + c_inner_c_4) + 224);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_21) + cse_var_20) + cse_var_19) + c_inner_c_4) + 256)] * ((float*)fused_constant_30_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_19) + c_inner_c_4)]));
            }
          }
          for (int32_t j_c_inner_5 = 0; j_c_inner_5 < 2; ++j_c_inner_5) {
            for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
              int32_t cse_var_25 = (j_c_outer * 8);
              int32_t cse_var_24 = (j_c_inner_5 * 4);
              int32_t cse_var_23 = (dj * 4);
              int32_t cse_var_22 = (((((c_outer_c * 784) + cse_var_25) + cse_var_24) + c_inner_c_5) + 280);
              ((float*)DepthwiseConv2d_global_let)[cse_var_22] = (((float*)DepthwiseConv2d_global_let)[cse_var_22] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_25) + cse_var_24) + cse_var_23) + c_inner_c_5) + 320)] * ((float*)fused_constant_30_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_23) + c_inner_c_5)]));
            }
          }
          for (int32_t j_c_inner_6 = 0; j_c_inner_6 < 2; ++j_c_inner_6) {
            for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
              int32_t cse_var_29 = (j_c_outer * 8);
              int32_t cse_var_28 = (j_c_inner_6 * 4);
              int32_t cse_var_27 = (dj * 4);
              int32_t cse_var_26 = (((((c_outer_c * 784) + cse_var_29) + cse_var_28) + c_inner_c_6) + 336);
              ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_29) + cse_var_28) + cse_var_27) + c_inner_c_6) + 384)] * ((float*)fused_constant_30_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_27) + c_inner_c_6)]));
            }
          }
          for (int32_t j_c_inner_7 = 0; j_c_inner_7 < 2; ++j_c_inner_7) {
            for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
              int32_t cse_var_33 = (j_c_outer * 8);
              int32_t cse_var_32 = (j_c_inner_7 * 4);
              int32_t cse_var_31 = (dj * 4);
              int32_t cse_var_30 = (((((c_outer_c * 784) + cse_var_33) + cse_var_32) + c_inner_c_7) + 392);
              ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_33) + cse_var_32) + cse_var_31) + c_inner_c_7) + 448)] * ((float*)fused_constant_30_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_31) + c_inner_c_7)]));
            }
          }
          for (int32_t j_c_inner_8 = 0; j_c_inner_8 < 2; ++j_c_inner_8) {
            for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
              int32_t cse_var_37 = (j_c_outer * 8);
              int32_t cse_var_36 = (j_c_inner_8 * 4);
              int32_t cse_var_35 = (dj * 4);
              int32_t cse_var_34 = (((((c_outer_c * 784) + cse_var_37) + cse_var_36) + c_inner_c_8) + 448);
              ((float*)DepthwiseConv2d_global_let)[cse_var_34] = (((float*)DepthwiseConv2d_global_let)[cse_var_34] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_37) + cse_var_36) + cse_var_35) + c_inner_c_8) + 512)] * ((float*)fused_constant_30_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_35) + c_inner_c_8)]));
            }
          }
          for (int32_t j_c_inner_9 = 0; j_c_inner_9 < 2; ++j_c_inner_9) {
            for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
              int32_t cse_var_41 = (j_c_outer * 8);
              int32_t cse_var_40 = (j_c_inner_9 * 4);
              int32_t cse_var_39 = (dj * 4);
              int32_t cse_var_38 = (((((c_outer_c * 784) + cse_var_41) + cse_var_40) + c_inner_c_9) + 504);
              ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_41) + cse_var_40) + cse_var_39) + c_inner_c_9) + 576)] * ((float*)fused_constant_30_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_39) + c_inner_c_9)]));
            }
          }
          for (int32_t j_c_inner_10 = 0; j_c_inner_10 < 2; ++j_c_inner_10) {
            for (int32_t c_inner_c_10 = 0; c_inner_c_10 < 4; ++c_inner_c_10) {
              int32_t cse_var_45 = (j_c_outer * 8);
              int32_t cse_var_44 = (j_c_inner_10 * 4);
              int32_t cse_var_43 = (dj * 4);
              int32_t cse_var_42 = (((((c_outer_c * 784) + cse_var_45) + cse_var_44) + c_inner_c_10) + 560);
              ((float*)DepthwiseConv2d_global_let)[cse_var_42] = (((float*)DepthwiseConv2d_global_let)[cse_var_42] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_45) + cse_var_44) + cse_var_43) + c_inner_c_10) + 640)] * ((float*)fused_constant_30_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_43) + c_inner_c_10)]));
            }
          }
          for (int32_t j_c_inner_11 = 0; j_c_inner_11 < 2; ++j_c_inner_11) {
            for (int32_t c_inner_c_11 = 0; c_inner_c_11 < 4; ++c_inner_c_11) {
              int32_t cse_var_49 = (j_c_outer * 8);
              int32_t cse_var_48 = (j_c_inner_11 * 4);
              int32_t cse_var_47 = (dj * 4);
              int32_t cse_var_46 = (((((c_outer_c * 784) + cse_var_49) + cse_var_48) + c_inner_c_11) + 616);
              ((float*)DepthwiseConv2d_global_let)[cse_var_46] = (((float*)DepthwiseConv2d_global_let)[cse_var_46] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_49) + cse_var_48) + cse_var_47) + c_inner_c_11) + 704)] * ((float*)fused_constant_30_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_47) + c_inner_c_11)]));
            }
          }
          for (int32_t j_c_inner_12 = 0; j_c_inner_12 < 2; ++j_c_inner_12) {
            for (int32_t c_inner_c_12 = 0; c_inner_c_12 < 4; ++c_inner_c_12) {
              int32_t cse_var_53 = (j_c_outer * 8);
              int32_t cse_var_52 = (j_c_inner_12 * 4);
              int32_t cse_var_51 = (dj * 4);
              int32_t cse_var_50 = (((((c_outer_c * 784) + cse_var_53) + cse_var_52) + c_inner_c_12) + 672);
              ((float*)DepthwiseConv2d_global_let)[cse_var_50] = (((float*)DepthwiseConv2d_global_let)[cse_var_50] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_53) + cse_var_52) + cse_var_51) + c_inner_c_12) + 768)] * ((float*)fused_constant_30_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_51) + c_inner_c_12)]));
            }
          }
          for (int32_t j_c_inner_13 = 0; j_c_inner_13 < 2; ++j_c_inner_13) {
            for (int32_t c_inner_c_13 = 0; c_inner_c_13 < 4; ++c_inner_c_13) {
              int32_t cse_var_57 = (j_c_outer * 8);
              int32_t cse_var_56 = (j_c_inner_13 * 4);
              int32_t cse_var_55 = (dj * 4);
              int32_t cse_var_54 = (((((c_outer_c * 784) + cse_var_57) + cse_var_56) + c_inner_c_13) + 728);
              ((float*)DepthwiseConv2d_global_let)[cse_var_54] = (((float*)DepthwiseConv2d_global_let)[cse_var_54] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_57) + cse_var_56) + cse_var_55) + c_inner_c_13) + 832)] * ((float*)fused_constant_30_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_55) + c_inner_c_13)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 256; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
        T_add[(((ax1 * 196) + (ax2 * 14)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 784) + (ax2 * 56)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_30_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_24(float* p0, float* T_add, uint8_t* global_const_workspace_110_var, uint8_t* global_workspace_111_var) {
  void* fused_nn_conv2d_constant_32_let = (&(global_const_workspace_110_var[14958080]));
  void* fused_constant_32_let = (&(global_const_workspace_110_var[12603392]));
  void* data_vec_let = (&(global_workspace_111_var[0]));
  for (int32_t h = 0; h < 14; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 128; ++ci) {
        for (int32_t vw = 0; vw < 7; ++vw) {
          ((float*)data_vec_let)[((((h * 1792) + (w * 896)) + (ci * 7)) + vw)] = p0[((((ci * 196) + (h * 14)) + (w * 7)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 16; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 14; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_111_var[100352]));
        for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 7; ++vw_init) {
            ((float*)conv_let)[((vw_init * 16) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 128; ++ci_1) {
          for (int32_t vc = 0; vc < 16; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 7; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 16) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1792) + (ax3_outer * 896)) + (ci_1 * 7)) + vw_1)] * ((float*)fused_constant_32_let)[(((ax1_outer * 2048) + (ci_1 * 16)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
            T_add[(((((ax1_outer * 3136) + (ax1_inner * 196)) + (ax2_outer * 14)) + (ax3_outer * 7)) + ax3_inner)] = (((float*)conv_let)[((ax3_inner * 16) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_32_let)[((ax1_outer * 16) + ax1_inner)]);
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_25(float* p0, float* T_add, uint8_t* global_const_workspace_114_var, uint8_t* global_workspace_115_var) {
  void* fused_nn_conv2d_constant_33_let = (&(global_const_workspace_114_var[14957056]));
  void* fused_constant_33_let = (&(global_const_workspace_114_var[14855168]));
  void* fused_constant_33_global_global_let = (&(global_workspace_115_var[401408]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 64; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_33_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_33_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_115_var[200704]));
  for (int32_t c_outer_c = 0; c_outer_c < 64; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_115_var[410624]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 16; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 16; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 64) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= ax2_c_1) && (ax2_c_1 < 15)) && (1 <= ax3_c_1)) && (ax3_c_1 < 15)) ? p0[(((((c_outer_c * 784) + (ax1_inner_c * 196)) + (ax2_c_1 * 14)) + ax3_c_1) - 15)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 7; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 56)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 112)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 168)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_4 = 0; j_c_inner_init_4 < 2; ++j_c_inner_init_4) {
        for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_4 * 4)) + c_inner_c_init_4) + 224)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_5 = 0; j_c_inner_init_5 < 2; ++j_c_inner_init_5) {
        for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_5 * 4)) + c_inner_c_init_5) + 280)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_6 = 0; j_c_inner_init_6 < 2; ++j_c_inner_init_6) {
        for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_6 * 4)) + c_inner_c_init_6) + 336)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_7 = 0; j_c_inner_init_7 < 2; ++j_c_inner_init_7) {
        for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_7 * 4)) + c_inner_c_init_7) + 392)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_8 = 0; j_c_inner_init_8 < 2; ++j_c_inner_init_8) {
        for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_8 * 4)) + c_inner_c_init_8) + 448)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_9 = 0; j_c_inner_init_9 < 2; ++j_c_inner_init_9) {
        for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_9 * 4)) + c_inner_c_init_9) + 504)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_10 = 0; j_c_inner_init_10 < 2; ++j_c_inner_init_10) {
        for (int32_t c_inner_c_init_10 = 0; c_inner_c_init_10 < 4; ++c_inner_c_init_10) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_10 * 4)) + c_inner_c_init_10) + 560)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_11 = 0; j_c_inner_init_11 < 2; ++j_c_inner_init_11) {
        for (int32_t c_inner_c_init_11 = 0; c_inner_c_init_11 < 4; ++c_inner_c_init_11) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_11 * 4)) + c_inner_c_init_11) + 616)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_12 = 0; j_c_inner_init_12 < 2; ++j_c_inner_init_12) {
        for (int32_t c_inner_c_init_12 = 0; c_inner_c_init_12 < 4; ++c_inner_c_init_12) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_12 * 4)) + c_inner_c_init_12) + 672)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_13 = 0; j_c_inner_init_13 < 2; ++j_c_inner_init_13) {
        for (int32_t c_inner_c_init_13 = 0; c_inner_c_init_13 < 4; ++c_inner_c_init_13) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_13 * 4)) + c_inner_c_init_13) + 728)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 3; ++di) {
        for (int32_t dj = 0; dj < 3; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 8);
              int32_t cse_var_4 = (j_c_inner * 4);
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 784) + cse_var_5) + cse_var_4) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 64) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_9 = (j_c_outer * 8);
              int32_t cse_var_8 = (j_c_inner_1 * 4);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 784) + cse_var_9) + cse_var_8) + c_inner_c_1) + 56);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 64)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_7) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_13 = (j_c_outer * 8);
              int32_t cse_var_12 = (j_c_inner_2 * 4);
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 784) + cse_var_13) + cse_var_12) + c_inner_c_2) + 112);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_13) + cse_var_12) + cse_var_11) + c_inner_c_2) + 128)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_11) + c_inner_c_2)]));
            }
          }
          for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_17 = (j_c_outer * 8);
              int32_t cse_var_16 = (j_c_inner_3 * 4);
              int32_t cse_var_15 = (dj * 4);
              int32_t cse_var_14 = (((((c_outer_c * 784) + cse_var_17) + cse_var_16) + c_inner_c_3) + 168);
              ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_17) + cse_var_16) + cse_var_15) + c_inner_c_3) + 192)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_15) + c_inner_c_3)]));
            }
          }
          for (int32_t j_c_inner_4 = 0; j_c_inner_4 < 2; ++j_c_inner_4) {
            for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
              int32_t cse_var_21 = (j_c_outer * 8);
              int32_t cse_var_20 = (j_c_inner_4 * 4);
              int32_t cse_var_19 = (dj * 4);
              int32_t cse_var_18 = (((((c_outer_c * 784) + cse_var_21) + cse_var_20) + c_inner_c_4) + 224);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_21) + cse_var_20) + cse_var_19) + c_inner_c_4) + 256)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_19) + c_inner_c_4)]));
            }
          }
          for (int32_t j_c_inner_5 = 0; j_c_inner_5 < 2; ++j_c_inner_5) {
            for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
              int32_t cse_var_25 = (j_c_outer * 8);
              int32_t cse_var_24 = (j_c_inner_5 * 4);
              int32_t cse_var_23 = (dj * 4);
              int32_t cse_var_22 = (((((c_outer_c * 784) + cse_var_25) + cse_var_24) + c_inner_c_5) + 280);
              ((float*)DepthwiseConv2d_global_let)[cse_var_22] = (((float*)DepthwiseConv2d_global_let)[cse_var_22] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_25) + cse_var_24) + cse_var_23) + c_inner_c_5) + 320)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_23) + c_inner_c_5)]));
            }
          }
          for (int32_t j_c_inner_6 = 0; j_c_inner_6 < 2; ++j_c_inner_6) {
            for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
              int32_t cse_var_29 = (j_c_outer * 8);
              int32_t cse_var_28 = (j_c_inner_6 * 4);
              int32_t cse_var_27 = (dj * 4);
              int32_t cse_var_26 = (((((c_outer_c * 784) + cse_var_29) + cse_var_28) + c_inner_c_6) + 336);
              ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_29) + cse_var_28) + cse_var_27) + c_inner_c_6) + 384)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_27) + c_inner_c_6)]));
            }
          }
          for (int32_t j_c_inner_7 = 0; j_c_inner_7 < 2; ++j_c_inner_7) {
            for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
              int32_t cse_var_33 = (j_c_outer * 8);
              int32_t cse_var_32 = (j_c_inner_7 * 4);
              int32_t cse_var_31 = (dj * 4);
              int32_t cse_var_30 = (((((c_outer_c * 784) + cse_var_33) + cse_var_32) + c_inner_c_7) + 392);
              ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_33) + cse_var_32) + cse_var_31) + c_inner_c_7) + 448)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_31) + c_inner_c_7)]));
            }
          }
          for (int32_t j_c_inner_8 = 0; j_c_inner_8 < 2; ++j_c_inner_8) {
            for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
              int32_t cse_var_37 = (j_c_outer * 8);
              int32_t cse_var_36 = (j_c_inner_8 * 4);
              int32_t cse_var_35 = (dj * 4);
              int32_t cse_var_34 = (((((c_outer_c * 784) + cse_var_37) + cse_var_36) + c_inner_c_8) + 448);
              ((float*)DepthwiseConv2d_global_let)[cse_var_34] = (((float*)DepthwiseConv2d_global_let)[cse_var_34] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_37) + cse_var_36) + cse_var_35) + c_inner_c_8) + 512)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_35) + c_inner_c_8)]));
            }
          }
          for (int32_t j_c_inner_9 = 0; j_c_inner_9 < 2; ++j_c_inner_9) {
            for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
              int32_t cse_var_41 = (j_c_outer * 8);
              int32_t cse_var_40 = (j_c_inner_9 * 4);
              int32_t cse_var_39 = (dj * 4);
              int32_t cse_var_38 = (((((c_outer_c * 784) + cse_var_41) + cse_var_40) + c_inner_c_9) + 504);
              ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_41) + cse_var_40) + cse_var_39) + c_inner_c_9) + 576)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_39) + c_inner_c_9)]));
            }
          }
          for (int32_t j_c_inner_10 = 0; j_c_inner_10 < 2; ++j_c_inner_10) {
            for (int32_t c_inner_c_10 = 0; c_inner_c_10 < 4; ++c_inner_c_10) {
              int32_t cse_var_45 = (j_c_outer * 8);
              int32_t cse_var_44 = (j_c_inner_10 * 4);
              int32_t cse_var_43 = (dj * 4);
              int32_t cse_var_42 = (((((c_outer_c * 784) + cse_var_45) + cse_var_44) + c_inner_c_10) + 560);
              ((float*)DepthwiseConv2d_global_let)[cse_var_42] = (((float*)DepthwiseConv2d_global_let)[cse_var_42] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_45) + cse_var_44) + cse_var_43) + c_inner_c_10) + 640)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_43) + c_inner_c_10)]));
            }
          }
          for (int32_t j_c_inner_11 = 0; j_c_inner_11 < 2; ++j_c_inner_11) {
            for (int32_t c_inner_c_11 = 0; c_inner_c_11 < 4; ++c_inner_c_11) {
              int32_t cse_var_49 = (j_c_outer * 8);
              int32_t cse_var_48 = (j_c_inner_11 * 4);
              int32_t cse_var_47 = (dj * 4);
              int32_t cse_var_46 = (((((c_outer_c * 784) + cse_var_49) + cse_var_48) + c_inner_c_11) + 616);
              ((float*)DepthwiseConv2d_global_let)[cse_var_46] = (((float*)DepthwiseConv2d_global_let)[cse_var_46] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_49) + cse_var_48) + cse_var_47) + c_inner_c_11) + 704)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_47) + c_inner_c_11)]));
            }
          }
          for (int32_t j_c_inner_12 = 0; j_c_inner_12 < 2; ++j_c_inner_12) {
            for (int32_t c_inner_c_12 = 0; c_inner_c_12 < 4; ++c_inner_c_12) {
              int32_t cse_var_53 = (j_c_outer * 8);
              int32_t cse_var_52 = (j_c_inner_12 * 4);
              int32_t cse_var_51 = (dj * 4);
              int32_t cse_var_50 = (((((c_outer_c * 784) + cse_var_53) + cse_var_52) + c_inner_c_12) + 672);
              ((float*)DepthwiseConv2d_global_let)[cse_var_50] = (((float*)DepthwiseConv2d_global_let)[cse_var_50] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_53) + cse_var_52) + cse_var_51) + c_inner_c_12) + 768)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_51) + c_inner_c_12)]));
            }
          }
          for (int32_t j_c_inner_13 = 0; j_c_inner_13 < 2; ++j_c_inner_13) {
            for (int32_t c_inner_c_13 = 0; c_inner_c_13 < 4; ++c_inner_c_13) {
              int32_t cse_var_57 = (j_c_outer * 8);
              int32_t cse_var_56 = (j_c_inner_13 * 4);
              int32_t cse_var_55 = (dj * 4);
              int32_t cse_var_54 = (((((c_outer_c * 784) + cse_var_57) + cse_var_56) + c_inner_c_13) + 728);
              ((float*)DepthwiseConv2d_global_let)[cse_var_54] = (((float*)DepthwiseConv2d_global_let)[cse_var_54] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_57) + cse_var_56) + cse_var_55) + c_inner_c_13) + 832)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_55) + c_inner_c_13)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 256; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
        T_add[(((ax1 * 196) + (ax2 * 14)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 784) + (ax2 * 56)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_33_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_26(float* p0, float* T_add, uint8_t* global_const_workspace_120_var, uint8_t* global_workspace_121_var) {
  void* fused_nn_conv2d_constant_35_let = (&(global_const_workspace_120_var[14956032]));
  void* fused_constant_35_let = (&(global_const_workspace_120_var[12341248]));
  void* data_vec_let = (&(global_workspace_121_var[0]));
  for (int32_t h = 0; h < 14; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 128; ++ci) {
        for (int32_t vw = 0; vw < 7; ++vw) {
          ((float*)data_vec_let)[((((h * 1792) + (w * 896)) + (ci * 7)) + vw)] = p0[((((ci * 196) + (h * 14)) + (w * 7)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 16; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 14; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_121_var[100352]));
        for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 7; ++vw_init) {
            ((float*)conv_let)[((vw_init * 16) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 128; ++ci_1) {
          for (int32_t vc = 0; vc < 16; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 7; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 16) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1792) + (ax3_outer * 896)) + (ci_1 * 7)) + vw_1)] * ((float*)fused_constant_35_let)[(((ax1_outer * 2048) + (ci_1 * 16)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
            T_add[(((((ax1_outer * 3136) + (ax1_inner * 196)) + (ax2_outer * 14)) + (ax3_outer * 7)) + ax3_inner)] = (((float*)conv_let)[((ax3_inner * 16) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_35_let)[((ax1_outer * 16) + ax1_inner)]);
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_27(float* p0, float* T_add, uint8_t* global_const_workspace_124_var, uint8_t* global_workspace_125_var) {
  void* fused_nn_conv2d_constant_36_let = (&(global_const_workspace_124_var[14955008]));
  void* fused_constant_36_let = (&(global_const_workspace_124_var[14845952]));
  void* fused_constant_36_global_global_let = (&(global_workspace_125_var[501760]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 64; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_36_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_36_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_125_var[200704]));
  for (int32_t c_outer_c = 0; c_outer_c < 64; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_125_var[510976]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 16; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 16; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 64) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= ax2_c_1) && (ax2_c_1 < 15)) && (1 <= ax3_c_1)) && (ax3_c_1 < 15)) ? p0[(((((c_outer_c * 784) + (ax1_inner_c * 196)) + (ax2_c_1 * 14)) + ax3_c_1) - 15)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 7; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 56)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 112)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 168)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_4 = 0; j_c_inner_init_4 < 2; ++j_c_inner_init_4) {
        for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_4 * 4)) + c_inner_c_init_4) + 224)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_5 = 0; j_c_inner_init_5 < 2; ++j_c_inner_init_5) {
        for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_5 * 4)) + c_inner_c_init_5) + 280)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_6 = 0; j_c_inner_init_6 < 2; ++j_c_inner_init_6) {
        for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_6 * 4)) + c_inner_c_init_6) + 336)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_7 = 0; j_c_inner_init_7 < 2; ++j_c_inner_init_7) {
        for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_7 * 4)) + c_inner_c_init_7) + 392)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_8 = 0; j_c_inner_init_8 < 2; ++j_c_inner_init_8) {
        for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_8 * 4)) + c_inner_c_init_8) + 448)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_9 = 0; j_c_inner_init_9 < 2; ++j_c_inner_init_9) {
        for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_9 * 4)) + c_inner_c_init_9) + 504)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_10 = 0; j_c_inner_init_10 < 2; ++j_c_inner_init_10) {
        for (int32_t c_inner_c_init_10 = 0; c_inner_c_init_10 < 4; ++c_inner_c_init_10) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_10 * 4)) + c_inner_c_init_10) + 560)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_11 = 0; j_c_inner_init_11 < 2; ++j_c_inner_init_11) {
        for (int32_t c_inner_c_init_11 = 0; c_inner_c_init_11 < 4; ++c_inner_c_init_11) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_11 * 4)) + c_inner_c_init_11) + 616)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_12 = 0; j_c_inner_init_12 < 2; ++j_c_inner_init_12) {
        for (int32_t c_inner_c_init_12 = 0; c_inner_c_init_12 < 4; ++c_inner_c_init_12) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_12 * 4)) + c_inner_c_init_12) + 672)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_13 = 0; j_c_inner_init_13 < 2; ++j_c_inner_init_13) {
        for (int32_t c_inner_c_init_13 = 0; c_inner_c_init_13 < 4; ++c_inner_c_init_13) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_13 * 4)) + c_inner_c_init_13) + 728)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 3; ++di) {
        for (int32_t dj = 0; dj < 3; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 8);
              int32_t cse_var_4 = (j_c_inner * 4);
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 784) + cse_var_5) + cse_var_4) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 64) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_36_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_9 = (j_c_outer * 8);
              int32_t cse_var_8 = (j_c_inner_1 * 4);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 784) + cse_var_9) + cse_var_8) + c_inner_c_1) + 56);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 64)] * ((float*)fused_constant_36_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_7) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_13 = (j_c_outer * 8);
              int32_t cse_var_12 = (j_c_inner_2 * 4);
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 784) + cse_var_13) + cse_var_12) + c_inner_c_2) + 112);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_13) + cse_var_12) + cse_var_11) + c_inner_c_2) + 128)] * ((float*)fused_constant_36_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_11) + c_inner_c_2)]));
            }
          }
          for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_17 = (j_c_outer * 8);
              int32_t cse_var_16 = (j_c_inner_3 * 4);
              int32_t cse_var_15 = (dj * 4);
              int32_t cse_var_14 = (((((c_outer_c * 784) + cse_var_17) + cse_var_16) + c_inner_c_3) + 168);
              ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_17) + cse_var_16) + cse_var_15) + c_inner_c_3) + 192)] * ((float*)fused_constant_36_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_15) + c_inner_c_3)]));
            }
          }
          for (int32_t j_c_inner_4 = 0; j_c_inner_4 < 2; ++j_c_inner_4) {
            for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
              int32_t cse_var_21 = (j_c_outer * 8);
              int32_t cse_var_20 = (j_c_inner_4 * 4);
              int32_t cse_var_19 = (dj * 4);
              int32_t cse_var_18 = (((((c_outer_c * 784) + cse_var_21) + cse_var_20) + c_inner_c_4) + 224);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_21) + cse_var_20) + cse_var_19) + c_inner_c_4) + 256)] * ((float*)fused_constant_36_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_19) + c_inner_c_4)]));
            }
          }
          for (int32_t j_c_inner_5 = 0; j_c_inner_5 < 2; ++j_c_inner_5) {
            for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
              int32_t cse_var_25 = (j_c_outer * 8);
              int32_t cse_var_24 = (j_c_inner_5 * 4);
              int32_t cse_var_23 = (dj * 4);
              int32_t cse_var_22 = (((((c_outer_c * 784) + cse_var_25) + cse_var_24) + c_inner_c_5) + 280);
              ((float*)DepthwiseConv2d_global_let)[cse_var_22] = (((float*)DepthwiseConv2d_global_let)[cse_var_22] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_25) + cse_var_24) + cse_var_23) + c_inner_c_5) + 320)] * ((float*)fused_constant_36_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_23) + c_inner_c_5)]));
            }
          }
          for (int32_t j_c_inner_6 = 0; j_c_inner_6 < 2; ++j_c_inner_6) {
            for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
              int32_t cse_var_29 = (j_c_outer * 8);
              int32_t cse_var_28 = (j_c_inner_6 * 4);
              int32_t cse_var_27 = (dj * 4);
              int32_t cse_var_26 = (((((c_outer_c * 784) + cse_var_29) + cse_var_28) + c_inner_c_6) + 336);
              ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_29) + cse_var_28) + cse_var_27) + c_inner_c_6) + 384)] * ((float*)fused_constant_36_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_27) + c_inner_c_6)]));
            }
          }
          for (int32_t j_c_inner_7 = 0; j_c_inner_7 < 2; ++j_c_inner_7) {
            for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
              int32_t cse_var_33 = (j_c_outer * 8);
              int32_t cse_var_32 = (j_c_inner_7 * 4);
              int32_t cse_var_31 = (dj * 4);
              int32_t cse_var_30 = (((((c_outer_c * 784) + cse_var_33) + cse_var_32) + c_inner_c_7) + 392);
              ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_33) + cse_var_32) + cse_var_31) + c_inner_c_7) + 448)] * ((float*)fused_constant_36_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_31) + c_inner_c_7)]));
            }
          }
          for (int32_t j_c_inner_8 = 0; j_c_inner_8 < 2; ++j_c_inner_8) {
            for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
              int32_t cse_var_37 = (j_c_outer * 8);
              int32_t cse_var_36 = (j_c_inner_8 * 4);
              int32_t cse_var_35 = (dj * 4);
              int32_t cse_var_34 = (((((c_outer_c * 784) + cse_var_37) + cse_var_36) + c_inner_c_8) + 448);
              ((float*)DepthwiseConv2d_global_let)[cse_var_34] = (((float*)DepthwiseConv2d_global_let)[cse_var_34] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_37) + cse_var_36) + cse_var_35) + c_inner_c_8) + 512)] * ((float*)fused_constant_36_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_35) + c_inner_c_8)]));
            }
          }
          for (int32_t j_c_inner_9 = 0; j_c_inner_9 < 2; ++j_c_inner_9) {
            for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
              int32_t cse_var_41 = (j_c_outer * 8);
              int32_t cse_var_40 = (j_c_inner_9 * 4);
              int32_t cse_var_39 = (dj * 4);
              int32_t cse_var_38 = (((((c_outer_c * 784) + cse_var_41) + cse_var_40) + c_inner_c_9) + 504);
              ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_41) + cse_var_40) + cse_var_39) + c_inner_c_9) + 576)] * ((float*)fused_constant_36_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_39) + c_inner_c_9)]));
            }
          }
          for (int32_t j_c_inner_10 = 0; j_c_inner_10 < 2; ++j_c_inner_10) {
            for (int32_t c_inner_c_10 = 0; c_inner_c_10 < 4; ++c_inner_c_10) {
              int32_t cse_var_45 = (j_c_outer * 8);
              int32_t cse_var_44 = (j_c_inner_10 * 4);
              int32_t cse_var_43 = (dj * 4);
              int32_t cse_var_42 = (((((c_outer_c * 784) + cse_var_45) + cse_var_44) + c_inner_c_10) + 560);
              ((float*)DepthwiseConv2d_global_let)[cse_var_42] = (((float*)DepthwiseConv2d_global_let)[cse_var_42] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_45) + cse_var_44) + cse_var_43) + c_inner_c_10) + 640)] * ((float*)fused_constant_36_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_43) + c_inner_c_10)]));
            }
          }
          for (int32_t j_c_inner_11 = 0; j_c_inner_11 < 2; ++j_c_inner_11) {
            for (int32_t c_inner_c_11 = 0; c_inner_c_11 < 4; ++c_inner_c_11) {
              int32_t cse_var_49 = (j_c_outer * 8);
              int32_t cse_var_48 = (j_c_inner_11 * 4);
              int32_t cse_var_47 = (dj * 4);
              int32_t cse_var_46 = (((((c_outer_c * 784) + cse_var_49) + cse_var_48) + c_inner_c_11) + 616);
              ((float*)DepthwiseConv2d_global_let)[cse_var_46] = (((float*)DepthwiseConv2d_global_let)[cse_var_46] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_49) + cse_var_48) + cse_var_47) + c_inner_c_11) + 704)] * ((float*)fused_constant_36_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_47) + c_inner_c_11)]));
            }
          }
          for (int32_t j_c_inner_12 = 0; j_c_inner_12 < 2; ++j_c_inner_12) {
            for (int32_t c_inner_c_12 = 0; c_inner_c_12 < 4; ++c_inner_c_12) {
              int32_t cse_var_53 = (j_c_outer * 8);
              int32_t cse_var_52 = (j_c_inner_12 * 4);
              int32_t cse_var_51 = (dj * 4);
              int32_t cse_var_50 = (((((c_outer_c * 784) + cse_var_53) + cse_var_52) + c_inner_c_12) + 672);
              ((float*)DepthwiseConv2d_global_let)[cse_var_50] = (((float*)DepthwiseConv2d_global_let)[cse_var_50] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_53) + cse_var_52) + cse_var_51) + c_inner_c_12) + 768)] * ((float*)fused_constant_36_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_51) + c_inner_c_12)]));
            }
          }
          for (int32_t j_c_inner_13 = 0; j_c_inner_13 < 2; ++j_c_inner_13) {
            for (int32_t c_inner_c_13 = 0; c_inner_c_13 < 4; ++c_inner_c_13) {
              int32_t cse_var_57 = (j_c_outer * 8);
              int32_t cse_var_56 = (j_c_inner_13 * 4);
              int32_t cse_var_55 = (dj * 4);
              int32_t cse_var_54 = (((((c_outer_c * 784) + cse_var_57) + cse_var_56) + c_inner_c_13) + 728);
              ((float*)DepthwiseConv2d_global_let)[cse_var_54] = (((float*)DepthwiseConv2d_global_let)[cse_var_54] + (((float*)PaddedInput_global_global_let)[((((((di * 64) + cse_var_57) + cse_var_56) + cse_var_55) + c_inner_c_13) + 832)] * ((float*)fused_constant_36_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_55) + c_inner_c_13)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 256; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
        T_add[(((ax1 * 196) + (ax2 * 14)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 784) + (ax2 * 56)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_36_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_28(float* p0, float* T_add, uint8_t* global_const_workspace_130_var, uint8_t* global_workspace_131_var) {
  void* fused_nn_conv2d_constant_38_let = (&(global_const_workspace_130_var[14948864]));
  void* fused_constant_38_let = (&(global_const_workspace_130_var[8814592]));
  void* data_vec_let = (&(global_workspace_131_var[0]));
  for (int32_t h = 0; h < 14; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 128; ++ci) {
        for (int32_t vw = 0; vw < 7; ++vw) {
          ((float*)data_vec_let)[((((h * 1792) + (w * 896)) + (ci * 7)) + vw)] = p0[((((ci * 196) + (h * 14)) + (w * 7)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 32; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 14; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_131_var[100352]));
        for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 7; ++vw_init) {
            ((float*)conv_let)[((vw_init * 16) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 128; ++ci_1) {
          for (int32_t vc = 0; vc < 16; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 7; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 16) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1792) + (ax3_outer * 896)) + (ci_1 * 7)) + vw_1)] * ((float*)fused_constant_38_let)[(((ax1_outer * 2048) + (ci_1 * 16)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
            T_add[(((((ax1_outer * 3136) + (ax1_inner * 196)) + (ax2_outer * 14)) + (ax3_outer * 7)) + ax3_inner)] = (((float*)conv_let)[((ax3_inner * 16) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_38_let)[((ax1_outer * 16) + ax1_inner)]);
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_29(float* p0, float* T_add, uint8_t* global_const_workspace_134_var, uint8_t* global_workspace_135_var) {
  void* fused_nn_conv2d_constant_39_let = (&(global_const_workspace_134_var[14946816]));
  void* fused_constant_39_let = (&(global_const_workspace_134_var[14809088]));
  void* fused_constant_39_global_global_let = (&(global_workspace_135_var[501760]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 256; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 2; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 18);
          ((float*)fused_constant_39_global_global_let)[(((cse_var_1 + (ax2_c * 6)) + (ax3_c * 2)) + ax0_inner_c)] = ((float*)fused_constant_39_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_135_var[401408]));
  for (int32_t c_outer_c = 0; c_outer_c < 256; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_135_var[520192]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 15; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 15; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 2; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 30) + (ax3_c_1 * 2)) + ax1_inner_c)] = (((1 <= ax2_c_1) && (1 <= ax3_c_1)) ? p0[(((((c_outer_c * 392) + (ax1_inner_c * 196)) + (ax2_c_1 * 14)) + ax3_c_1) - 15)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 7; ++j_c_outer) {
      for (int32_t c_inner_c_init = 0; c_inner_c_init < 2; ++c_inner_c_init) {
        ((float*)DepthwiseConv2d_global_let)[(((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 2; ++c_inner_c_init_1) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_1) + 14)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 2; ++c_inner_c_init_2) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_2) + 28)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 2; ++c_inner_c_init_3) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_3) + 42)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 2; ++c_inner_c_init_4) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_4) + 56)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 2; ++c_inner_c_init_5) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_5) + 70)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 2; ++c_inner_c_init_6) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_6) + 84)] = 0.000000e+00f;
      }
      for (int32_t di = 0; di < 3; ++di) {
        for (int32_t dj = 0; dj < 3; ++dj) {
          for (int32_t c_inner_c = 0; c_inner_c < 2; ++c_inner_c) {
            int32_t cse_var_3 = (dj * 2);
            int32_t cse_var_2 = (((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c);
            ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[((((di * 30) + (j_c_outer * 4)) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_39_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_3) + c_inner_c)]));
          }
          for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 2; ++c_inner_c_1) {
            int32_t cse_var_5 = (dj * 2);
            int32_t cse_var_4 = ((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_1) + 14);
            ((float*)DepthwiseConv2d_global_let)[cse_var_4] = (((float*)DepthwiseConv2d_global_let)[cse_var_4] + (((float*)PaddedInput_global_global_let)[(((((di * 30) + (j_c_outer * 4)) + cse_var_5) + c_inner_c_1) + 60)] * ((float*)fused_constant_39_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_5) + c_inner_c_1)]));
          }
          for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 2; ++c_inner_c_2) {
            int32_t cse_var_7 = (dj * 2);
            int32_t cse_var_6 = ((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_2) + 28);
            ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[(((((di * 30) + (j_c_outer * 4)) + cse_var_7) + c_inner_c_2) + 120)] * ((float*)fused_constant_39_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_7) + c_inner_c_2)]));
          }
          for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 2; ++c_inner_c_3) {
            int32_t cse_var_9 = (dj * 2);
            int32_t cse_var_8 = ((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_3) + 42);
            ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_global_global_let)[(((((di * 30) + (j_c_outer * 4)) + cse_var_9) + c_inner_c_3) + 180)] * ((float*)fused_constant_39_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_9) + c_inner_c_3)]));
          }
          for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 2; ++c_inner_c_4) {
            int32_t cse_var_11 = (dj * 2);
            int32_t cse_var_10 = ((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_4) + 56);
            ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[(((((di * 30) + (j_c_outer * 4)) + cse_var_11) + c_inner_c_4) + 240)] * ((float*)fused_constant_39_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_11) + c_inner_c_4)]));
          }
          for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 2; ++c_inner_c_5) {
            int32_t cse_var_13 = (dj * 2);
            int32_t cse_var_12 = ((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_5) + 70);
            ((float*)DepthwiseConv2d_global_let)[cse_var_12] = (((float*)DepthwiseConv2d_global_let)[cse_var_12] + (((float*)PaddedInput_global_global_let)[(((((di * 30) + (j_c_outer * 4)) + cse_var_13) + c_inner_c_5) + 300)] * ((float*)fused_constant_39_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_13) + c_inner_c_5)]));
          }
          for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 2; ++c_inner_c_6) {
            int32_t cse_var_15 = (dj * 2);
            int32_t cse_var_14 = ((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_6) + 84);
            ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[(((((di * 30) + (j_c_outer * 4)) + cse_var_15) + c_inner_c_6) + 360)] * ((float*)fused_constant_39_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_15) + c_inner_c_6)]));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 512; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 7; ++ax3) {
        T_add[(((ax1 * 49) + (ax2 * 7)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 1) * 98) + (ax2 * 14)) + (ax3 * 2)) + (ax1 & 1))] + ((float*)fused_nn_conv2d_constant_39_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_3(float* p0, float* T_add, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  void* fused_nn_conv2d_constant_3_let = (&(global_const_workspace_14_var[14974976]));
  void* fused_constant_3_let = (&(global_const_workspace_14_var[14926592]));
  void* fused_constant_3_global_global_let = (&(global_workspace_15_var[2033488]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 32; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_3_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_3_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_15_var[1605632]));
  for (int32_t c_outer_c = 0; c_outer_c < 32; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 2; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_15_var[2007040]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 29; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 57; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 228) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((1 <= ((i_c_outer * 28) + ax2_c_1)) && (1 <= ax3_c_1)) ? p0[((((((c_outer_c * 12544) + (ax1_inner_c * 3136)) + (i_c_outer * 1568)) + (ax2_c_1 * 56)) + ax3_c_1) - 57)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 14; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 112)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 224)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 336)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_4 = 0; j_c_inner_init_4 < 2; ++j_c_inner_init_4) {
          for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_4 * 4)) + c_inner_c_init_4) + 448)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_5 = 0; j_c_inner_init_5 < 2; ++j_c_inner_init_5) {
          for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_5 * 4)) + c_inner_c_init_5) + 560)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_6 = 0; j_c_inner_init_6 < 2; ++j_c_inner_init_6) {
          for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_6 * 4)) + c_inner_c_init_6) + 672)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_7 = 0; j_c_inner_init_7 < 2; ++j_c_inner_init_7) {
          for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_7 * 4)) + c_inner_c_init_7) + 784)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_8 = 0; j_c_inner_init_8 < 2; ++j_c_inner_init_8) {
          for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_8 * 4)) + c_inner_c_init_8) + 896)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_9 = 0; j_c_inner_init_9 < 2; ++j_c_inner_init_9) {
          for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_9 * 4)) + c_inner_c_init_9) + 1008)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_10 = 0; j_c_inner_init_10 < 2; ++j_c_inner_init_10) {
          for (int32_t c_inner_c_init_10 = 0; c_inner_c_init_10 < 4; ++c_inner_c_init_10) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_10 * 4)) + c_inner_c_init_10) + 1120)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_11 = 0; j_c_inner_init_11 < 2; ++j_c_inner_init_11) {
          for (int32_t c_inner_c_init_11 = 0; c_inner_c_init_11 < 4; ++c_inner_c_init_11) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_11 * 4)) + c_inner_c_init_11) + 1232)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_12 = 0; j_c_inner_init_12 < 2; ++j_c_inner_init_12) {
          for (int32_t c_inner_c_init_12 = 0; c_inner_c_init_12 < 4; ++c_inner_c_init_12) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_12 * 4)) + c_inner_c_init_12) + 1344)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_13 = 0; j_c_inner_init_13 < 2; ++j_c_inner_init_13) {
          for (int32_t c_inner_c_init_13 = 0; c_inner_c_init_13 < 4; ++c_inner_c_init_13) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_13 * 4)) + c_inner_c_init_13) + 1456)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_3 = (dj * 4);
                int32_t cse_var_2 = (((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner * 4)) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 228) + (j_c_outer * 16)) + (j_c_inner * 8)) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_3_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_3) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_5 = (dj * 4);
                int32_t cse_var_4 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_1 * 4)) + c_inner_c_1) + 112);
                ((float*)DepthwiseConv2d_global_let)[cse_var_4] = (((float*)DepthwiseConv2d_global_let)[cse_var_4] + (((float*)PaddedInput_global_global_let)[((((((di * 228) + (j_c_outer * 16)) + (j_c_inner_1 * 8)) + cse_var_5) + c_inner_c_1) + 456)] * ((float*)fused_constant_3_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_5) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_7 = (dj * 4);
                int32_t cse_var_6 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_2 * 4)) + c_inner_c_2) + 224);
                ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 228) + (j_c_outer * 16)) + (j_c_inner_2 * 8)) + cse_var_7) + c_inner_c_2) + 912)] * ((float*)fused_constant_3_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_7) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_9 = (dj * 4);
                int32_t cse_var_8 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_3 * 4)) + c_inner_c_3) + 336);
                ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_global_global_let)[((((((di * 228) + (j_c_outer * 16)) + (j_c_inner_3 * 8)) + cse_var_9) + c_inner_c_3) + 1368)] * ((float*)fused_constant_3_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_9) + c_inner_c_3)]));
              }
            }
            for (int32_t j_c_inner_4 = 0; j_c_inner_4 < 2; ++j_c_inner_4) {
              for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
                int32_t cse_var_11 = (dj * 4);
                int32_t cse_var_10 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_4 * 4)) + c_inner_c_4) + 448);
                ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 228) + (j_c_outer * 16)) + (j_c_inner_4 * 8)) + cse_var_11) + c_inner_c_4) + 1824)] * ((float*)fused_constant_3_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_11) + c_inner_c_4)]));
              }
            }
            for (int32_t j_c_inner_5 = 0; j_c_inner_5 < 2; ++j_c_inner_5) {
              for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
                int32_t cse_var_13 = (dj * 4);
                int32_t cse_var_12 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_5 * 4)) + c_inner_c_5) + 560);
                ((float*)DepthwiseConv2d_global_let)[cse_var_12] = (((float*)DepthwiseConv2d_global_let)[cse_var_12] + (((float*)PaddedInput_global_global_let)[((((((di * 228) + (j_c_outer * 16)) + (j_c_inner_5 * 8)) + cse_var_13) + c_inner_c_5) + 2280)] * ((float*)fused_constant_3_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_13) + c_inner_c_5)]));
              }
            }
            for (int32_t j_c_inner_6 = 0; j_c_inner_6 < 2; ++j_c_inner_6) {
              for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
                int32_t cse_var_15 = (dj * 4);
                int32_t cse_var_14 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_6 * 4)) + c_inner_c_6) + 672);
                ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[((((((di * 228) + (j_c_outer * 16)) + (j_c_inner_6 * 8)) + cse_var_15) + c_inner_c_6) + 2736)] * ((float*)fused_constant_3_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_15) + c_inner_c_6)]));
              }
            }
            for (int32_t j_c_inner_7 = 0; j_c_inner_7 < 2; ++j_c_inner_7) {
              for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
                int32_t cse_var_17 = (dj * 4);
                int32_t cse_var_16 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_7 * 4)) + c_inner_c_7) + 784);
                ((float*)DepthwiseConv2d_global_let)[cse_var_16] = (((float*)DepthwiseConv2d_global_let)[cse_var_16] + (((float*)PaddedInput_global_global_let)[((((((di * 228) + (j_c_outer * 16)) + (j_c_inner_7 * 8)) + cse_var_17) + c_inner_c_7) + 3192)] * ((float*)fused_constant_3_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_17) + c_inner_c_7)]));
              }
            }
            for (int32_t j_c_inner_8 = 0; j_c_inner_8 < 2; ++j_c_inner_8) {
              for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
                int32_t cse_var_19 = (dj * 4);
                int32_t cse_var_18 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_8 * 4)) + c_inner_c_8) + 896);
                ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[((((((di * 228) + (j_c_outer * 16)) + (j_c_inner_8 * 8)) + cse_var_19) + c_inner_c_8) + 3648)] * ((float*)fused_constant_3_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_19) + c_inner_c_8)]));
              }
            }
            for (int32_t j_c_inner_9 = 0; j_c_inner_9 < 2; ++j_c_inner_9) {
              for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
                int32_t cse_var_21 = (dj * 4);
                int32_t cse_var_20 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_9 * 4)) + c_inner_c_9) + 1008);
                ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_global_global_let)[((((((di * 228) + (j_c_outer * 16)) + (j_c_inner_9 * 8)) + cse_var_21) + c_inner_c_9) + 4104)] * ((float*)fused_constant_3_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_21) + c_inner_c_9)]));
              }
            }
            for (int32_t j_c_inner_10 = 0; j_c_inner_10 < 2; ++j_c_inner_10) {
              for (int32_t c_inner_c_10 = 0; c_inner_c_10 < 4; ++c_inner_c_10) {
                int32_t cse_var_23 = (dj * 4);
                int32_t cse_var_22 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_10 * 4)) + c_inner_c_10) + 1120);
                ((float*)DepthwiseConv2d_global_let)[cse_var_22] = (((float*)DepthwiseConv2d_global_let)[cse_var_22] + (((float*)PaddedInput_global_global_let)[((((((di * 228) + (j_c_outer * 16)) + (j_c_inner_10 * 8)) + cse_var_23) + c_inner_c_10) + 4560)] * ((float*)fused_constant_3_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_23) + c_inner_c_10)]));
              }
            }
            for (int32_t j_c_inner_11 = 0; j_c_inner_11 < 2; ++j_c_inner_11) {
              for (int32_t c_inner_c_11 = 0; c_inner_c_11 < 4; ++c_inner_c_11) {
                int32_t cse_var_25 = (dj * 4);
                int32_t cse_var_24 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_11 * 4)) + c_inner_c_11) + 1232);
                ((float*)DepthwiseConv2d_global_let)[cse_var_24] = (((float*)DepthwiseConv2d_global_let)[cse_var_24] + (((float*)PaddedInput_global_global_let)[((((((di * 228) + (j_c_outer * 16)) + (j_c_inner_11 * 8)) + cse_var_25) + c_inner_c_11) + 5016)] * ((float*)fused_constant_3_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_25) + c_inner_c_11)]));
              }
            }
            for (int32_t j_c_inner_12 = 0; j_c_inner_12 < 2; ++j_c_inner_12) {
              for (int32_t c_inner_c_12 = 0; c_inner_c_12 < 4; ++c_inner_c_12) {
                int32_t cse_var_27 = (dj * 4);
                int32_t cse_var_26 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_12 * 4)) + c_inner_c_12) + 1344);
                ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_global_global_let)[((((((di * 228) + (j_c_outer * 16)) + (j_c_inner_12 * 8)) + cse_var_27) + c_inner_c_12) + 5472)] * ((float*)fused_constant_3_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_27) + c_inner_c_12)]));
              }
            }
            for (int32_t j_c_inner_13 = 0; j_c_inner_13 < 2; ++j_c_inner_13) {
              for (int32_t c_inner_c_13 = 0; c_inner_c_13 < 4; ++c_inner_c_13) {
                int32_t cse_var_29 = (dj * 4);
                int32_t cse_var_28 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_13 * 4)) + c_inner_c_13) + 1456);
                ((float*)DepthwiseConv2d_global_let)[cse_var_28] = (((float*)DepthwiseConv2d_global_let)[cse_var_28] + (((float*)PaddedInput_global_global_let)[((((((di * 228) + (j_c_outer * 16)) + (j_c_inner_13 * 8)) + cse_var_29) + c_inner_c_13) + 5928)] * ((float*)fused_constant_3_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_29) + c_inner_c_13)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 128; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 28; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 28; ++ax3) {
        T_add[(((ax1 * 784) + (ax2 * 28)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 3136) + (ax2 * 112)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_3_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_30(float* p0, float* T_add, uint8_t* global_const_workspace_138_var, uint8_t* global_workspace_139_var) {
  void* fused_nn_conv2d_constant_40_let = (&(global_const_workspace_138_var[14972928]));
  void* fused_constant_40_let = (&(global_const_workspace_138_var[8552448]));
  void* data_vec_let = (&(global_workspace_139_var[0]));
  for (int32_t h = 0; h < 7; ++h) {
    for (int32_t ci = 0; ci < 512; ++ci) {
      for (int32_t vw = 0; vw < 7; ++vw) {
        ((float*)data_vec_let)[(((h * 3584) + (ci * 7)) + vw)] = p0[(((ci * 49) + (h * 7)) + vw)];
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 16; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 7; ++ax2_outer) {
      void* conv_let = (&(global_workspace_139_var[100352]));
      for (int32_t vw_init = 0; vw_init < 7; ++vw_init) {
        for (int32_t vc_init = 0; vc_init < 8; ++vc_init) {
          ((float*)conv_let)[((vw_init * 8) + vc_init)] = 0.000000e+00f;
        }
      }
      for (int32_t ci_1 = 0; ci_1 < 512; ++ci_1) {
        for (int32_t vw_1 = 0; vw_1 < 7; ++vw_1) {
          for (int32_t vc = 0; vc < 8; ++vc) {
            int32_t cse_var_1 = ((vw_1 * 8) + vc);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[(((ax2_outer * 3584) + (ci_1 * 7)) + vw_1)] * ((float*)fused_constant_40_let)[(((ax1_outer * 4096) + (ci_1 * 8)) + vc)]));
          }
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
        for (int32_t ax1_inner = 0; ax1_inner < 8; ++ax1_inner) {
          T_add[((((ax1_outer * 392) + (ax1_inner * 49)) + (ax2_outer * 7)) + ax3_inner)] = (((float*)conv_let)[((ax3_inner * 8) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_40_let)[((ax1_outer * 8) + ax1_inner)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_31(float* p0, float* T_add, uint8_t* global_const_workspace_140_var, uint8_t* global_workspace_141_var) {
  void* fused_nn_conv2d_constant_41_let = (&(global_const_workspace_140_var[14953984]));
  void* fused_constant_41_let = (&(global_const_workspace_140_var[12079104]));
  void* data_vec_let = (&(global_workspace_141_var[0]));
  for (int32_t h = 0; h < 7; ++h) {
    for (int32_t ci = 0; ci < 128; ++ci) {
      for (int32_t vw = 0; vw < 7; ++vw) {
        ((float*)data_vec_let)[(((h * 896) + (ci * 7)) + vw)] = p0[(((ci * 49) + (h * 7)) + vw)];
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 16; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 7; ++ax2_outer) {
      void* conv_let = (&(global_workspace_141_var[25088]));
      for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
        for (int32_t vw_init = 0; vw_init < 7; ++vw_init) {
          ((float*)conv_let)[((vw_init * 16) + vc_init)] = 0.000000e+00f;
        }
      }
      for (int32_t ci_1 = 0; ci_1 < 128; ++ci_1) {
        for (int32_t vc = 0; vc < 16; ++vc) {
          for (int32_t vw_1 = 0; vw_1 < 7; ++vw_1) {
            int32_t cse_var_1 = ((vw_1 * 16) + vc);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[(((ax2_outer * 896) + (ci_1 * 7)) + vw_1)] * ((float*)fused_constant_41_let)[(((ax1_outer * 2048) + (ci_1 * 16)) + vc)]));
          }
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
        for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
          T_add[((((ax1_outer * 784) + (ax1_inner * 49)) + (ax2_outer * 7)) + ax3_inner)] = (((float*)conv_let)[((ax3_inner * 16) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_41_let)[((ax1_outer * 16) + ax1_inner)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_32(float* p0, float* T_add, uint8_t* global_const_workspace_144_var, uint8_t* global_workspace_145_var) {
  void* fused_nn_conv2d_constant_42_let = (&(global_const_workspace_144_var[14952960]));
  void* fused_constant_42_let = (&(global_const_workspace_144_var[14836736]));
  void* fused_constant_42_global_global_let = (&(global_workspace_145_var[100352]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 128; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 2; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 18);
          ((float*)fused_constant_42_global_global_let)[(((cse_var_1 + (ax2_c * 6)) + (ax3_c * 2)) + ax0_inner_c)] = ((float*)fused_constant_42_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_145_var[50176]));
  for (int32_t c_outer_c = 0; c_outer_c < 128; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_145_var[109568]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 9; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 9; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 2; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 18) + (ax3_c_1 * 2)) + ax1_inner_c)] = (((((1 <= ax2_c_1) && (ax2_c_1 < 8)) && (1 <= ax3_c_1)) && (ax3_c_1 < 8)) ? p0[(((((c_outer_c * 98) + (ax1_inner_c * 49)) + (ax2_c_1 * 7)) + ax3_c_1) - 8)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 7; ++j_c_outer) {
      for (int32_t c_inner_c_init = 0; c_inner_c_init < 2; ++c_inner_c_init) {
        ((float*)DepthwiseConv2d_global_let)[(((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 2; ++c_inner_c_init_1) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_1) + 14)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 2; ++c_inner_c_init_2) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_2) + 28)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 2; ++c_inner_c_init_3) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_3) + 42)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 2; ++c_inner_c_init_4) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_4) + 56)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 2; ++c_inner_c_init_5) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_5) + 70)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 2; ++c_inner_c_init_6) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_6) + 84)] = 0.000000e+00f;
      }
      for (int32_t di = 0; di < 3; ++di) {
        for (int32_t dj = 0; dj < 3; ++dj) {
          for (int32_t c_inner_c = 0; c_inner_c < 2; ++c_inner_c) {
            int32_t cse_var_4 = (j_c_outer * 2);
            int32_t cse_var_3 = (dj * 2);
            int32_t cse_var_2 = (((c_outer_c * 98) + cse_var_4) + c_inner_c);
            ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[((((di * 18) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_42_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_3) + c_inner_c)]));
          }
          for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 2; ++c_inner_c_1) {
            int32_t cse_var_7 = (j_c_outer * 2);
            int32_t cse_var_6 = (dj * 2);
            int32_t cse_var_5 = ((((c_outer_c * 98) + cse_var_7) + c_inner_c_1) + 14);
            ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_global_global_let)[(((((di * 18) + cse_var_7) + cse_var_6) + c_inner_c_1) + 18)] * ((float*)fused_constant_42_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_6) + c_inner_c_1)]));
          }
          for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 2; ++c_inner_c_2) {
            int32_t cse_var_10 = (j_c_outer * 2);
            int32_t cse_var_9 = (dj * 2);
            int32_t cse_var_8 = ((((c_outer_c * 98) + cse_var_10) + c_inner_c_2) + 28);
            ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_global_global_let)[(((((di * 18) + cse_var_10) + cse_var_9) + c_inner_c_2) + 36)] * ((float*)fused_constant_42_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_9) + c_inner_c_2)]));
          }
          for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 2; ++c_inner_c_3) {
            int32_t cse_var_13 = (j_c_outer * 2);
            int32_t cse_var_12 = (dj * 2);
            int32_t cse_var_11 = ((((c_outer_c * 98) + cse_var_13) + c_inner_c_3) + 42);
            ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[(((((di * 18) + cse_var_13) + cse_var_12) + c_inner_c_3) + 54)] * ((float*)fused_constant_42_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_12) + c_inner_c_3)]));
          }
          for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 2; ++c_inner_c_4) {
            int32_t cse_var_16 = (j_c_outer * 2);
            int32_t cse_var_15 = (dj * 2);
            int32_t cse_var_14 = ((((c_outer_c * 98) + cse_var_16) + c_inner_c_4) + 56);
            ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[(((((di * 18) + cse_var_16) + cse_var_15) + c_inner_c_4) + 72)] * ((float*)fused_constant_42_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_15) + c_inner_c_4)]));
          }
          for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 2; ++c_inner_c_5) {
            int32_t cse_var_19 = (j_c_outer * 2);
            int32_t cse_var_18 = (dj * 2);
            int32_t cse_var_17 = ((((c_outer_c * 98) + cse_var_19) + c_inner_c_5) + 70);
            ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_global_global_let)[(((((di * 18) + cse_var_19) + cse_var_18) + c_inner_c_5) + 90)] * ((float*)fused_constant_42_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_18) + c_inner_c_5)]));
          }
          for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 2; ++c_inner_c_6) {
            int32_t cse_var_22 = (j_c_outer * 2);
            int32_t cse_var_21 = (dj * 2);
            int32_t cse_var_20 = ((((c_outer_c * 98) + cse_var_22) + c_inner_c_6) + 84);
            ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_global_global_let)[(((((di * 18) + cse_var_22) + cse_var_21) + c_inner_c_6) + 108)] * ((float*)fused_constant_42_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_21) + c_inner_c_6)]));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 256; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 7; ++ax3) {
        T_add[(((ax1 * 49) + (ax2 * 7)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 1) * 98) + (ax2 * 14)) + (ax3 * 2)) + (ax1 & 1))] + ((float*)fused_nn_conv2d_constant_42_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_33(float* p0, float* T_add, uint8_t* global_const_workspace_150_var, uint8_t* global_workspace_151_var) {
  void* fused_nn_conv2d_constant_44_let = (&(global_const_workspace_150_var[14951936]));
  void* fused_constant_44_let = (&(global_const_workspace_150_var[11816960]));
  void* data_vec_let = (&(global_workspace_151_var[0]));
  for (int32_t h = 0; h < 7; ++h) {
    for (int32_t ci = 0; ci < 128; ++ci) {
      for (int32_t vw = 0; vw < 7; ++vw) {
        ((float*)data_vec_let)[(((h * 896) + (ci * 7)) + vw)] = p0[(((ci * 49) + (h * 7)) + vw)];
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 16; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 7; ++ax2_outer) {
      void* conv_let = (&(global_workspace_151_var[25088]));
      for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
        for (int32_t vw_init = 0; vw_init < 7; ++vw_init) {
          ((float*)conv_let)[((vw_init * 16) + vc_init)] = 0.000000e+00f;
        }
      }
      for (int32_t ci_1 = 0; ci_1 < 128; ++ci_1) {
        for (int32_t vc = 0; vc < 16; ++vc) {
          for (int32_t vw_1 = 0; vw_1 < 7; ++vw_1) {
            int32_t cse_var_1 = ((vw_1 * 16) + vc);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[(((ax2_outer * 896) + (ci_1 * 7)) + vw_1)] * ((float*)fused_constant_44_let)[(((ax1_outer * 2048) + (ci_1 * 16)) + vc)]));
          }
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
        for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
          T_add[((((ax1_outer * 784) + (ax1_inner * 49)) + (ax2_outer * 7)) + ax3_inner)] = (((float*)conv_let)[((ax3_inner * 16) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_44_let)[((ax1_outer * 16) + ax1_inner)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_34(float* p0, float* T_add, uint8_t* global_const_workspace_154_var, uint8_t* global_workspace_155_var) {
  void* fused_nn_conv2d_constant_45_let = (&(global_const_workspace_154_var[14950912]));
  void* fused_constant_45_let = (&(global_const_workspace_154_var[14827520]));
  void* fused_constant_45_global_global_let = (&(global_workspace_155_var[125440]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 128; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 2; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 18);
          ((float*)fused_constant_45_global_global_let)[(((cse_var_1 + (ax2_c * 6)) + (ax3_c * 2)) + ax0_inner_c)] = ((float*)fused_constant_45_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_155_var[50176]));
  for (int32_t c_outer_c = 0; c_outer_c < 128; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_155_var[134656]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 9; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 9; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 2; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 18) + (ax3_c_1 * 2)) + ax1_inner_c)] = (((((1 <= ax2_c_1) && (ax2_c_1 < 8)) && (1 <= ax3_c_1)) && (ax3_c_1 < 8)) ? p0[(((((c_outer_c * 98) + (ax1_inner_c * 49)) + (ax2_c_1 * 7)) + ax3_c_1) - 8)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 7; ++j_c_outer) {
      for (int32_t c_inner_c_init = 0; c_inner_c_init < 2; ++c_inner_c_init) {
        ((float*)DepthwiseConv2d_global_let)[(((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 2; ++c_inner_c_init_1) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_1) + 14)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 2; ++c_inner_c_init_2) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_2) + 28)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 2; ++c_inner_c_init_3) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_3) + 42)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 2; ++c_inner_c_init_4) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_4) + 56)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 2; ++c_inner_c_init_5) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_5) + 70)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 2; ++c_inner_c_init_6) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_6) + 84)] = 0.000000e+00f;
      }
      for (int32_t di = 0; di < 3; ++di) {
        for (int32_t dj = 0; dj < 3; ++dj) {
          for (int32_t c_inner_c = 0; c_inner_c < 2; ++c_inner_c) {
            int32_t cse_var_4 = (j_c_outer * 2);
            int32_t cse_var_3 = (dj * 2);
            int32_t cse_var_2 = (((c_outer_c * 98) + cse_var_4) + c_inner_c);
            ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[((((di * 18) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_45_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_3) + c_inner_c)]));
          }
          for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 2; ++c_inner_c_1) {
            int32_t cse_var_7 = (j_c_outer * 2);
            int32_t cse_var_6 = (dj * 2);
            int32_t cse_var_5 = ((((c_outer_c * 98) + cse_var_7) + c_inner_c_1) + 14);
            ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_global_global_let)[(((((di * 18) + cse_var_7) + cse_var_6) + c_inner_c_1) + 18)] * ((float*)fused_constant_45_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_6) + c_inner_c_1)]));
          }
          for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 2; ++c_inner_c_2) {
            int32_t cse_var_10 = (j_c_outer * 2);
            int32_t cse_var_9 = (dj * 2);
            int32_t cse_var_8 = ((((c_outer_c * 98) + cse_var_10) + c_inner_c_2) + 28);
            ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_global_global_let)[(((((di * 18) + cse_var_10) + cse_var_9) + c_inner_c_2) + 36)] * ((float*)fused_constant_45_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_9) + c_inner_c_2)]));
          }
          for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 2; ++c_inner_c_3) {
            int32_t cse_var_13 = (j_c_outer * 2);
            int32_t cse_var_12 = (dj * 2);
            int32_t cse_var_11 = ((((c_outer_c * 98) + cse_var_13) + c_inner_c_3) + 42);
            ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[(((((di * 18) + cse_var_13) + cse_var_12) + c_inner_c_3) + 54)] * ((float*)fused_constant_45_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_12) + c_inner_c_3)]));
          }
          for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 2; ++c_inner_c_4) {
            int32_t cse_var_16 = (j_c_outer * 2);
            int32_t cse_var_15 = (dj * 2);
            int32_t cse_var_14 = ((((c_outer_c * 98) + cse_var_16) + c_inner_c_4) + 56);
            ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[(((((di * 18) + cse_var_16) + cse_var_15) + c_inner_c_4) + 72)] * ((float*)fused_constant_45_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_15) + c_inner_c_4)]));
          }
          for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 2; ++c_inner_c_5) {
            int32_t cse_var_19 = (j_c_outer * 2);
            int32_t cse_var_18 = (dj * 2);
            int32_t cse_var_17 = ((((c_outer_c * 98) + cse_var_19) + c_inner_c_5) + 70);
            ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_global_global_let)[(((((di * 18) + cse_var_19) + cse_var_18) + c_inner_c_5) + 90)] * ((float*)fused_constant_45_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_18) + c_inner_c_5)]));
          }
          for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 2; ++c_inner_c_6) {
            int32_t cse_var_22 = (j_c_outer * 2);
            int32_t cse_var_21 = (dj * 2);
            int32_t cse_var_20 = ((((c_outer_c * 98) + cse_var_22) + c_inner_c_6) + 84);
            ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_global_global_let)[(((((di * 18) + cse_var_22) + cse_var_21) + c_inner_c_6) + 108)] * ((float*)fused_constant_45_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_21) + c_inner_c_6)]));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 256; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 7; ++ax3) {
        T_add[(((ax1 * 49) + (ax2 * 7)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 1) * 98) + (ax2 * 14)) + (ax3 * 2)) + (ax1 & 1))] + ((float*)fused_nn_conv2d_constant_45_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_35(float* p0, float* T_add, uint8_t* global_const_workspace_160_var, uint8_t* global_workspace_161_var) {
  void* fused_nn_conv2d_constant_47_let = (&(global_const_workspace_160_var[14944768]));
  void* fused_constant_47_let = (&(global_const_workspace_160_var[8290304]));
  void* data_vec_let = (&(global_workspace_161_var[0]));
  for (int32_t h = 0; h < 7; ++h) {
    for (int32_t ci = 0; ci < 128; ++ci) {
      for (int32_t vw = 0; vw < 7; ++vw) {
        ((float*)data_vec_let)[(((h * 896) + (ci * 7)) + vw)] = p0[(((ci * 49) + (h * 7)) + vw)];
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 32; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 7; ++ax2_outer) {
      void* conv_let = (&(global_workspace_161_var[25088]));
      for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
        for (int32_t vw_init = 0; vw_init < 7; ++vw_init) {
          ((float*)conv_let)[((vw_init * 16) + vc_init)] = 0.000000e+00f;
        }
      }
      for (int32_t ci_1 = 0; ci_1 < 128; ++ci_1) {
        for (int32_t vc = 0; vc < 16; ++vc) {
          for (int32_t vw_1 = 0; vw_1 < 7; ++vw_1) {
            int32_t cse_var_1 = ((vw_1 * 16) + vc);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[(((ax2_outer * 896) + (ci_1 * 7)) + vw_1)] * ((float*)fused_constant_47_let)[(((ax1_outer * 2048) + (ci_1 * 16)) + vc)]));
          }
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
        for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
          T_add[((((ax1_outer * 784) + (ax1_inner * 49)) + (ax2_outer * 7)) + ax3_inner)] = (((float*)conv_let)[((ax3_inner * 16) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_47_let)[((ax1_outer * 16) + ax1_inner)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_36(float* p0, float* T_add, uint8_t* global_const_workspace_164_var, uint8_t* global_workspace_165_var) {
  void* fused_nn_conv2d_constant_48_let = (&(global_const_workspace_164_var[14942720]));
  void* fused_constant_48_let = (&(global_const_workspace_164_var[14114816]));
  void* fused_constant_48_global_global_let = (&(global_workspace_165_var[100352]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 256; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 7; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 7; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 2; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 98);
          ((float*)fused_constant_48_global_global_let)[(((cse_var_1 + (ax2_c * 14)) + (ax3_c * 2)) + ax0_inner_c)] = ((float*)fused_constant_48_let)[(((cse_var_1 + (ax0_inner_c * 49)) + (ax2_c * 7)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_165_var[200704]));
  for (int32_t c_outer_c = 0; c_outer_c < 256; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_165_var[202752]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 7; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 7; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 2; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 14) + (ax3_c_1 * 2)) + ax1_inner_c)] = p0[((((c_outer_c * 98) + (ax1_inner_c * 49)) + (ax2_c_1 * 7)) + ax3_c_1)];
        }
      }
    }
    for (int32_t c_inner_c_init = 0; c_inner_c_init < 2; ++c_inner_c_init) {
      ((float*)DepthwiseConv2d_global_let)[((c_outer_c * 2) + c_inner_c_init)] = 0.000000e+00f;
    }
    for (int32_t di = 0; di < 7; ++di) {
      for (int32_t dj = 0; dj < 7; ++dj) {
        for (int32_t c_inner_c = 0; c_inner_c < 2; ++c_inner_c) {
          int32_t cse_var_4 = (di * 14);
          int32_t cse_var_3 = (dj * 2);
          int32_t cse_var_2 = ((c_outer_c * 2) + c_inner_c);
          ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[((cse_var_4 + cse_var_3) + c_inner_c)] * ((float*)fused_constant_48_global_global_let)[((((c_outer_c * 98) + cse_var_4) + cse_var_3) + c_inner_c)]));
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 512; ++ax1) {
    T_add[ax1] = (((float*)DepthwiseConv2d_global_let)[ax1] + ((float*)fused_nn_conv2d_constant_48_let)[ax1]);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_37(float* p0, float* T_add, uint8_t* global_const_workspace_166_var, uint8_t* global_workspace_167_var) {
  void* fused_nn_conv2d_constant_49_let = (&(global_const_workspace_166_var[14971392]));
  void* fused_constant_49_let = (&(global_const_workspace_166_var[8028160]));
  void* data_vec_let = (&(global_workspace_167_var[2048]));
  for (int32_t ci = 0; ci < 512; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 16; ++ax1_outer) {
    void* conv_let = (&(global_workspace_167_var[0]));
    for (int32_t vc_init = 0; vc_init < 8; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 512; ++ci_1) {
      for (int32_t vc = 0; vc < 8; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_49_let)[(((ax1_outer * 4096) + (ci_1 * 8)) + vc)]));
      }
    }
    for (int32_t ax1_inner = 0; ax1_inner < 8; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 8) + ax1_inner);
      T_add[cse_var_1] = (((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_49_let)[cse_var_1]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_4(float* p0, float* T_add, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  void* fused_nn_conv2d_constant_4_let = (&(global_const_workspace_18_var[14980352]));
  void* fused_constant_4_let = (&(global_const_workspace_18_var[14579712]));
  void* data_vec_let = (&(global_workspace_19_var[0]));
  for (int32_t h = 0; h < 14; ++h) {
    for (int32_t w = 0; w < 14; ++w) {
      for (int32_t ci = 0; ci < 128; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 7168) + (w * 512)) + (ci * 4)) + (vh * 2)) + vw)] = p0[(((((ci * 784) + (h * 56)) + (vh * 28)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 16; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 14; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 14; ++ax3_outer) {
        void* conv_let = (&(global_workspace_19_var[401408]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
          for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
            ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 128; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_2 = (ci_1 * 4);
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 7168) + (ax3_outer * 512)) + cse_var_2) + vw_1)] * ((float*)fused_constant_4_let)[(((ax1_outer * 512) + cse_var_2) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_4 = (ci_1 * 4);
              int32_t cse_var_3 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 7168) + (ax3_outer * 512)) + cse_var_4) + vw_2) + 2)] * ((float*)fused_constant_4_let)[(((ax1_outer * 512) + cse_var_4) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            T_add[(((((ax1_outer * 3136) + (ax1_inner * 784)) + (ax2_outer * 56)) + (ax3_outer * 2)) + ax3_inner)] = (((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_4_let)[((ax1_outer * 4) + ax1_inner)]);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            T_add[((((((ax1_outer * 3136) + (ax1_inner_1 * 784)) + (ax2_outer * 56)) + (ax3_outer * 2)) + ax3_inner_1) + 28)] = (((float*)conv_let)[(((ax3_inner_1 * 4) + ax1_inner_1) + 8)] + ((float*)fused_nn_conv2d_constant_4_let)[((ax1_outer * 4) + ax1_inner_1)]);
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_5(float* p0, float* T_add, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  void* fused_nn_conv2d_constant_5_let = (&(global_const_workspace_20_var[14970880]));
  void* fused_constant_5_let = (&(global_const_workspace_20_var[14546944]));
  void* data_vec_let = (&(global_workspace_21_var[0]));
  for (int32_t h = 0; h < 28; ++h) {
    for (int32_t w = 0; w < 7; ++w) {
      for (int32_t ci = 0; ci < 64; ++ci) {
        for (int32_t vw = 0; vw < 4; ++vw) {
          ((float*)data_vec_let)[((((h * 1792) + (w * 256)) + (ci * 4)) + vw)] = p0[((((ci * 784) + (h * 28)) + (w * 4)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 28; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 7; ++ax3_outer) {
        void* conv_let = (&(global_workspace_21_var[200704]));
        for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 16; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 16; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 32)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 16; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 48)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 64; ++ci_1) {
          for (int32_t vc = 0; vc < 16; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1792) + (ax3_outer * 256)) + (ci_1 * 4))] * ((float*)fused_constant_5_let)[(((ax1_outer * 1024) + (ci_1 * 16)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 16; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 16);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1792) + (ax3_outer * 256)) + (ci_1 * 4)) + 1)] * ((float*)fused_constant_5_let)[(((ax1_outer * 1024) + (ci_1 * 16)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 16; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 32);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1792) + (ax3_outer * 256)) + (ci_1 * 4)) + 2)] * ((float*)fused_constant_5_let)[(((ax1_outer * 1024) + (ci_1 * 16)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 16; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 48);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1792) + (ax3_outer * 256)) + (ci_1 * 4)) + 3)] * ((float*)fused_constant_5_let)[(((ax1_outer * 1024) + (ci_1 * 16)) + vc_3)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
          T_add[((((ax1_outer * 12544) + (ax1_inner * 784)) + (ax2_outer * 28)) + (ax3_outer * 4))] = (((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_5_let)[((ax1_outer * 16) + ax1_inner)]);
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 16; ++ax1_inner_1) {
          T_add[(((((ax1_outer * 12544) + (ax1_inner_1 * 784)) + (ax2_outer * 28)) + (ax3_outer * 4)) + 1)] = (((float*)conv_let)[(ax1_inner_1 + 16)] + ((float*)fused_nn_conv2d_constant_5_let)[((ax1_outer * 16) + ax1_inner_1)]);
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 16; ++ax1_inner_2) {
          T_add[(((((ax1_outer * 12544) + (ax1_inner_2 * 784)) + (ax2_outer * 28)) + (ax3_outer * 4)) + 2)] = (((float*)conv_let)[(ax1_inner_2 + 32)] + ((float*)fused_nn_conv2d_constant_5_let)[((ax1_outer * 16) + ax1_inner_2)]);
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 16; ++ax1_inner_3) {
          T_add[(((((ax1_outer * 12544) + (ax1_inner_3 * 784)) + (ax2_outer * 28)) + (ax3_outer * 4)) + 3)] = (((float*)conv_let)[(ax1_inner_3 + 48)] + ((float*)fused_nn_conv2d_constant_5_let)[((ax1_outer * 16) + ax1_inner_3)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_6(float* p0, float* T_add, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  void* fused_nn_conv2d_constant_6_let = (&(global_const_workspace_24_var[14970368]));
  void* fused_constant_6_let = (&(global_const_workspace_24_var[14921984]));
  void* fused_constant_6_global_global_let = (&(global_workspace_25_var[810496]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 32; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_6_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_6_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_25_var[401408]));
  for (int32_t c_outer_c = 0; c_outer_c < 32; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 2; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_25_var[802816]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 16; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 30; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 14) + ax2_c_1);
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 120) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 29)) && (1 <= ax3_c_1)) && (ax3_c_1 < 29)) ? p0[((((((c_outer_c * 3136) + (ax1_inner_c * 784)) + (i_c_outer * 392)) + (ax2_c_1 * 28)) + ax3_c_1) - 29)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 14; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 112)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 224)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 336)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_4 = 0; j_c_inner_init_4 < 2; ++j_c_inner_init_4) {
          for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_4 * 4)) + c_inner_c_init_4) + 448)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_5 = 0; j_c_inner_init_5 < 2; ++j_c_inner_init_5) {
          for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_5 * 4)) + c_inner_c_init_5) + 560)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_6 = 0; j_c_inner_init_6 < 2; ++j_c_inner_init_6) {
          for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_6 * 4)) + c_inner_c_init_6) + 672)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_7 = 0; j_c_inner_init_7 < 2; ++j_c_inner_init_7) {
          for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_7 * 4)) + c_inner_c_init_7) + 784)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_8 = 0; j_c_inner_init_8 < 2; ++j_c_inner_init_8) {
          for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_8 * 4)) + c_inner_c_init_8) + 896)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_9 = 0; j_c_inner_init_9 < 2; ++j_c_inner_init_9) {
          for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_9 * 4)) + c_inner_c_init_9) + 1008)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_10 = 0; j_c_inner_init_10 < 2; ++j_c_inner_init_10) {
          for (int32_t c_inner_c_init_10 = 0; c_inner_c_init_10 < 4; ++c_inner_c_init_10) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_10 * 4)) + c_inner_c_init_10) + 1120)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_11 = 0; j_c_inner_init_11 < 2; ++j_c_inner_init_11) {
          for (int32_t c_inner_c_init_11 = 0; c_inner_c_init_11 < 4; ++c_inner_c_init_11) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_11 * 4)) + c_inner_c_init_11) + 1232)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_12 = 0; j_c_inner_init_12 < 2; ++j_c_inner_init_12) {
          for (int32_t c_inner_c_init_12 = 0; c_inner_c_init_12 < 4; ++c_inner_c_init_12) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_12 * 4)) + c_inner_c_init_12) + 1344)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_13 = 0; j_c_inner_init_13 < 2; ++j_c_inner_init_13) {
          for (int32_t c_inner_c_init_13 = 0; c_inner_c_init_13 < 4; ++c_inner_c_init_13) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_13 * 4)) + c_inner_c_init_13) + 1456)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 120) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_6_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 112);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 120)] * ((float*)fused_constant_6_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 224);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 240)] * ((float*)fused_constant_6_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 336);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 360)] * ((float*)fused_constant_6_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_16) + c_inner_c_3)]));
              }
            }
            for (int32_t j_c_inner_4 = 0; j_c_inner_4 < 2; ++j_c_inner_4) {
              for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
                int32_t cse_var_22 = (j_c_outer * 8);
                int32_t cse_var_21 = (j_c_inner_4 * 4);
                int32_t cse_var_20 = (dj * 4);
                int32_t cse_var_19 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_22) + cse_var_21) + c_inner_c_4) + 448);
                ((float*)DepthwiseConv2d_global_let)[cse_var_19] = (((float*)DepthwiseConv2d_global_let)[cse_var_19] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_22) + cse_var_21) + cse_var_20) + c_inner_c_4) + 480)] * ((float*)fused_constant_6_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_20) + c_inner_c_4)]));
              }
            }
            for (int32_t j_c_inner_5 = 0; j_c_inner_5 < 2; ++j_c_inner_5) {
              for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
                int32_t cse_var_26 = (j_c_outer * 8);
                int32_t cse_var_25 = (j_c_inner_5 * 4);
                int32_t cse_var_24 = (dj * 4);
                int32_t cse_var_23 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_26) + cse_var_25) + c_inner_c_5) + 560);
                ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_26) + cse_var_25) + cse_var_24) + c_inner_c_5) + 600)] * ((float*)fused_constant_6_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_24) + c_inner_c_5)]));
              }
            }
            for (int32_t j_c_inner_6 = 0; j_c_inner_6 < 2; ++j_c_inner_6) {
              for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
                int32_t cse_var_30 = (j_c_outer * 8);
                int32_t cse_var_29 = (j_c_inner_6 * 4);
                int32_t cse_var_28 = (dj * 4);
                int32_t cse_var_27 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_30) + cse_var_29) + c_inner_c_6) + 672);
                ((float*)DepthwiseConv2d_global_let)[cse_var_27] = (((float*)DepthwiseConv2d_global_let)[cse_var_27] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_30) + cse_var_29) + cse_var_28) + c_inner_c_6) + 720)] * ((float*)fused_constant_6_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_28) + c_inner_c_6)]));
              }
            }
            for (int32_t j_c_inner_7 = 0; j_c_inner_7 < 2; ++j_c_inner_7) {
              for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
                int32_t cse_var_34 = (j_c_outer * 8);
                int32_t cse_var_33 = (j_c_inner_7 * 4);
                int32_t cse_var_32 = (dj * 4);
                int32_t cse_var_31 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_34) + cse_var_33) + c_inner_c_7) + 784);
                ((float*)DepthwiseConv2d_global_let)[cse_var_31] = (((float*)DepthwiseConv2d_global_let)[cse_var_31] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_34) + cse_var_33) + cse_var_32) + c_inner_c_7) + 840)] * ((float*)fused_constant_6_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_32) + c_inner_c_7)]));
              }
            }
            for (int32_t j_c_inner_8 = 0; j_c_inner_8 < 2; ++j_c_inner_8) {
              for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
                int32_t cse_var_38 = (j_c_outer * 8);
                int32_t cse_var_37 = (j_c_inner_8 * 4);
                int32_t cse_var_36 = (dj * 4);
                int32_t cse_var_35 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_38) + cse_var_37) + c_inner_c_8) + 896);
                ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_38) + cse_var_37) + cse_var_36) + c_inner_c_8) + 960)] * ((float*)fused_constant_6_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_36) + c_inner_c_8)]));
              }
            }
            for (int32_t j_c_inner_9 = 0; j_c_inner_9 < 2; ++j_c_inner_9) {
              for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
                int32_t cse_var_42 = (j_c_outer * 8);
                int32_t cse_var_41 = (j_c_inner_9 * 4);
                int32_t cse_var_40 = (dj * 4);
                int32_t cse_var_39 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_42) + cse_var_41) + c_inner_c_9) + 1008);
                ((float*)DepthwiseConv2d_global_let)[cse_var_39] = (((float*)DepthwiseConv2d_global_let)[cse_var_39] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_42) + cse_var_41) + cse_var_40) + c_inner_c_9) + 1080)] * ((float*)fused_constant_6_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_40) + c_inner_c_9)]));
              }
            }
            for (int32_t j_c_inner_10 = 0; j_c_inner_10 < 2; ++j_c_inner_10) {
              for (int32_t c_inner_c_10 = 0; c_inner_c_10 < 4; ++c_inner_c_10) {
                int32_t cse_var_46 = (j_c_outer * 8);
                int32_t cse_var_45 = (j_c_inner_10 * 4);
                int32_t cse_var_44 = (dj * 4);
                int32_t cse_var_43 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_46) + cse_var_45) + c_inner_c_10) + 1120);
                ((float*)DepthwiseConv2d_global_let)[cse_var_43] = (((float*)DepthwiseConv2d_global_let)[cse_var_43] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_46) + cse_var_45) + cse_var_44) + c_inner_c_10) + 1200)] * ((float*)fused_constant_6_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_44) + c_inner_c_10)]));
              }
            }
            for (int32_t j_c_inner_11 = 0; j_c_inner_11 < 2; ++j_c_inner_11) {
              for (int32_t c_inner_c_11 = 0; c_inner_c_11 < 4; ++c_inner_c_11) {
                int32_t cse_var_50 = (j_c_outer * 8);
                int32_t cse_var_49 = (j_c_inner_11 * 4);
                int32_t cse_var_48 = (dj * 4);
                int32_t cse_var_47 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_50) + cse_var_49) + c_inner_c_11) + 1232);
                ((float*)DepthwiseConv2d_global_let)[cse_var_47] = (((float*)DepthwiseConv2d_global_let)[cse_var_47] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_50) + cse_var_49) + cse_var_48) + c_inner_c_11) + 1320)] * ((float*)fused_constant_6_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_48) + c_inner_c_11)]));
              }
            }
            for (int32_t j_c_inner_12 = 0; j_c_inner_12 < 2; ++j_c_inner_12) {
              for (int32_t c_inner_c_12 = 0; c_inner_c_12 < 4; ++c_inner_c_12) {
                int32_t cse_var_54 = (j_c_outer * 8);
                int32_t cse_var_53 = (j_c_inner_12 * 4);
                int32_t cse_var_52 = (dj * 4);
                int32_t cse_var_51 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_54) + cse_var_53) + c_inner_c_12) + 1344);
                ((float*)DepthwiseConv2d_global_let)[cse_var_51] = (((float*)DepthwiseConv2d_global_let)[cse_var_51] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_54) + cse_var_53) + cse_var_52) + c_inner_c_12) + 1440)] * ((float*)fused_constant_6_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_52) + c_inner_c_12)]));
              }
            }
            for (int32_t j_c_inner_13 = 0; j_c_inner_13 < 2; ++j_c_inner_13) {
              for (int32_t c_inner_c_13 = 0; c_inner_c_13 < 4; ++c_inner_c_13) {
                int32_t cse_var_58 = (j_c_outer * 8);
                int32_t cse_var_57 = (j_c_inner_13 * 4);
                int32_t cse_var_56 = (dj * 4);
                int32_t cse_var_55 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_58) + cse_var_57) + c_inner_c_13) + 1456);
                ((float*)DepthwiseConv2d_global_let)[cse_var_55] = (((float*)DepthwiseConv2d_global_let)[cse_var_55] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_58) + cse_var_57) + cse_var_56) + c_inner_c_13) + 1560)] * ((float*)fused_constant_6_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_56) + c_inner_c_13)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 128; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 28; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 28; ++ax3) {
        T_add[(((ax1 * 784) + (ax2 * 28)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 3136) + (ax2 * 112)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_6_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_7(float* p0, float* T_add, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
  void* fused_nn_conv2d_constant_8_let = (&(global_const_workspace_30_var[14969856]));
  void* fused_constant_8_let = (&(global_const_workspace_30_var[14481408]));
  void* data_vec_let = (&(global_workspace_31_var[0]));
  for (int32_t h = 0; h < 28; ++h) {
    for (int32_t w = 0; w < 7; ++w) {
      for (int32_t ci = 0; ci < 64; ++ci) {
        for (int32_t vw = 0; vw < 4; ++vw) {
          ((float*)data_vec_let)[((((h * 1792) + (w * 256)) + (ci * 4)) + vw)] = p0[((((ci * 784) + (h * 28)) + (w * 4)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 28; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 7; ++ax3_outer) {
        void* conv_let = (&(global_workspace_31_var[200704]));
        for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 16; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 16; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 32)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 16; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 48)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 64; ++ci_1) {
          for (int32_t vc = 0; vc < 16; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1792) + (ax3_outer * 256)) + (ci_1 * 4))] * ((float*)fused_constant_8_let)[(((ax1_outer * 1024) + (ci_1 * 16)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 16; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 16);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1792) + (ax3_outer * 256)) + (ci_1 * 4)) + 1)] * ((float*)fused_constant_8_let)[(((ax1_outer * 1024) + (ci_1 * 16)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 16; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 32);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1792) + (ax3_outer * 256)) + (ci_1 * 4)) + 2)] * ((float*)fused_constant_8_let)[(((ax1_outer * 1024) + (ci_1 * 16)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 16; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 48);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1792) + (ax3_outer * 256)) + (ci_1 * 4)) + 3)] * ((float*)fused_constant_8_let)[(((ax1_outer * 1024) + (ci_1 * 16)) + vc_3)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
          T_add[((((ax1_outer * 12544) + (ax1_inner * 784)) + (ax2_outer * 28)) + (ax3_outer * 4))] = (((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_8_let)[((ax1_outer * 16) + ax1_inner)]);
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 16; ++ax1_inner_1) {
          T_add[(((((ax1_outer * 12544) + (ax1_inner_1 * 784)) + (ax2_outer * 28)) + (ax3_outer * 4)) + 1)] = (((float*)conv_let)[(ax1_inner_1 + 16)] + ((float*)fused_nn_conv2d_constant_8_let)[((ax1_outer * 16) + ax1_inner_1)]);
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 16; ++ax1_inner_2) {
          T_add[(((((ax1_outer * 12544) + (ax1_inner_2 * 784)) + (ax2_outer * 28)) + (ax3_outer * 4)) + 2)] = (((float*)conv_let)[(ax1_inner_2 + 32)] + ((float*)fused_nn_conv2d_constant_8_let)[((ax1_outer * 16) + ax1_inner_2)]);
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 16; ++ax1_inner_3) {
          T_add[(((((ax1_outer * 12544) + (ax1_inner_3 * 784)) + (ax2_outer * 28)) + (ax3_outer * 4)) + 3)] = (((float*)conv_let)[(ax1_inner_3 + 48)] + ((float*)fused_nn_conv2d_constant_8_let)[((ax1_outer * 16) + ax1_inner_3)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_8(float* p0, float* T_add, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var) {
  void* fused_nn_conv2d_constant_9_let = (&(global_const_workspace_34_var[14969344]));
  void* fused_constant_9_let = (&(global_const_workspace_34_var[14917376]));
  void* fused_constant_9_global_global_let = (&(global_workspace_35_var[1011200]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 32; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_9_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_9_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_35_var[401408]));
  for (int32_t c_outer_c = 0; c_outer_c < 32; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 2; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_35_var[1003520]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 16; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 30; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 14) + ax2_c_1);
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 120) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 29)) && (1 <= ax3_c_1)) && (ax3_c_1 < 29)) ? p0[((((((c_outer_c * 3136) + (ax1_inner_c * 784)) + (i_c_outer * 392)) + (ax2_c_1 * 28)) + ax3_c_1) - 29)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 14; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 112)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 224)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 336)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_4 = 0; j_c_inner_init_4 < 2; ++j_c_inner_init_4) {
          for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_4 * 4)) + c_inner_c_init_4) + 448)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_5 = 0; j_c_inner_init_5 < 2; ++j_c_inner_init_5) {
          for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_5 * 4)) + c_inner_c_init_5) + 560)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_6 = 0; j_c_inner_init_6 < 2; ++j_c_inner_init_6) {
          for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_6 * 4)) + c_inner_c_init_6) + 672)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_7 = 0; j_c_inner_init_7 < 2; ++j_c_inner_init_7) {
          for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_7 * 4)) + c_inner_c_init_7) + 784)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_8 = 0; j_c_inner_init_8 < 2; ++j_c_inner_init_8) {
          for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_8 * 4)) + c_inner_c_init_8) + 896)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_9 = 0; j_c_inner_init_9 < 2; ++j_c_inner_init_9) {
          for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_9 * 4)) + c_inner_c_init_9) + 1008)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_10 = 0; j_c_inner_init_10 < 2; ++j_c_inner_init_10) {
          for (int32_t c_inner_c_init_10 = 0; c_inner_c_init_10 < 4; ++c_inner_c_init_10) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_10 * 4)) + c_inner_c_init_10) + 1120)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_11 = 0; j_c_inner_init_11 < 2; ++j_c_inner_init_11) {
          for (int32_t c_inner_c_init_11 = 0; c_inner_c_init_11 < 4; ++c_inner_c_init_11) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_11 * 4)) + c_inner_c_init_11) + 1232)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_12 = 0; j_c_inner_init_12 < 2; ++j_c_inner_init_12) {
          for (int32_t c_inner_c_init_12 = 0; c_inner_c_init_12 < 4; ++c_inner_c_init_12) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_12 * 4)) + c_inner_c_init_12) + 1344)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_13 = 0; j_c_inner_init_13 < 2; ++j_c_inner_init_13) {
          for (int32_t c_inner_c_init_13 = 0; c_inner_c_init_13 < 4; ++c_inner_c_init_13) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 1568)) + (j_c_outer * 8)) + (j_c_inner_init_13 * 4)) + c_inner_c_init_13) + 1456)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 120) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 112);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 120)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 224);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 240)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 336);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 360)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_16) + c_inner_c_3)]));
              }
            }
            for (int32_t j_c_inner_4 = 0; j_c_inner_4 < 2; ++j_c_inner_4) {
              for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
                int32_t cse_var_22 = (j_c_outer * 8);
                int32_t cse_var_21 = (j_c_inner_4 * 4);
                int32_t cse_var_20 = (dj * 4);
                int32_t cse_var_19 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_22) + cse_var_21) + c_inner_c_4) + 448);
                ((float*)DepthwiseConv2d_global_let)[cse_var_19] = (((float*)DepthwiseConv2d_global_let)[cse_var_19] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_22) + cse_var_21) + cse_var_20) + c_inner_c_4) + 480)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_20) + c_inner_c_4)]));
              }
            }
            for (int32_t j_c_inner_5 = 0; j_c_inner_5 < 2; ++j_c_inner_5) {
              for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
                int32_t cse_var_26 = (j_c_outer * 8);
                int32_t cse_var_25 = (j_c_inner_5 * 4);
                int32_t cse_var_24 = (dj * 4);
                int32_t cse_var_23 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_26) + cse_var_25) + c_inner_c_5) + 560);
                ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_26) + cse_var_25) + cse_var_24) + c_inner_c_5) + 600)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_24) + c_inner_c_5)]));
              }
            }
            for (int32_t j_c_inner_6 = 0; j_c_inner_6 < 2; ++j_c_inner_6) {
              for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
                int32_t cse_var_30 = (j_c_outer * 8);
                int32_t cse_var_29 = (j_c_inner_6 * 4);
                int32_t cse_var_28 = (dj * 4);
                int32_t cse_var_27 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_30) + cse_var_29) + c_inner_c_6) + 672);
                ((float*)DepthwiseConv2d_global_let)[cse_var_27] = (((float*)DepthwiseConv2d_global_let)[cse_var_27] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_30) + cse_var_29) + cse_var_28) + c_inner_c_6) + 720)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_28) + c_inner_c_6)]));
              }
            }
            for (int32_t j_c_inner_7 = 0; j_c_inner_7 < 2; ++j_c_inner_7) {
              for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
                int32_t cse_var_34 = (j_c_outer * 8);
                int32_t cse_var_33 = (j_c_inner_7 * 4);
                int32_t cse_var_32 = (dj * 4);
                int32_t cse_var_31 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_34) + cse_var_33) + c_inner_c_7) + 784);
                ((float*)DepthwiseConv2d_global_let)[cse_var_31] = (((float*)DepthwiseConv2d_global_let)[cse_var_31] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_34) + cse_var_33) + cse_var_32) + c_inner_c_7) + 840)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_32) + c_inner_c_7)]));
              }
            }
            for (int32_t j_c_inner_8 = 0; j_c_inner_8 < 2; ++j_c_inner_8) {
              for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
                int32_t cse_var_38 = (j_c_outer * 8);
                int32_t cse_var_37 = (j_c_inner_8 * 4);
                int32_t cse_var_36 = (dj * 4);
                int32_t cse_var_35 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_38) + cse_var_37) + c_inner_c_8) + 896);
                ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_38) + cse_var_37) + cse_var_36) + c_inner_c_8) + 960)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_36) + c_inner_c_8)]));
              }
            }
            for (int32_t j_c_inner_9 = 0; j_c_inner_9 < 2; ++j_c_inner_9) {
              for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
                int32_t cse_var_42 = (j_c_outer * 8);
                int32_t cse_var_41 = (j_c_inner_9 * 4);
                int32_t cse_var_40 = (dj * 4);
                int32_t cse_var_39 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_42) + cse_var_41) + c_inner_c_9) + 1008);
                ((float*)DepthwiseConv2d_global_let)[cse_var_39] = (((float*)DepthwiseConv2d_global_let)[cse_var_39] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_42) + cse_var_41) + cse_var_40) + c_inner_c_9) + 1080)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_40) + c_inner_c_9)]));
              }
            }
            for (int32_t j_c_inner_10 = 0; j_c_inner_10 < 2; ++j_c_inner_10) {
              for (int32_t c_inner_c_10 = 0; c_inner_c_10 < 4; ++c_inner_c_10) {
                int32_t cse_var_46 = (j_c_outer * 8);
                int32_t cse_var_45 = (j_c_inner_10 * 4);
                int32_t cse_var_44 = (dj * 4);
                int32_t cse_var_43 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_46) + cse_var_45) + c_inner_c_10) + 1120);
                ((float*)DepthwiseConv2d_global_let)[cse_var_43] = (((float*)DepthwiseConv2d_global_let)[cse_var_43] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_46) + cse_var_45) + cse_var_44) + c_inner_c_10) + 1200)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_44) + c_inner_c_10)]));
              }
            }
            for (int32_t j_c_inner_11 = 0; j_c_inner_11 < 2; ++j_c_inner_11) {
              for (int32_t c_inner_c_11 = 0; c_inner_c_11 < 4; ++c_inner_c_11) {
                int32_t cse_var_50 = (j_c_outer * 8);
                int32_t cse_var_49 = (j_c_inner_11 * 4);
                int32_t cse_var_48 = (dj * 4);
                int32_t cse_var_47 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_50) + cse_var_49) + c_inner_c_11) + 1232);
                ((float*)DepthwiseConv2d_global_let)[cse_var_47] = (((float*)DepthwiseConv2d_global_let)[cse_var_47] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_50) + cse_var_49) + cse_var_48) + c_inner_c_11) + 1320)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_48) + c_inner_c_11)]));
              }
            }
            for (int32_t j_c_inner_12 = 0; j_c_inner_12 < 2; ++j_c_inner_12) {
              for (int32_t c_inner_c_12 = 0; c_inner_c_12 < 4; ++c_inner_c_12) {
                int32_t cse_var_54 = (j_c_outer * 8);
                int32_t cse_var_53 = (j_c_inner_12 * 4);
                int32_t cse_var_52 = (dj * 4);
                int32_t cse_var_51 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_54) + cse_var_53) + c_inner_c_12) + 1344);
                ((float*)DepthwiseConv2d_global_let)[cse_var_51] = (((float*)DepthwiseConv2d_global_let)[cse_var_51] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_54) + cse_var_53) + cse_var_52) + c_inner_c_12) + 1440)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_52) + c_inner_c_12)]));
              }
            }
            for (int32_t j_c_inner_13 = 0; j_c_inner_13 < 2; ++j_c_inner_13) {
              for (int32_t c_inner_c_13 = 0; c_inner_c_13 < 4; ++c_inner_c_13) {
                int32_t cse_var_58 = (j_c_outer * 8);
                int32_t cse_var_57 = (j_c_inner_13 * 4);
                int32_t cse_var_56 = (dj * 4);
                int32_t cse_var_55 = ((((((c_outer_c * 3136) + (i_c_outer * 1568)) + cse_var_58) + cse_var_57) + c_inner_c_13) + 1456);
                ((float*)DepthwiseConv2d_global_let)[cse_var_55] = (((float*)DepthwiseConv2d_global_let)[cse_var_55] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_58) + cse_var_57) + cse_var_56) + c_inner_c_13) + 1560)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_56) + c_inner_c_13)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 128; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 28; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 28; ++ax3) {
        T_add[(((ax1 * 784) + (ax2 * 28)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 3136) + (ax2 * 112)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_9_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_9(float* p0, float* T_add, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var) {
  void* fused_nn_conv2d_constant_11_let = (&(global_const_workspace_40_var[14979584]));
  void* fused_constant_11_let = (&(global_const_workspace_40_var[14743552]));
  void* data_vec_let = (&(global_workspace_41_var[0]));
  for (int32_t h = 0; h < 28; ++h) {
    for (int32_t w = 0; w < 7; ++w) {
      for (int32_t ci = 0; ci < 64; ++ci) {
        for (int32_t vw = 0; vw < 4; ++vw) {
          ((float*)data_vec_let)[((((h * 1792) + (w * 256)) + (ci * 4)) + vw)] = p0[((((ci * 784) + (h * 28)) + (w * 4)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 28; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 7; ++ax3_outer) {
        void* conv_let = (&(global_workspace_41_var[200704]));
        for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 16; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 16; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 32)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 16; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 48)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 64; ++ci_1) {
          for (int32_t vc = 0; vc < 16; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1792) + (ax3_outer * 256)) + (ci_1 * 4))] * ((float*)fused_constant_11_let)[(((ax1_outer * 1024) + (ci_1 * 16)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 16; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 16);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1792) + (ax3_outer * 256)) + (ci_1 * 4)) + 1)] * ((float*)fused_constant_11_let)[(((ax1_outer * 1024) + (ci_1 * 16)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 16; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 32);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1792) + (ax3_outer * 256)) + (ci_1 * 4)) + 2)] * ((float*)fused_constant_11_let)[(((ax1_outer * 1024) + (ci_1 * 16)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 16; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 48);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1792) + (ax3_outer * 256)) + (ci_1 * 4)) + 3)] * ((float*)fused_constant_11_let)[(((ax1_outer * 1024) + (ci_1 * 16)) + vc_3)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
          T_add[((((ax1_outer * 12544) + (ax1_inner * 784)) + (ax2_outer * 28)) + (ax3_outer * 4))] = (((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_11_let)[((ax1_outer * 16) + ax1_inner)]);
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 16; ++ax1_inner_1) {
          T_add[(((((ax1_outer * 12544) + (ax1_inner_1 * 784)) + (ax2_outer * 28)) + (ax3_outer * 4)) + 1)] = (((float*)conv_let)[(ax1_inner_1 + 16)] + ((float*)fused_nn_conv2d_constant_11_let)[((ax1_outer * 16) + ax1_inner_1)]);
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 16; ++ax1_inner_2) {
          T_add[(((((ax1_outer * 12544) + (ax1_inner_2 * 784)) + (ax2_outer * 28)) + (ax3_outer * 4)) + 2)] = (((float*)conv_let)[(ax1_inner_2 + 32)] + ((float*)fused_nn_conv2d_constant_11_let)[((ax1_outer * 16) + ax1_inner_2)]);
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 16; ++ax1_inner_3) {
          T_add[(((((ax1_outer * 12544) + (ax1_inner_3 * 784)) + (ax2_outer * 28)) + (ax3_outer * 4)) + 3)] = (((float*)conv_let)[(ax1_inner_3 + 48)] + ((float*)fused_nn_conv2d_constant_11_let)[((ax1_outer * 16) + ax1_inner_3)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_add(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
  void* fused_nn_conv2d_constant_7_let = (&(global_const_workspace_28_var[14980096]));
  void* fused_constant_7_let = (&(global_const_workspace_28_var[14514176]));
  void* data_vec_let = (&(global_workspace_29_var[0]));
  for (int32_t h = 0; h < 14; ++h) {
    for (int32_t w = 0; w < 14; ++w) {
      for (int32_t ci = 0; ci < 128; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 7168) + (w * 512)) + (ci * 4)) + (vh * 2)) + vw)] = p0[(((((ci * 784) + (h * 56)) + (vh * 28)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 16; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 14; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 14; ++ax3_outer) {
        void* conv_let = (&(global_workspace_29_var[401408]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
          for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
            ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 128; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_2 = (ci_1 * 4);
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 7168) + (ax3_outer * 512)) + cse_var_2) + vw_1)] * ((float*)fused_constant_7_let)[(((ax1_outer * 512) + cse_var_2) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_4 = (ci_1 * 4);
              int32_t cse_var_3 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 7168) + (ax3_outer * 512)) + cse_var_4) + vw_2) + 2)] * ((float*)fused_constant_7_let)[(((ax1_outer * 512) + cse_var_4) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_5 = (((((ax1_outer * 3136) + (ax1_inner * 784)) + (ax2_outer * 56)) + (ax3_outer * 2)) + ax3_inner);
            T_add[cse_var_5] = (p1[cse_var_5] + (((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_7_let)[((ax1_outer * 4) + ax1_inner)]));
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_6 = ((((((ax1_outer * 3136) + (ax1_inner_1 * 784)) + (ax2_outer * 56)) + (ax3_outer * 2)) + ax3_inner_1) + 28);
            T_add[cse_var_6] = (p1[cse_var_6] + (((float*)conv_let)[(((ax3_inner_1 * 4) + ax1_inner_1) + 8)] + ((float*)fused_nn_conv2d_constant_7_let)[((ax1_outer * 4) + ax1_inner_1)]));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_add_1(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var) {
  void* fused_nn_conv2d_constant_10_let = (&(global_const_workspace_38_var[14981120]));
  void* fused_constant_10_let = (&(global_const_workspace_38_var[14776320]));
  void* data_vec_let = (&(global_workspace_39_var[0]));
  for (int32_t h = 0; h < 14; ++h) {
    for (int32_t w = 0; w < 14; ++w) {
      for (int32_t ci = 0; ci < 128; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 7168) + (w * 512)) + (ci * 4)) + (vh * 2)) + vw)] = p0[(((((ci * 784) + (h * 56)) + (vh * 28)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 16; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 14; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 14; ++ax3_outer) {
        void* conv_let = (&(global_workspace_39_var[401408]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
          for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
            ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 128; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_2 = (ci_1 * 4);
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 7168) + (ax3_outer * 512)) + cse_var_2) + vw_1)] * ((float*)fused_constant_10_let)[(((ax1_outer * 512) + cse_var_2) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_4 = (ci_1 * 4);
              int32_t cse_var_3 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 7168) + (ax3_outer * 512)) + cse_var_4) + vw_2) + 2)] * ((float*)fused_constant_10_let)[(((ax1_outer * 512) + cse_var_4) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_5 = (((((ax1_outer * 3136) + (ax1_inner * 784)) + (ax2_outer * 56)) + (ax3_outer * 2)) + ax3_inner);
            T_add[cse_var_5] = (p1[cse_var_5] + (((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_10_let)[((ax1_outer * 4) + ax1_inner)]));
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_6 = ((((((ax1_outer * 3136) + (ax1_inner_1 * 784)) + (ax2_outer * 56)) + (ax3_outer * 2)) + ax3_inner_1) + 28);
            T_add[cse_var_6] = (p1[cse_var_6] + (((float*)conv_let)[(((ax3_inner_1 * 4) + ax1_inner_1) + 8)] + ((float*)fused_nn_conv2d_constant_10_let)[((ax1_outer * 4) + ax1_inner_1)]));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_add_10(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_148_var, uint8_t* global_workspace_149_var) {
  void* fused_nn_conv2d_constant_43_let = (&(global_const_workspace_148_var[14972416]));
  void* fused_constant_43_let = (&(global_const_workspace_148_var[11948032]));
  void* data_vec_let = (&(global_workspace_149_var[0]));
  for (int32_t h = 0; h < 7; ++h) {
    for (int32_t ci = 0; ci < 256; ++ci) {
      for (int32_t vw = 0; vw < 7; ++vw) {
        ((float*)data_vec_let)[(((h * 1792) + (ci * 7)) + vw)] = p0[(((ci * 49) + (h * 7)) + vw)];
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 16; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 7; ++ax2_outer) {
      void* conv_let = (&(global_workspace_149_var[50176]));
      for (int32_t vw_init = 0; vw_init < 7; ++vw_init) {
        for (int32_t vc_init = 0; vc_init < 8; ++vc_init) {
          ((float*)conv_let)[((vw_init * 8) + vc_init)] = 0.000000e+00f;
        }
      }
      for (int32_t ci_1 = 0; ci_1 < 256; ++ci_1) {
        for (int32_t vw_1 = 0; vw_1 < 7; ++vw_1) {
          for (int32_t vc = 0; vc < 8; ++vc) {
            int32_t cse_var_1 = ((vw_1 * 8) + vc);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[(((ax2_outer * 1792) + (ci_1 * 7)) + vw_1)] * ((float*)fused_constant_43_let)[(((ax1_outer * 2048) + (ci_1 * 8)) + vc)]));
          }
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
        for (int32_t ax1_inner = 0; ax1_inner < 8; ++ax1_inner) {
          int32_t cse_var_2 = ((((ax1_outer * 392) + (ax1_inner * 49)) + (ax2_outer * 7)) + ax3_inner);
          T_add[cse_var_2] = (p1[cse_var_2] + (((float*)conv_let)[((ax3_inner * 8) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_43_let)[((ax1_outer * 8) + ax1_inner)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_add_11(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_158_var, uint8_t* global_workspace_159_var) {
  void* fused_nn_conv2d_constant_46_let = (&(global_const_workspace_158_var[14971904]));
  void* fused_constant_46_let = (&(global_const_workspace_158_var[11685888]));
  void* data_vec_let = (&(global_workspace_159_var[0]));
  for (int32_t h = 0; h < 7; ++h) {
    for (int32_t ci = 0; ci < 256; ++ci) {
      for (int32_t vw = 0; vw < 7; ++vw) {
        ((float*)data_vec_let)[(((h * 1792) + (ci * 7)) + vw)] = p0[(((ci * 49) + (h * 7)) + vw)];
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 16; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 7; ++ax2_outer) {
      void* conv_let = (&(global_workspace_159_var[75264]));
      for (int32_t vw_init = 0; vw_init < 7; ++vw_init) {
        for (int32_t vc_init = 0; vc_init < 8; ++vc_init) {
          ((float*)conv_let)[((vw_init * 8) + vc_init)] = 0.000000e+00f;
        }
      }
      for (int32_t ci_1 = 0; ci_1 < 256; ++ci_1) {
        for (int32_t vw_1 = 0; vw_1 < 7; ++vw_1) {
          for (int32_t vc = 0; vc < 8; ++vc) {
            int32_t cse_var_1 = ((vw_1 * 8) + vc);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[(((ax2_outer * 1792) + (ci_1 * 7)) + vw_1)] * ((float*)fused_constant_46_let)[(((ax1_outer * 2048) + (ci_1 * 8)) + vc)]));
          }
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
        for (int32_t ax1_inner = 0; ax1_inner < 8; ++ax1_inner) {
          int32_t cse_var_2 = ((((ax1_outer * 392) + (ax1_inner * 49)) + (ax2_outer * 7)) + ax3_inner);
          T_add[cse_var_2] = (p1[cse_var_2] + (((float*)conv_let)[((ax3_inner * 8) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_46_let)[((ax1_outer * 8) + ax1_inner)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_add_2(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var) {
  void* fused_nn_conv2d_constant_13_let = (&(global_const_workspace_48_var[14980864]));
  void* fused_constant_13_let = (&(global_const_workspace_48_var[14710784]));
  void* data_vec_let = (&(global_workspace_49_var[0]));
  for (int32_t h = 0; h < 14; ++h) {
    for (int32_t w = 0; w < 14; ++w) {
      for (int32_t ci = 0; ci < 128; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 7168) + (w * 512)) + (ci * 4)) + (vh * 2)) + vw)] = p0[(((((ci * 784) + (h * 56)) + (vh * 28)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 16; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 14; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 14; ++ax3_outer) {
        void* conv_let = (&(global_workspace_49_var[401408]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
          for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
            ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 128; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_2 = (ci_1 * 4);
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 7168) + (ax3_outer * 512)) + cse_var_2) + vw_1)] * ((float*)fused_constant_13_let)[(((ax1_outer * 512) + cse_var_2) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_4 = (ci_1 * 4);
              int32_t cse_var_3 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 7168) + (ax3_outer * 512)) + cse_var_4) + vw_2) + 2)] * ((float*)fused_constant_13_let)[(((ax1_outer * 512) + cse_var_4) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_5 = (((((ax1_outer * 3136) + (ax1_inner * 784)) + (ax2_outer * 56)) + (ax3_outer * 2)) + ax3_inner);
            T_add[cse_var_5] = (p1[cse_var_5] + (((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_13_let)[((ax1_outer * 4) + ax1_inner)]));
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_6 = ((((((ax1_outer * 3136) + (ax1_inner_1 * 784)) + (ax2_outer * 56)) + (ax3_outer * 2)) + ax3_inner_1) + 28);
            T_add[cse_var_6] = (p1[cse_var_6] + (((float*)conv_let)[(((ax3_inner_1 * 4) + ax1_inner_1) + 8)] + ((float*)fused_nn_conv2d_constant_13_let)[((ax1_outer * 4) + ax1_inner_1)]));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_add_3(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var) {
  void* fused_nn_conv2d_constant_16_let = (&(global_const_workspace_58_var[14980608]));
  void* fused_constant_16_let = (&(global_const_workspace_58_var[14645248]));
  void* data_vec_let = (&(global_workspace_59_var[0]));
  for (int32_t h = 0; h < 14; ++h) {
    for (int32_t w = 0; w < 14; ++w) {
      for (int32_t ci = 0; ci < 128; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 7168) + (w * 512)) + (ci * 4)) + (vh * 2)) + vw)] = p0[(((((ci * 784) + (h * 56)) + (vh * 28)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 16; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 14; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 14; ++ax3_outer) {
        void* conv_let = (&(global_workspace_59_var[602112]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
          for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
            ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 128; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_2 = (ci_1 * 4);
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 7168) + (ax3_outer * 512)) + cse_var_2) + vw_1)] * ((float*)fused_constant_16_let)[(((ax1_outer * 512) + cse_var_2) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_4 = (ci_1 * 4);
              int32_t cse_var_3 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 7168) + (ax3_outer * 512)) + cse_var_4) + vw_2) + 2)] * ((float*)fused_constant_16_let)[(((ax1_outer * 512) + cse_var_4) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_5 = (((((ax1_outer * 3136) + (ax1_inner * 784)) + (ax2_outer * 56)) + (ax3_outer * 2)) + ax3_inner);
            T_add[cse_var_5] = (p1[cse_var_5] + (((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_16_let)[((ax1_outer * 4) + ax1_inner)]));
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_6 = ((((((ax1_outer * 3136) + (ax1_inner_1 * 784)) + (ax2_outer * 56)) + (ax3_outer * 2)) + ax3_inner_1) + 28);
            T_add[cse_var_6] = (p1[cse_var_6] + (((float*)conv_let)[(((ax3_inner_1 * 4) + ax1_inner_1) + 8)] + ((float*)fused_nn_conv2d_constant_16_let)[((ax1_outer * 4) + ax1_inner_1)]));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_add_4(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var) {
  void* fused_nn_conv2d_constant_22_let = (&(global_const_workspace_78_var[14976512]));
  void* fused_constant_22_let = (&(global_const_workspace_78_var[13520896]));
  void* data_vec_let = (&(global_workspace_79_var[0]));
  for (int32_t h = 0; h < 14; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 256; ++ci) {
        for (int32_t vw = 0; vw < 7; ++vw) {
          ((float*)data_vec_let)[((((h * 3584) + (w * 1792)) + (ci * 7)) + vw)] = p0[((((ci * 196) + (h * 14)) + (w * 7)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 14; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_79_var[200704]));
        for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 7; ++vw_init) {
            ((float*)conv_let)[((vw_init * 16) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 256; ++ci_1) {
          for (int32_t vc = 0; vc < 16; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 7; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 16) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 3584) + (ax3_outer * 1792)) + (ci_1 * 7)) + vw_1)] * ((float*)fused_constant_22_let)[(((ax1_outer * 4096) + (ci_1 * 16)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
            int32_t cse_var_2 = (((((ax1_outer * 3136) + (ax1_inner * 196)) + (ax2_outer * 14)) + (ax3_outer * 7)) + ax3_inner);
            T_add[cse_var_2] = (p1[cse_var_2] + (((float*)conv_let)[((ax3_inner * 16) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_22_let)[((ax1_outer * 16) + ax1_inner)]));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_add_5(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_88_var, uint8_t* global_workspace_89_var) {
  void* fused_nn_conv2d_constant_25_let = (&(global_const_workspace_88_var[14976000]));
  void* fused_constant_25_let = (&(global_const_workspace_88_var[13258752]));
  void* data_vec_let = (&(global_workspace_89_var[0]));
  for (int32_t h = 0; h < 14; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 256; ++ci) {
        for (int32_t vw = 0; vw < 7; ++vw) {
          ((float*)data_vec_let)[((((h * 3584) + (w * 1792)) + (ci * 7)) + vw)] = p0[((((ci * 196) + (h * 14)) + (w * 7)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 14; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_89_var[200704]));
        for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 7; ++vw_init) {
            ((float*)conv_let)[((vw_init * 16) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 256; ++ci_1) {
          for (int32_t vc = 0; vc < 16; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 7; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 16) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 3584) + (ax3_outer * 1792)) + (ci_1 * 7)) + vw_1)] * ((float*)fused_constant_25_let)[(((ax1_outer * 4096) + (ci_1 * 16)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
            int32_t cse_var_2 = (((((ax1_outer * 3136) + (ax1_inner * 196)) + (ax2_outer * 14)) + (ax3_outer * 7)) + ax3_inner);
            T_add[cse_var_2] = (p1[cse_var_2] + (((float*)conv_let)[((ax3_inner * 16) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_25_let)[((ax1_outer * 16) + ax1_inner)]));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_add_6(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_98_var, uint8_t* global_workspace_99_var) {
  void* fused_nn_conv2d_constant_28_let = (&(global_const_workspace_98_var[14975488]));
  void* fused_constant_28_let = (&(global_const_workspace_98_var[12996608]));
  void* data_vec_let = (&(global_workspace_99_var[0]));
  for (int32_t h = 0; h < 14; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 256; ++ci) {
        for (int32_t vw = 0; vw < 7; ++vw) {
          ((float*)data_vec_let)[((((h * 3584) + (w * 1792)) + (ci * 7)) + vw)] = p0[((((ci * 196) + (h * 14)) + (w * 7)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 14; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_99_var[200704]));
        for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 7; ++vw_init) {
            ((float*)conv_let)[((vw_init * 16) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 256; ++ci_1) {
          for (int32_t vc = 0; vc < 16; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 7; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 16) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 3584) + (ax3_outer * 1792)) + (ci_1 * 7)) + vw_1)] * ((float*)fused_constant_28_let)[(((ax1_outer * 4096) + (ci_1 * 16)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
            int32_t cse_var_2 = (((((ax1_outer * 3136) + (ax1_inner * 196)) + (ax2_outer * 14)) + (ax3_outer * 7)) + ax3_inner);
            T_add[cse_var_2] = (p1[cse_var_2] + (((float*)conv_let)[((ax3_inner * 16) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_28_let)[((ax1_outer * 16) + ax1_inner)]));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_add_7(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_108_var, uint8_t* global_workspace_109_var) {
  void* fused_nn_conv2d_constant_31_let = (&(global_const_workspace_108_var[14974464]));
  void* fused_constant_31_let = (&(global_const_workspace_108_var[12734464]));
  void* data_vec_let = (&(global_workspace_109_var[0]));
  for (int32_t h = 0; h < 14; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 256; ++ci) {
        for (int32_t vw = 0; vw < 7; ++vw) {
          ((float*)data_vec_let)[((((h * 3584) + (w * 1792)) + (ci * 7)) + vw)] = p0[((((ci * 196) + (h * 14)) + (w * 7)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 14; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_109_var[200704]));
        for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 7; ++vw_init) {
            ((float*)conv_let)[((vw_init * 16) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 256; ++ci_1) {
          for (int32_t vc = 0; vc < 16; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 7; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 16) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 3584) + (ax3_outer * 1792)) + (ci_1 * 7)) + vw_1)] * ((float*)fused_constant_31_let)[(((ax1_outer * 4096) + (ci_1 * 16)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
            int32_t cse_var_2 = (((((ax1_outer * 3136) + (ax1_inner * 196)) + (ax2_outer * 14)) + (ax3_outer * 7)) + ax3_inner);
            T_add[cse_var_2] = (p1[cse_var_2] + (((float*)conv_let)[((ax3_inner * 16) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_31_let)[((ax1_outer * 16) + ax1_inner)]));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_add_8(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_118_var, uint8_t* global_workspace_119_var) {
  void* fused_nn_conv2d_constant_34_let = (&(global_const_workspace_118_var[14973952]));
  void* fused_constant_34_let = (&(global_const_workspace_118_var[12472320]));
  void* data_vec_let = (&(global_workspace_119_var[0]));
  for (int32_t h = 0; h < 14; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 256; ++ci) {
        for (int32_t vw = 0; vw < 7; ++vw) {
          ((float*)data_vec_let)[((((h * 3584) + (w * 1792)) + (ci * 7)) + vw)] = p0[((((ci * 196) + (h * 14)) + (w * 7)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 14; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_119_var[200704]));
        for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 7; ++vw_init) {
            ((float*)conv_let)[((vw_init * 16) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 256; ++ci_1) {
          for (int32_t vc = 0; vc < 16; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 7; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 16) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 3584) + (ax3_outer * 1792)) + (ci_1 * 7)) + vw_1)] * ((float*)fused_constant_34_let)[(((ax1_outer * 4096) + (ci_1 * 16)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
            int32_t cse_var_2 = (((((ax1_outer * 3136) + (ax1_inner * 196)) + (ax2_outer * 14)) + (ax3_outer * 7)) + ax3_inner);
            T_add[cse_var_2] = (p1[cse_var_2] + (((float*)conv_let)[((ax3_inner * 16) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_34_let)[((ax1_outer * 16) + ax1_inner)]));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_nn_conv2d_add_add_9(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_128_var, uint8_t* global_workspace_129_var) {
  void* fused_nn_conv2d_constant_37_let = (&(global_const_workspace_128_var[14973440]));
  void* fused_constant_37_let = (&(global_const_workspace_128_var[12210176]));
  void* data_vec_let = (&(global_workspace_129_var[0]));
  for (int32_t h = 0; h < 14; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 256; ++ci) {
        for (int32_t vw = 0; vw < 7; ++vw) {
          ((float*)data_vec_let)[((((h * 3584) + (w * 1792)) + (ci * 7)) + vw)] = p0[((((ci * 196) + (h * 14)) + (w * 7)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 14; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_129_var[301056]));
        for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 7; ++vw_init) {
            ((float*)conv_let)[((vw_init * 16) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 256; ++ci_1) {
          for (int32_t vc = 0; vc < 16; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 7; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 16) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 3584) + (ax3_outer * 1792)) + (ci_1 * 7)) + vw_1)] * ((float*)fused_constant_37_let)[(((ax1_outer * 4096) + (ci_1 * 16)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
            int32_t cse_var_2 = (((((ax1_outer * 3136) + (ax1_inner * 196)) + (ax2_outer * 14)) + (ax3_outer * 7)) + ax3_inner);
            T_add[cse_var_2] = (p1[cse_var_2] + (((float*)conv_let)[((ax3_inner * 16) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_37_let)[((ax1_outer * 16) + ax1_inner)]));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape(float* p0, float* T_reshape, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* fused_reshape_constant_let = (&(global_const_workspace_4_var[3211264]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3584; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 14; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 56) + (ax3_outer * 4)) + ax3_inner);
        T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_let)[cse_var_1]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_1(float* p0, float* T_reshape, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  void* fused_reshape_constant_1_let = (&(global_const_workspace_8_var[2408448]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3584; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 14; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 56) + (ax3_outer * 4)) + ax3_inner);
        T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_1_let)[cse_var_1]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_10(float* p0, float* T_reshape, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var) {
  void* fused_reshape_constant_10_let = (&(global_const_workspace_52_var[7626752]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3584; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 7; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 28) + (ax3_outer * 4)) + ax3_inner);
        T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_10_let)[cse_var_1]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_11(float* p0, float* T_reshape, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var) {
  void* fused_reshape_constant_11_let = (&(global_const_workspace_56_var[7225344]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3584; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 7; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 28) + (ax3_outer * 4)) + ax3_inner);
        T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_11_let)[cse_var_1]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_12(float* p0, float* T_reshape, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var) {
  void* fused_reshape_constant_12_let = (&(global_const_workspace_62_var[1605632]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 7168; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 7; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 28) + (ax3_outer * 4)) + ax3_inner);
        T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_12_let)[cse_var_1]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_13(float* p0, float* T_reshape, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var) {
  void* fused_reshape_constant_13_let = (&(global_const_workspace_66_var[11485184]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3584; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        if (((ax3_outer * 2) + (ax3_inner >> 1)) < 7) {
          int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 14) + (ax3_outer * 4)) + ax3_inner);
          T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_13_let)[(cse_var_1 % 50176)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_14(float* p0, float* T_reshape, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var) {
  void* fused_reshape_constant_14_let = (&(global_const_workspace_72_var[11284480]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3584; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        if (((ax3_outer * 2) + (ax3_inner >> 1)) < 7) {
          int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 14) + (ax3_outer * 4)) + ax3_inner);
          T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_14_let)[(cse_var_1 % 50176)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_15(float* p0, float* T_reshape, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var) {
  void* fused_reshape_constant_15_let = (&(global_const_workspace_76_var[11083776]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3584; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        if (((ax3_outer * 2) + (ax3_inner >> 1)) < 7) {
          int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 14) + (ax3_outer * 4)) + ax3_inner);
          T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_15_let)[(cse_var_1 % 50176)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_16(float* p0, float* T_reshape, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var) {
  void* fused_reshape_constant_16_let = (&(global_const_workspace_82_var[10883072]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3584; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        if (((ax3_outer * 2) + (ax3_inner >> 1)) < 7) {
          int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 14) + (ax3_outer * 4)) + ax3_inner);
          T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_16_let)[(cse_var_1 % 50176)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_17(float* p0, float* T_reshape, uint8_t* global_const_workspace_86_var, uint8_t* global_workspace_87_var) {
  void* fused_reshape_constant_17_let = (&(global_const_workspace_86_var[10682368]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3584; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        if (((ax3_outer * 2) + (ax3_inner >> 1)) < 7) {
          int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 14) + (ax3_outer * 4)) + ax3_inner);
          T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_17_let)[(cse_var_1 % 50176)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_18(float* p0, float* T_reshape, uint8_t* global_const_workspace_92_var, uint8_t* global_workspace_93_var) {
  void* fused_reshape_constant_18_let = (&(global_const_workspace_92_var[10481664]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3584; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        if (((ax3_outer * 2) + (ax3_inner >> 1)) < 7) {
          int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 14) + (ax3_outer * 4)) + ax3_inner);
          T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_18_let)[(cse_var_1 % 50176)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_19(float* p0, float* T_reshape, uint8_t* global_const_workspace_96_var, uint8_t* global_workspace_97_var) {
  void* fused_reshape_constant_19_let = (&(global_const_workspace_96_var[10280960]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3584; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        if (((ax3_outer * 2) + (ax3_inner >> 1)) < 7) {
          int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 14) + (ax3_outer * 4)) + ax3_inner);
          T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_19_let)[(cse_var_1 % 50176)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_2(float* p0, float* T_reshape, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  void* fused_reshape_constant_2_let = (&(global_const_workspace_12_var[0]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 7168; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 14; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 56) + (ax3_outer * 4)) + ax3_inner);
        T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_2_let)[cse_var_1]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_20(float* p0, float* T_reshape, uint8_t* global_const_workspace_102_var, uint8_t* global_workspace_103_var) {
  void* fused_reshape_constant_20_let = (&(global_const_workspace_102_var[10080256]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3584; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        if (((ax3_outer * 2) + (ax3_inner >> 1)) < 7) {
          int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 14) + (ax3_outer * 4)) + ax3_inner);
          T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_20_let)[(cse_var_1 % 50176)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_21(float* p0, float* T_reshape, uint8_t* global_const_workspace_106_var, uint8_t* global_workspace_107_var) {
  void* fused_reshape_constant_21_let = (&(global_const_workspace_106_var[9879552]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3584; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        if (((ax3_outer * 2) + (ax3_inner >> 1)) < 7) {
          int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 14) + (ax3_outer * 4)) + ax3_inner);
          T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_21_let)[(cse_var_1 % 50176)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_22(float* p0, float* T_reshape, uint8_t* global_const_workspace_112_var, uint8_t* global_workspace_113_var) {
  void* fused_reshape_constant_22_let = (&(global_const_workspace_112_var[9678848]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3584; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        if (((ax3_outer * 2) + (ax3_inner >> 1)) < 7) {
          int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 14) + (ax3_outer * 4)) + ax3_inner);
          T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_22_let)[(cse_var_1 % 50176)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_23(float* p0, float* T_reshape, uint8_t* global_const_workspace_116_var, uint8_t* global_workspace_117_var) {
  void* fused_reshape_constant_23_let = (&(global_const_workspace_116_var[9478144]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3584; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        if (((ax3_outer * 2) + (ax3_inner >> 1)) < 7) {
          int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 14) + (ax3_outer * 4)) + ax3_inner);
          T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_23_let)[(cse_var_1 % 50176)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_24(float* p0, float* T_reshape, uint8_t* global_const_workspace_122_var, uint8_t* global_workspace_123_var) {
  void* fused_reshape_constant_24_let = (&(global_const_workspace_122_var[9277440]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3584; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        if (((ax3_outer * 2) + (ax3_inner >> 1)) < 7) {
          int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 14) + (ax3_outer * 4)) + ax3_inner);
          T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_24_let)[(cse_var_1 % 50176)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_25(float* p0, float* T_reshape, uint8_t* global_const_workspace_126_var, uint8_t* global_workspace_127_var) {
  void* fused_reshape_constant_25_let = (&(global_const_workspace_126_var[9076736]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3584; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        if (((ax3_outer * 2) + (ax3_inner >> 1)) < 7) {
          int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 14) + (ax3_outer * 4)) + ax3_inner);
          T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_25_let)[(cse_var_1 % 50176)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_26(float* p0, float* T_reshape, uint8_t* global_const_workspace_132_var, uint8_t* global_workspace_133_var) {
  void* fused_reshape_constant_26_let = (&(global_const_workspace_132_var[6823936]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 7168; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        if (((ax3_outer * 2) + (ax3_inner >> 1)) < 7) {
          int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 14) + (ax3_outer * 4)) + ax3_inner);
          T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_26_let)[(cse_var_1 % 100352)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_27(float* p0, float* T_reshape, uint8_t* global_const_workspace_136_var, uint8_t* global_workspace_137_var) {
  void* fused_reshape_constant_27_let = (&(global_const_workspace_136_var[14014464]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3584; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        if (((ax3_outer * 4) + ax3_inner) < 7) {
          int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 7) + (ax3_outer * 4)) + ax3_inner);
          T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_27_let)[(cse_var_1 % 25088)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_28(float* p0, float* T_reshape, uint8_t* global_const_workspace_142_var, uint8_t* global_workspace_143_var) {
  void* fused_reshape_constant_28_let = (&(global_const_workspace_142_var[14431232]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1792; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        if (((ax3_outer * 4) + ax3_inner) < 7) {
          int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 7) + (ax3_outer * 4)) + ax3_inner);
          T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_28_let)[(cse_var_1 % 12544)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_29(float* p0, float* T_reshape, uint8_t* global_const_workspace_146_var, uint8_t* global_workspace_147_var) {
  void* fused_reshape_constant_29_let = (&(global_const_workspace_146_var[14381056]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1792; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        if (((ax3_outer * 4) + ax3_inner) < 7) {
          int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 7) + (ax3_outer * 4)) + ax3_inner);
          T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_29_let)[(cse_var_1 % 12544)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_3(float* p0, float* T_reshape, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  void* fused_reshape_constant_3_let = (&(global_const_workspace_16_var[6422528]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3584; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 7; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 28) + (ax3_outer * 4)) + ax3_inner);
        T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_3_let)[cse_var_1]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_30(float* p0, float* T_reshape, uint8_t* global_const_workspace_152_var, uint8_t* global_workspace_153_var) {
  void* fused_reshape_constant_30_let = (&(global_const_workspace_152_var[14330880]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1792; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        if (((ax3_outer * 4) + ax3_inner) < 7) {
          int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 7) + (ax3_outer * 4)) + ax3_inner);
          T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_30_let)[(cse_var_1 % 12544)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_31(float* p0, float* T_reshape, uint8_t* global_const_workspace_156_var, uint8_t* global_workspace_157_var) {
  void* fused_reshape_constant_31_let = (&(global_const_workspace_156_var[14280704]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1792; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        if (((ax3_outer * 4) + ax3_inner) < 7) {
          int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 7) + (ax3_outer * 4)) + ax3_inner);
          T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_31_let)[(cse_var_1 % 12544)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_32(float* p0, float* T_reshape, uint8_t* global_const_workspace_162_var, uint8_t* global_workspace_163_var) {
  void* fused_reshape_constant_32_let = (&(global_const_workspace_162_var[13914112]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3584; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        if (((ax3_outer * 4) + ax3_inner) < 7) {
          int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 7) + (ax3_outer * 4)) + ax3_inner);
          T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_32_let)[(cse_var_1 % 25088)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_4(float* p0, float* T_reshape, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  void* fused_reshape_constant_4_let = (&(global_const_workspace_22_var[6021120]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3584; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 7; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 28) + (ax3_outer * 4)) + ax3_inner);
        T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_4_let)[cse_var_1]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_5(float* p0, float* T_reshape, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  void* fused_reshape_constant_5_let = (&(global_const_workspace_26_var[5619712]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3584; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 7; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 28) + (ax3_outer * 4)) + ax3_inner);
        T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_5_let)[cse_var_1]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_6(float* p0, float* T_reshape, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var) {
  void* fused_reshape_constant_6_let = (&(global_const_workspace_32_var[5218304]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3584; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 7; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 28) + (ax3_outer * 4)) + ax3_inner);
        T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_6_let)[cse_var_1]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_7(float* p0, float* T_reshape, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var) {
  void* fused_reshape_constant_7_let = (&(global_const_workspace_36_var[4816896]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3584; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 7; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 28) + (ax3_outer * 4)) + ax3_inner);
        T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_7_let)[cse_var_1]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_8(float* p0, float* T_reshape, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var) {
  void* fused_reshape_constant_8_let = (&(global_const_workspace_42_var[4415488]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3584; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 7; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 28) + (ax3_outer * 4)) + ax3_inner);
        T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_8_let)[cse_var_1]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature_fused_reshape_nn_prelu_reshape_9(float* p0, float* T_reshape, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var) {
  void* fused_reshape_constant_9_let = (&(global_const_workspace_46_var[4014080]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3584; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 7; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 28) + (ax3_outer * 4)) + ax3_inner);
        T_reshape[cse_var_1] = ((0.000000e+00f < p0[cse_var_1]) ? p0[cse_var_1] : (p0[cse_var_1] * ((float*)fused_reshape_constant_9_let)[cse_var_1]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_face_feature___tvm_main__(float* x_buffer_var, float* output_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_49_let = (&(global_workspace_1_var[401408]));
  void* sid_46_let = (&(global_workspace_1_var[0]));
  void* sid_45_let = (&(global_workspace_1_var[200704]));
  void* sid_44_let = (&(global_workspace_1_var[501760]));
  void* sid_43_let = (&(global_workspace_1_var[200704]));
  void* sid_41_let = (&(global_workspace_1_var[0]));
  void* sid_40_let = (&(global_workspace_1_var[200704]));
  void* sid_39_let = (&(global_workspace_1_var[401408]));
  void* sid_37_let = (&(global_workspace_1_var[0]));
  void* sid_36_let = (&(global_workspace_1_var[0]));
  void* sid_35_let = (&(global_workspace_1_var[200704]));
  void* sid_63_let = (&(global_workspace_1_var[200704]));
  void* sid_48_let = (&(global_workspace_1_var[200704]));
  void* sid_33_let = (&(global_workspace_1_var[200704]));
  void* sid_8_let = (&(global_workspace_1_var[401408]));
  void* sid_28_let = (&(global_workspace_1_var[401408]));
  void* sid_10_let = (&(global_workspace_1_var[401408]));
  void* sid_52_let = (&(global_workspace_1_var[0]));
  void* sid_60_let = (&(global_workspace_1_var[200704]));
  void* sid_51_let = (&(global_workspace_1_var[0]));
  void* sid_53_let = (&(global_workspace_1_var[200704]));
  void* sid_7_let = (&(global_workspace_1_var[0]));
  void* sid_42_let = (&(global_workspace_1_var[0]));
  void* sid_13_let = (&(global_workspace_1_var[401408]));
  void* sid_47_let = (&(global_workspace_1_var[0]));
  void* sid_3_let = (&(global_workspace_1_var[0]));
  void* sid_11_let = (&(global_workspace_1_var[0]));
  void* sid_5_let = (&(global_workspace_1_var[1605632]));
  void* sid_6_let = (&(global_workspace_1_var[0]));
  void* sid_9_let = (&(global_workspace_1_var[1003520]));
  void* sid_15_let = (&(global_workspace_1_var[401408]));
  void* sid_38_let = (&(global_workspace_1_var[200704]));
  void* sid_81_let = (&(global_workspace_1_var[0]));
  void* sid_1_let = (&(global_workspace_1_var[802816]));
  void* sid_12_let = (&(global_workspace_1_var[0]));
  void* sid_4_let = (&(global_workspace_1_var[802816]));
  void* sid_2_let = (&(global_workspace_1_var[0]));
  void* sid_62_let = (&(global_workspace_1_var[0]));
  void* sid_54_let = (&(global_workspace_1_var[501760]));
  void* sid_50_let = (&(global_workspace_1_var[200704]));
  void* sid_14_let = (&(global_workspace_1_var[802816]));
  void* sid_16_let = (&(global_workspace_1_var[0]));
  void* sid_55_let = (&(global_workspace_1_var[200704]));
  void* sid_32_let = (&(global_workspace_1_var[0]));
  void* sid_57_let = (&(global_workspace_1_var[0]));
  void* sid_27_let = (&(global_workspace_1_var[0]));
  void* sid_17_let = (&(global_workspace_1_var[0]));
  void* sid_59_let = (&(global_workspace_1_var[401408]));
  void* sid_25_let = (&(global_workspace_1_var[401408]));
  void* sid_29_let = (&(global_workspace_1_var[401408]));
  void* sid_18_let = (&(global_workspace_1_var[401408]));
  void* sid_23_let = (&(global_workspace_1_var[401408]));
  void* sid_19_let = (&(global_workspace_1_var[1003520]));
  void* sid_20_let = (&(global_workspace_1_var[401408]));
  void* sid_34_let = (&(global_workspace_1_var[501760]));
  void* sid_21_let = (&(global_workspace_1_var[0]));
  void* sid_56_let = (&(global_workspace_1_var[0]));
  void* sid_22_let = (&(global_workspace_1_var[0]));
  void* sid_58_let = (&(global_workspace_1_var[200704]));
  void* sid_24_let = (&(global_workspace_1_var[802816]));
  void* sid_30_let = (&(global_workspace_1_var[802816]));
  void* sid_26_let = (&(global_workspace_1_var[0]));
  void* sid_61_let = (&(global_workspace_1_var[0]));
  void* sid_31_let = (&(global_workspace_1_var[0]));
  void* sid_64_let = (&(global_workspace_1_var[200704]));
  void* sid_65_let = (&(global_workspace_1_var[401408]));
  void* sid_66_let = (&(global_workspace_1_var[0]));
  void* sid_67_let = (&(global_workspace_1_var[0]));
  void* sid_68_let = (&(global_workspace_1_var[100352]));
  void* sid_69_let = (&(global_workspace_1_var[125440]));
  void* sid_70_let = (&(global_workspace_1_var[50176]));
  void* sid_71_let = (&(global_workspace_1_var[0]));
  void* sid_72_let = (&(global_workspace_1_var[0]));
  void* sid_73_let = (&(global_workspace_1_var[50176]));
  void* sid_74_let = (&(global_workspace_1_var[100352]));
  void* sid_75_let = (&(global_workspace_1_var[50176]));
  void* sid_76_let = (&(global_workspace_1_var[0]));
  void* sid_77_let = (&(global_workspace_1_var[0]));
  void* sid_78_let = (&(global_workspace_1_var[50176]));
  void* sid_79_let = (&(global_workspace_1_var[50176]));
  void* sid_80_let = (&(global_workspace_1_var[100352]));
  void* sid_82_let = (&(global_workspace_1_var[0]));
  if (tvmgen_face_feature_fused_nn_conv2d_add(x_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_1(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_1(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_2(sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_2(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_3(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_3(sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_4(sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_5(sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_4(sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_6(sid_11_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_5(sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_add(sid_13_let, sid_9_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_7(sid_14_let, sid_15_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_6(sid_15_let, sid_16_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_8(sid_16_let, sid_17_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_7(sid_17_let, sid_18_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_add_1(sid_18_let, sid_14_let, sid_19_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_9(sid_19_let, sid_20_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_8(sid_20_let, sid_21_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_10(sid_21_let, sid_22_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_9(sid_22_let, sid_23_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_add_2(sid_23_let, sid_19_let, sid_24_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_11(sid_24_let, sid_25_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_10(sid_25_let, sid_26_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_12(sid_26_let, sid_27_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_11(sid_27_let, sid_28_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_add_3(sid_28_let, sid_24_let, sid_29_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_13(sid_29_let, sid_30_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_12(sid_30_let, sid_31_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_14(sid_31_let, sid_32_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_13(sid_32_let, sid_33_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_15(sid_33_let, sid_34_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_16(sid_34_let, sid_35_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_14(sid_35_let, sid_36_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_17(sid_36_let, sid_37_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_15(sid_37_let, sid_38_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_add_4(sid_38_let, sid_34_let, sid_39_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_18(sid_39_let, sid_40_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_16(sid_40_let, sid_41_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_19(sid_41_let, sid_42_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_17(sid_42_let, sid_43_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_add_5(sid_43_let, sid_39_let, sid_44_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_20(sid_44_let, sid_45_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_18(sid_45_let, sid_46_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_21(sid_46_let, sid_47_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_19(sid_47_let, sid_48_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_add_6(sid_48_let, sid_44_let, sid_49_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_22(sid_49_let, sid_50_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_20(sid_50_let, sid_51_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_23(sid_51_let, sid_52_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_21(sid_52_let, sid_53_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_add_7(sid_53_let, sid_49_let, sid_54_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_24(sid_54_let, sid_55_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_22(sid_55_let, sid_56_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_25(sid_56_let, sid_57_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_23(sid_57_let, sid_58_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_add_8(sid_58_let, sid_54_let, sid_59_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_26(sid_59_let, sid_60_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_24(sid_60_let, sid_61_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_27(sid_61_let, sid_62_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_25(sid_62_let, sid_63_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_add_9(sid_63_let, sid_59_let, sid_64_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_28(sid_64_let, sid_65_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_26(sid_65_let, sid_66_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_29(sid_66_let, sid_67_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_27(sid_67_let, sid_68_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_30(sid_68_let, sid_69_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_31(sid_69_let, sid_70_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_28(sid_70_let, sid_71_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_32(sid_71_let, sid_72_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_29(sid_72_let, sid_73_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_add_10(sid_73_let, sid_69_let, sid_74_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_33(sid_74_let, sid_75_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_30(sid_75_let, sid_76_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_34(sid_76_let, sid_77_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_31(sid_77_let, sid_78_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_add_11(sid_78_let, sid_74_let, sid_79_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_35(sid_79_let, sid_80_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_reshape_nn_prelu_reshape_32(sid_80_let, sid_81_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_36(sid_81_let, sid_82_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_face_feature_fused_nn_conv2d_add_37(sid_82_let, output_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

