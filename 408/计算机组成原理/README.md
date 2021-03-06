# 计算机组成原理

## Week 1

### 1.2 计算机系统层次结构

#### 学习建议

- 本章需理解、掌握冯诺依曼机思想，常考选择题
- CPU 对应结构需要总结记忆，常考选择题

#### 考研修仙

- 道上人：理解冯诺依曼机的基本原理、构成部分，区分系统软件和应用软件

> 小题：1，2，5，14，19

- 道上佬：掌握 CPU 的构成以及各部件属于冯诺依曼机的哪个部分，理解计算机系统的多层次结构

> 小题：3，4，6，7，8，9，10，11，12，13，15，17，18，20，21，22  
> 大题：1

### 1.3 计算机的性能指标

#### 学习建议

- 本节重在掌握基本概念，相关的计算很简单，不需要花费太多时间
- 透明性与我们的常识相反，指的是某物对我们是透明的（即看不见），判断一个东西对普通程序员、用户是否透明，可以考虑汇编语言中是否会出现该结构（比如可以操作 PC）
- 只有机器语言是唯一能被机器识别的语言（常考），解释程序不会生成一个目标程序

#### 考研修仙

- 道上人：理解机器字长、数据通路带宽、CPI 等概念， 理解翻译、汇编程序、编译程序、解释程序的概念和区别

> 小题：2，4，5，7，9，13，14，15

- 道上佬：理解机器字长、数据通路带宽、CPI 等概念对应的特点以及影响因素

> 小题：1，3，6，8，10，11，12，16

- 道上仙：性能的综合计算

> 小题：17，18，19  
> 大题：1，2，3，4

### 2.1 数制与编码

#### 学习建议

- 奇偶校验码、BCD 码、海明码、CRC 码计组中都不考，但奇偶校验码、海明码、CRC 码会在计网中考察（CRC 计算要会）

#### 考研修仙

- 道上人：理解不同进制数的表示范围和相互转换，区分真值和机器数

> 小题：1，3，4，5

- 道上佬：掌握 ASCII 码、奇偶校验码、海明码的定义

> 小题：8，11，12，13，15，17

- 道上仙：CRC 码的计算

> 小题：9，14，16，18，19，20  
> 大题：1，2

## Week 2

### 2.2 定点数的表示和运算

#### 学习建议

- 本节重在掌握原、补、反、移码的概念及互相转化，并掌握相应计算
- 计算补码时，有两种做法
    1. 完全按照计算机的方式，使用补码进行计算并判溢出
    2. 按照人类的方式，先把补码都转化成真值，然后使用真值加减（人类算法）， 最后再转化成补码

#### 考研修仙

- 道上人：掌握原、补、反、移码的值以及表示范围

> 小题：6，10，11，12，16，17，18，19，34，35，36，37，38，39，54

- 道上佬：掌握原、补、反、移码的转化计算，掌握数值扩展

> 小题：1，3，4，7，8，9，13，14，15，20，25，26，27，29，32，33，41，42，43，44，55  
> 大题：1

- 道上仙：补码的加减乘除计算以及判溢出

> 小题：2，21，22，23，24，28，31，40，45，46，47，48，49，50，51，52，53  
> 大题：2，3，4，5，6，7

### 2.3 浮点数的表示与运算

#### 学习建议

- 本节重在掌握对阶、左移右移等操作，浮点数加减步骤：
  ```mermaid
  graph LR
  对阶-->尾数求和-->规格化-->舍入-->判溢出
  ```
- IEEE 754 也是重点，（需要隐一位，即尾数都会是 $1.****$），尾数用原码表示，阶码用移码表示（置偏值为 $127$ 和 $1023$），`float`（$数符 1 + 阶码 8 + 尾数 23$），`double`（$数符 1 + 阶码 11 + 尾数 52$）

#### 考研修仙

- 道上人：掌握浮点数的概念和表示范围

> 小题：2，4，5，7，9，13，14，15

- 道上佬：掌握规格化浮点数的概念

> 小题：3，4，5，8，9，10，11，12，13，14，15，16，17，19，21，22，25，26，27，29，30，31  
> 大题：1，2，4，5

- 道上仙：掌握 IEEE 754 的概念、表示以及计算

> 小题：2，18，20，23，24，28  
> 大题：3，6，7，8，9

## Week 3

### 3.1 存储器概述 3.2 层次化结构

#### 学习建议

- $寻址单元 \times 每个单元位数（由编址方式决定） = 存储器容量$，考试中未提及编址方式时可以默认采用字节编址，后面虚拟存储器会用到
- 存取周期大于存取时间，因为在存取周期中一次存取完后还需要恢复（复位）时间
- 存储系统的两个层次
  - CPU—主存：解决速度问题
  - 主存—外层：解决容量问题
- 存储器结构（速度由高到低，容量由低到高）
  - 寄存器
  - Cache
  - 主存磁盘
  - 光盘

#### 考研修仙

- 道上人：理解存储器的分类以及缩写，理解存储器系统层次的划分

> 3.1 小题：1，2，5，6  
> 3.2 小题：1，2，3，4

- 道上佬：掌握存储器容量与寻址单元、编址方式的关系以及计算，掌握存储器的简单计算

> 3.1 小题：3，4，7，8  
> 3.2 小题：5，6；大题：1，2

### 3.3 半导体随机存储器

#### 学习建议

- 本节具体结构部分可跳过，重在掌握 SRAM 和 SROM 的异同、DRAM 的刷新方式以及数据线和地址线的意义
- 主存 = RAM + 少部分 ROM（装引导程序等）
- RAM 引脚计算
  - DRAM（地址复用）：数据线 +（一半）地址线+ 行选 + 列选 + 读 + 写
  - SRAM：数据线 + 地址线 + 片选线 + 读 + 写

#### 考研修仙

- 道上人：掌握数据线和地址线的关系，理解存储器的分类

> 小题：2，3，14，15

- 道上佬：了解不同类型存储器的特点，理解不同刷新的原理

> 小题：4，5，6，12，13，16，17，18

- 道上仙：掌握 ROM 和 RAM 的对比表格

> 小题：1，7，8，9，10，11  
> 大题：1，2

### 3.4 主存储器与 CPU 的连接

#### 学习建议

- 本节重在掌握字扩展、位扩展、字位扩展的方式，并且知道数据线、地址线不同的线对应的含义，具体的图不需要掌握

#### 考研修仙

- 道上人：理解字位、字位扩展的含义

> 小题：5，6，7，8，9

- 道上佬：掌握扩展的简单计算

> 小题：1，4，10，14  
> 大题：1，3

- 道上仙：掌握存储体、地址、数据线、地址线的关系

> 小题：2，11，12，13，15  
> 大题：2，4，5，6

## 3.5 双端口 RAM 和多模块存储器

### 学习建议

- 本节重在掌握多体并行（低位交叉编址），把它与流水线联系学习

### 考研修仙

- 道上人：了解双端口原理，理解交叉存储器的概念以及高地位交叉的区别

> 小题：1，2，3

- 道上佬：掌握多体并行（低位交叉编址）的简单计算

> 小题：4，5，6，7  
> 大题：1，2，3

# Week 4

## 3.6 高速缓冲存储器

### 学习建议

- 本节需重点复习，特别是图以及地址结构

#### 考研修仙

- 道上人：理解局部性原理，掌握 Cache 基本概念

> 小题：1，2，5，14

- 道上佬：掌握不同 Cache 映射方式的地址结构，掌握 Cache 不同替换算法以及写策略

> 小题：3，4，6，7，8，9，11，12，15，17  
> 大题：1，2

- 道上仙：掌握 Cache 地址划分， 掌握访存时间的简单计算

> 小题：10  
> 大题：3，4，5，6

### 3.7 虚拟存储器

#### 学习建议

- 本节重在掌握具有 TLB 和 Cache 的多级存储系统以及访存过程图，并会自己模拟过程
- 逻辑地址经过虚拟存储器（先 TLB 后页表）得到物理地址，物理地址经过 Cache 访存（如果命中的话）

#### 考研修仙

- 道上人：理解虚拟存储器的原理

> 小题：2，6，8

- 道上佬：掌握虚拟存储器的特点

> 小题：1，3，7，9，10

- 道上仙：结合 Cache 进行计算、模拟访存过程

> 小题：4，5，11，12  
> 大题：1，2，3，4

## Week 5

### 4.1 指令格式

#### 学习建议

- 做题时注意区分是定长还是变长操作码
- 学会根据不同指令判断是几地址指令

#### 考研修仙

- 道上人：理解指令与指令系统

> 小题：1，2

- 道上佬：理解不同指令分类，理解定长和变长操作码指令格式

> 小题：3，4，5，6，7，8，9，10，11，12
> 大题：1

- 道上仙：掌握具体变长指令分配方式

> 小题：13
> 大题：2，3，4

### 4.2 指令的寻址方式

#### 学习建议

- PSW 寄存器中，SF 表示是否为负，OF 表示是否溢出，CF 表示是否有进位借位，ZF 表示是否为 0，SF 和 OF 用于有符号数，CF 和 ZF 用于无符号数
- 寄存器不会访存，而间址会增加一次（或多次访存），根据寻址过程想一下访存次数
- 指令部分易出大题，常与 PSW 寄存器一起考察

#### 考研修仙

- 道上人：掌握不同寻址方式的过程与概念

> 小题：2，3，7，8，13

- 道上佬：理解目的不同寻址方式的特点和用途，理解简单汇编指令的含义

> 小题：1，4，5，6，9，10，11，14，19，20，25

- 道上仙：比较不同寻址方式，掌握不同寻址方式访存次数、地址的计算，理解标志寄存器的不同标志表示含义

> 小题：15，16，17，18，21，22，24
> 大题：1，2，3，4，5，6，7，8

### 4.3 CISC 和 RISC 的基本概念

#### 学习建议

- 本节不是重点，知道 RISC 和 CISC 概念，然后记住他们两者差异、优缺点即可

#### 考研修仙

- 道上人：理解 RISC 和 CISC 基本概念

> 小题：5

- 道上佬：掌握 RISC 和 CISC 的特点

> 小题：1，2，3，4

## Week 6

### 5.1 CPU 的功能和基本结构

#### 学习建议

- 注意透明的概念，透明是指该部件不会被感知到（如透明人），判断某个寄存器是否对程序员透明，可以想一想在汇编语言中是否会出现

#### 考研修仙

- 道上人：理解cpu结构（某个寄存器是否属于cpu/运算器/控制器） 与功能

> 小题：1，2，8，9，20
> 大题：1

- 道上佬：掌握各寄存器的功能

> 小题：3，4，5，6，7，10，11，12，13，14，15，16，17，18，19，21，22

### 5.2 指令的寻址方式

#### 学习建议

- 理解不同周期的功能，并掌握其流程（闭上眼想一想要做一些什么，在脑海里过一遍）
  - 指令周期：取出并执行一条指令的时间，包含多个机器周期
  - 机器周期：指令周期中完成某个功能需要的时间（通常等于存期周期），分为定长和变长，包含多个时钟周期
  - 时钟周期：执行 CPU 每个动作需要的时间，是 CPU 频率的倒数
- 指令流程
  - 从内存中获得指令并将 $PC + 1$（取指周期）；
  - 移码；
  - 得到每一个操作数地址（间址周期，非必须）；
  - 取得每一个操作数；
  - 执行（执行周期，每条指令不一样）；
  - 查看是否有中断指令；
  - 处理中断（中断周期，非必须）。

#### 考研修仙

- 道上人：掌握指令周期、机器周期、时钟周期的定义

> 小题：3，4，5

- 道上佬：理解指令运行过程以及每个周期的功能

> 小题：1，2，6，7，8，9，10，11，12，13，14，15，16，17，18
> 大题：1，2

- 道上仙：掌握每个周期的具体流程

> -

### 5.3 数据通路的结构和基本功能

- 本节与上一节联系紧密，不可以去背数据传送过程，而是要理解指令的整个执行过程，自然就能想到什么时候应该做什么
- 本节大题难度较大，且牵涉知识点多，建议第二轮复习完整张内容再做

#### 考研修仙

- 道上人：了解三种数据通路分类，理解数据通路的 `in`、`out` 等含义

> 小题：1，2

- 道上佬：理解不同类型数据通路的特点，掌握数据传输的大概流程

> 小题：3，4

- 道上仙：根据指令和图像写出具体的数据通路流程（建议先回顾上一节）

> 大题：1，2，3，4，5，6，7，8

### 5.4 控制器的功能和工作原理

#### 学习建议

- 本节内容难且不常考，重在
  - 了解控制器的构成与功能；
  - 理解硬布线与虚电路特点和区别；
  - 理解微程序控制思想并掌握微程序运行流程以及寄存器的功能；
  - 了解两种微指令格式的特点；
  - 理解微指令不同编码方式特点；
  - 硬布线设计部分可跳过。
- 微程序控制器设计其实和上一节内容差不多，可以一起复习

#### 考研修仙

- 道上人：了解控制器构成与的功能

> 小题：2，22，23

- 道上佬：理解硬布线与虚电路特点和区别，理解微指令不同编码方式特点，了解两种微指令格式的特点

> 小题：1，3，4，5，6，7，8，9，10，11，12，13，20
> 大题：1

- 道上仙：掌握不同编码方式中的微指令设计、掌握微指令中微指令数、字段、下地址位数计算，掌握微程序中微操作命令与节拍设计

> 小题：14，15，16，17，18，19
> 大题：2，3，4，5，6

## Week 7

### 5.5 指令流水线

#### 学习建议

- 流水线的周期要取最长功能段的时间（见小题 1）
- 流水线数据冲突分为写后读、读后写（按顺序进行的流水线不会有）、写写，而读后读因为没有改变具体数值所以不存在数据冲突

#### 考研修仙

- 道上人：理解指令流水线的运行原理以及特征，掌握指令流水线中指令的执行阶段（五级流水模型：取指、译码、取数、执行、写回）

> 小题：1，3，7

- 道上佬：了解不同指令流水线分类以及超流水线、超标量流水线，理解流水线冲突的类型与原因（资源冲突、数据冲突、控制冲突）

> 小题：2，4，6，15，16，17
> 大题：3

- 道上仙：掌握流水线性能指标（吞吐率、加速比、效率）的定义以及计算方式，掌握流水线图像以及复杂计算

> 小题：8，9，10，11，12
> 大题：1，2，4，5，6，7

### 6.1 总线概述

#### 学习建议

- 总线的猝发传输是指首先传输地址，然后连续传输多个数据字

#### 考研修仙

- 道上人：理解何为总线、为什么要用到多种总线，了解总线的性能指标

> 小题：6，7，10

- 道上佬：区分总线的类型并知道什么数据在哪类总线

> 小题：1，8，9，11，12，13，14，15，20，21

- 道上仙：理解猝发传输，掌握总线计算

> 小题：2，3，4，5，16，17，18，19.
> 大题：1，2

### 6.2 总线仲裁（本节已从 408 考纲中删去）

### 6.3 总线操作和定时

#### 学习建议

- 对于异步的三种方式，需要想象现实中的模式

#### 考研修仙

- 道上人：理解同步与异步的概念和特点

> 小题：1，3，4，5，6，7

- 道上佬：理解异步方式过程（不互锁、半互锁、全互锁），掌握异步简单计算

> 小题：2，8，9
> 大题：1

### 6.4 总线标准

#### 学习建议

- 并行总线不一齔串行快（一般串行更快）
- 串行总线：ISA、EISA、VESA、PCI、PCI-E、USB、SATA、RS-232C，其他可以认为是并行

#### 考研修仙

- 道上人：区分不同的总线标准

> 小题：1，3，5，6

- 道上佬：USB、PCI 等总线的特点、类型

> 小题：2，4

### 本周学习内容总结

本周内容中，重在理解指令流水线、总线的定义、总线的猝发传输以及相关计算。对于指令流水线要能够在脑海里想象出流水线图，以吸能够计算时间；总线的出现是为了方便线路设计以及方便增删设备，而由于不同设备速率不同，采多总线结构能提高计算机效率；猝发传输对于内存的传输很重要，意义在于对于一整块地址不需要在传输每一个数据前都先传输地址，而是一整块数据只需要传输一次地址，大大提高了效率。

## Week 8

### 7.1 I/0 系统基本概念 7.2 外部设备

#### 学习建议

- I/0 方式：程序查询、程序中断、DMA、通道
- 程序查询、程序中断、通道都是通过程序实现的（都需要处理器），而 DMA 是硬件实现
- RAID0 无冗余，RAID1-5 有冗余，所以后者更安全可靠（RAID 又称条带化）

#### 考研修仙

- 道上人：了解不同 I/0 方式， 了解显示原理

> 7.1 小题：1，2，3
> 7.2 小题：1，2，3

- 道上佬：理解 RAID0 和 RAID1-5 的区别，掌握 I/O 速率等简单计算

> 7.2 小题：4，5，6，7，8，9，10，11
> 7.2 大题：1

### 7.3 I/O 接口

#### 学习建议

- I/O 接口的主机侧主要是和 CPU 通信（寄存器保存），设备侧是和外设沟通的界面，注意两侧交换的数据是单向还是双向
- 独立编址意味着需要额外的控制方式，更复杂，但地址和内存地址可以相同，需要额外的 I/O 指令；统一寻址不需要额外 I/O 指令，只需要访存指令即呵，地址和内存地址不能相同

#### 考研修仙

- 道上人：了解 I/O 接口的基本功能

> 小题：3，8，9

- 道上佬：掌握 I/O 接口的结构，理解统一编址和独立编址的区别

> 小题：1，2，4，5，6，7，10

### 7.4 I/0 方式

#### 学习建议

- 中断过程是一个非常对称的过程，硬件完成关中断（关中断是为了保证硬件过程的连续性）、保存断点中断服务程序寻址，而中断处理程序因为允许多重中断应该保存现场和屏蔽字（要保证连续性）—开中断—执行中断服务程序—关中断—恢复现场和屏蔽字，这是完全对称的过程，然后开中断并返回。
- 中断向量是中断服务程序的入口地址，可以看作是指针（和向量很像）
- DMA 过程：$预处理（CPU 控制）数据传送 - 后处理（CPU 中断）$
- CPU 占用率：程序访问因为一直要 CPU 去访问所以是 100%（除非是定时访问）；程序中断中 $CPU 占用率 = 中断频率 \times 中断所花周期数 / CPU 频率$；DMA 方式还需要加上 DMA 准备时间；通道自己有处理器，不会占用 CPU

#### 考研修仙

- 道上人：区分中断的类型并了解各设备属于哪类中断，了解各 I/O 方式

> 小题：10，11，14，15，17，18，19，20，37

- 道上佬：掌握中断和 DMA 过程，理解中断屏蔽

> 小题：1，2，3，6，7，9，13，16，21，22，23，24，25，26，28，29，30，32，33，36，38，39，40，41  
> 大题：1，2，8

- 道上仙：比较中断和 DMA 异同，掌握各 I/0 方式 CPU 占用率计算

> 小题：4，5，12，31，34，35  
> 大题：3，4，5，6，9，10，11