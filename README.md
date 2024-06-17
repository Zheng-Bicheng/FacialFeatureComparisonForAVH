<center><b>基于AVH实现人脸特诊提取模型的部署</b></center>

# 1 实验背景

在现代嵌入式和物联网开发中，快速迭代和高效测试至关重要。Arm 虚拟硬件（Arm Virtual Hardware, AVH）提供了一个强大的开发环境。基于 Arm 虚拟硬件的百度云服务器内置 Ubuntu Linux 镜像，并包含了丰富的 Arm 开发工具，如 Arm 编译器、FVP 模型和针对 Cortex-M 系列处理器的其他工具。这些工具不仅帮助开发者快速上手，还支持评估 CI/CD、MLOps 和 DevOps 工作流中的自动化测试。订阅访问和使用此版本的 Arm 虚拟硬件，您需同意产品最终用户许可协议中与免费测试版许可相关的条款和协议。 
 
Arm 虚拟硬件产品的技术概览示意图如下所示。开发者也可访问 Arm 虚拟硬件[产品介绍页](https://www.arm.com/products/development-tools/simulation/virtual-hardware)和产品[技术文档](https://arm-software.github.io/AVH/main/overview/html/index.html)了解更多关于 Arm 虚拟硬件产品知识。 

<br>
<div align=center>
<img src="https://arm-software.github.io/AVH/main/overview/html/avh_overview.png" width="800" alt="Arm 虚拟硬件产品概览">
<br>图1. Arm 虚拟硬件产品概览</div>
<br>

本文将详细介绍如何基于 AVH 部署一个人脸特征提取模型。通过利用 AVH，我们可以在不依赖实际硬件的情况下进行高效开发和测试，从而大大缩短开发周期。本文将涵盖以下内容：

- 配置 AVH 开发环境
- 配置并编译人脸特征提取模型
- 编译基于 AVH 实现的人脸特征提取 Demo
- 在 AVH 上进行部署和测试

# 2 实验目标

1. 了解 Arm 虚拟硬件产品的功能及核心优势。
2. 熟悉 Arm 虚拟硬件云服务器 BCC 实例的订阅流程及 Arm 虚拟硬件镜像内的主要组件。
3. 掌握如何使用 Arm 虚拟硬件云服务器 BCC 实例进行嵌入式软件的开发（例如：机器学习、物联网应用等）并熟悉其基本的开发流程，包括：如何搭建开发环境、编译构建应用代码、运行调试工程代码等步骤。


# 3 实验前准备

在实验开始前请参考 [如何订阅使用 Arm 虚拟硬件镜像的百度智能云云服务器 BCC 实例](docs/subscription.md) 来购买并初始化一个基于 Arm 虚拟硬件镜像的百度智能云云服务器 BCC 实例。

# 4 配置开发环境

该项目基于 **使用Arm 架构的百度云服务器** 并利用 **Arm 虚拟硬件 (Arm Virtual Hardware, AVH)** 运行。根据服务器架构的不同，我们需要针对性的对开发环境进行配置。为了简化大家的时间，我们提供了两个脚本文件来帮助大家快速配置环境，如需了解更多细节，请参考脚本文件中的注释:

- [FacialFeatureComparisonForAVH/scripts/config_cmsis_toolbox.sh](./scripts/config_cmsis_toolbox.sh)
- [FacialFeatureComparisonForAVH/scripts/config_python.sh](./scripts/config_python.sh)

你可以执行以下代码来快速配置开发环境

```bash
cd /path/to/FacialFeatureComparisonForAVH
bash scripts/config_cmsis_toolbox.sh
bash scripts/config_python.sh
```

# 5 配置并编译人脸特征提取模型

## 5.1 模型介绍

本项目使用的人脸识别特征提取模型是 **Adaface** ，你可以在 [insightface/recognition/arcface_paddle](https://github.com/deepinsight/insightface/tree/master/recognition/arcface_paddle) 中找到它的详细介绍。受限于 MCU 设备极为紧张的内存，我们这里选用了 backbone 为 **MobileFace** 的 **Adaface** 模型，以下是它的详细参数：

| Model structure           | lfw    | cfp_fp  | agedb30 | CPU time cost | GPU time cost | Inference model |
| ------------------------- | ------ | ------- | ------- | -------| -------- |---- |
| MobileFace-Paddle      | 0.9952 | 0.9280  | 0.9612  | 4.3ms  | 2.3ms    | [download link](https://paddle-model-ecology.bj.bcebos.com/model/insight-face/mobileface_v1.0_infer.tar)  |

## 5.2 使用 TVM 编译模型

本项目参考了 [ArmDeveloperEcosystem/Paddle-examples-for-AVH](https://github.com/ArmDeveloperEcosystem/Paddle-examples-for-AVH)，使用 **TVM** 来将人脸特征提取模型转换成可以在 MCU 设备上部署的 C 代码，关于 TVM 的更多介绍，你可以参考 [apache/tvm](https://github.com/apache/tvm)。

在使用 TVM 转换 PaddlePaddle 模型的过程中，我们较为建议的流程为:

1. 获取 **PaddlePaddle** 静态图模型
2. 使用 **Paddle2ONNX** 将 **PaddlePaddle** 模型转换 **ONNX** 模型
3. 使用 **TVM** 将 **ONNX** 模型转换为为可以在 MCU 设备上部署的 C 代码

为了简化大家的时间，我们提供了脚本文件来帮助大家快速利用 TVM ，如需了解更多细节，请参考脚本文件中的注释:

- [FacialFeatureComparisonForAVH/scripts/build_facial_feature_model.sh](./scripts/config_cmsis_toolbox.sh)

你可以执行以下代码来快速使用 TVM 编译模型

```bash
cd /path/to/FacialFeatureComparisonForAVH
bash scripts/build_facial_feature_model.sh
```

运行脚本后，该项目目录下将出现 **face_feature** 文件夹，文件夹内存放了可以在 MCU 设备上部署模型的 C 代码。

# 6 编译基于 AVH 实现的人脸特征提取 Demo

## 6.1 将图片转换为输入数据

[FacialFeatureComparisonForAVH/images](./images) 目录下存放了三张人脸图片，其中 **face_0.jpg** 和 **face_1.jpg** 为人脸 A ，**face_2.jpg** 为人脸 B 。通常情况下，将图片转换为模型的输入需要经过以下三个步骤:

1. 颜色通道转换（BGR2RGB）
2. 图片缩放（Resize）
3. 图片归一化（Normalize）

为了简化大家的时间，我们同样提供了 python 脚本来帮大家快速将输入图片转换为输入数据，如果你想要了解更多的细节，请参考脚本文件中的注释:

- [FacialFeatureComparisonForAVH/scripts/convert_image.py](./scripts/convert_image.py)

你可以执行以下代码来快速将输入图片转换为输入数据

```bash
python scripts/convert_image.py images/face_0.jpg images/face_1.jpg
```

## 6.2 编译该项目

本项目以 [csolution](https://github.com/Open-CMSIS-Pack/cmsis-toolbox/blob/main/docs/YML-Input-Format.md) 格式提供，我们使用 [CMSIS-Toolbox](https://github.com/Open-CMSIS-Pack/cmsis-toolbox/blob/main/docs/build-operation.md) 中的 cbuild 工具在命令行中构建项目。你可以执行以下代码来快速编译本项目。

```bash
cbuild project.csolution.yml -c .event+Corstone_310 --packs --update-rte --toolchain GCC
```

# 7 在 AVH 上进行部署和测试

## 7.1 运行环境简介

AVH 仿真模型 (AVH Simulation models) 使软件程序能够在虚拟目标上执行。提供两种不同的 AVH 建模技术：

- AVH 固定虚拟平台 (FVPs)
  - 基于 Arm Cortex-M 的参考平台的精确仿真模型，例如 Corstone-315/310/300。更多信息请参考[Simulation](https://arm-software.github.io/AVH/main/simulation/html/index.html)。
  - 适用于云原生和桌面环境。详情请参考[Infrastructure](https://arm-software.github.io/AVH/main/infrastructure/html/index.html)。
- AVH Corellium 模型
  - 流行的物联网开发板和精选 Arm 参考平台的功能准确的虚拟表示：
    - 支持 Linux 操作系统的基于 Cortex-A 的系统，例如 Raspberry Pi 和 NXP i.MX。
    - 选定的基于 Cortex-M 的开发套件。
  - 软件二进制文件与硬件目标兼容。
  - 可通过 [app.avh.arm.com](https://app.avh.arm.com/) 云平台获取。更多信息请参考[AVH Users's Guide](https://developer.arm.com/docs/107660)。

如果你需要更多多于本项目运行环境的介绍，你可以参考 [Arm Virtual Hardware Introduction](https://arm-software.github.io/AVH/main/overview/html/index.html)

## 7.2 运行 Demo

```bash
FVP_Corstone_SSE-300 -a ./out/hello_vsi/Corstone_310/event/hello_vsi.axf -C mps3_board.v_path=./source/VSI/data_sensor/python/
```

# 8 参考资料

- [insightface/recognition/arcface_paddle](https://github.com/deepinsight/insightface/tree/master/recognition/arcface_paddle)
- [csolution](https://github.com/Open-CMSIS-Pack/cmsis-toolbox/blob/main/docs/YML-Input-Format.md)
- [Arm Virtual Hardware Introduction](https://arm-software.github.io/AVH/main/overview/html/index.html)
- [apache/tvm](https://github.com/apache/tvm)
- [CMSIS-Toolbox](https://github.com/Open-CMSIS-Pack/cmsis-toolbox/blob/main/docs/build-operation.md)
- [Infrastructure](https://arm-software.github.io/AVH/main/infrastructure/html/index.html)
- [Simulation](https://arm-software.github.io/AVH/main/simulation/html/index.html)
- [Arm® Keil® Microcontroller Development Kit (MDK) Getting Started Guide](https://developer.arm.com/documentation/109350/v6)