/*
 * brd_bc95.h
 *
 *  Created on: 2017-11-14
 *      Author: user
 */

#ifndef BRD_BC95_H_
#define BRD_BC95_H_

/*******************************************************************
* 函数名 : Brd_Nbiot_PowerOn
* 描述   : 打开核心板电源
* 输入   : 无
* 输出   : 无
* 返回   : 0 : 失败   非零 ：成功
* 注意   : 硬件复位
********************************************************************/
void Brd_Nbiot_PowerOn(void);

/*******************************************************************
* 函数名 : Brd_Nbiot_PowerOff
* 描述   : 关闭核心板电源
* 输入   : 无
* 输出   : 无
* 返回   : 0 : 失败   非零 ：成功
* 注意   : 硬件复位
********************************************************************/
void Brd_Nbiot_PowerOff(void);

/*******************************************************************
* 函数名 : Brd_Nbiot_Hdw_Reset
* 描述   : 通过Reset管脚复位NBIOT模块
* 输入   : 无
* 输出   : 无
* 返回   : 0 : 失败   非零 ：成功
* 注意   : 硬件复位
********************************************************************/
unsigned char Brd_Nbiot_Hdw_Reset(void);

/*******************************************************************
* 函数名 : Brd_Nbiot_AT_Reset
* 描述   : 通过NRB命令复位模块
* 输入   : 无
* 输出   :
* 返回   : 0 : 失败   非零 ：成功
* 注意   :
********************************************************************/
unsigned char Brd_Nbiot_AT_Reset(void);

/*******************************************************************
* 函数名 : Mcu_BC95_AT_OK
* 描述   : 发送AT，返回OK，测试uart0串口和BC95模块之间通信是否正常
* 输入   : 无
* 输出   :
* 返回   : 0 : 失败   非零 ：成功
* 注意   : 发送AT，返回OK
********************************************************************/
unsigned char Brd_Nbiot_Snd_AT(void);

/*******************************************************************
* 函数名 : Brd_Nbiot_Get_Cgmr
* 描述   : 获取NBIOT模块固件版本号
* 输入   : 无
* 输出   : cgmr = 固件版本号
* 返回   : 0 : 失败   非零 ：成功
* 注意   :
********************************************************************/
unsigned char Brd_Nbiot_Get_Cgmr(void);

/*******************************************************************
* 函数名 : Brd_Nbiot_Get_Cgsn
* 描述   : 获取NBIOT模块的IMEI信息
* 输入   : 无
* 输出   :
* 返回   : 0 : 失败   非零 ：成功
* 注意   :
********************************************************************/
unsigned char Brd_Nbiot_Get_Cgsn(void);

/*******************************************************************
* 函数名 : Brd_Nbiot_Get_Nconfig
* 描述   : 获取是否模块自动联网
* 输入   : 无
* 输出   : autocnt=0 : 没有自动联网   1 ：上点自动联网
* 返回   : 0 : 失败   非零 ：成功
* 注意   :
********************************************************************/
unsigned char Brd_Nbiot_Get_Nconfig(unsigned char *autocnt);

/*******************************************************************
* 函数名 : Brd_Nbiot_Get_Nband
* 描述   : 获取模块的频段
* 输入   : 无
* 输出   : nband=0 : 850MHZ   1 ：900MHZ  2 ：800MHZ
* 返回   : 0 : 失败   非零 ：成功
* 注意   :
********************************************************************/
unsigned char Brd_Nbiot_Get_Nband(unsigned char *nband);

/*******************************************************************
* 函数名 : Brd_Nbiot_Get_Cfun
* 描述   : 确定是否识别SIM卡，以及射频是否打开
* 输入   : 无
* 输出   : 无
* 返回   : 0 : 失败   非零 ：成功
* 注意   :
********************************************************************/
unsigned char Brd_Nbiot_Get_Cfun(void);

/*******************************************************************
* 函数名 : Brd_Nbiot_Get_Cimi
* 描述   : 获取SIM卡的IMSI
* 输入   : 无
* 输出   : 无
* 返回   : 0 : 失败   非零 ：成功
* 注意   :
********************************************************************/
unsigned char Brd_Nbiot_Get_Cimi(void);

/*******************************************************************
* 函数名 : Brd_Nbiot_Get_Nccid
* 描述   : 获取SIM卡的ICCID号码
* 输入   : 无
* 输出   : 无
* 返回   : 0 : 失败   非零 ：成功
* 注意   :
********************************************************************/
unsigned char Brd_Nbiot_Get_Nccid(void);

/*******************************************************************
* 函数名 : Brd_Nbiot_Get_Csq
* 描述   : 获取本地网络信号
* 输入   : 无
* 输出   : 无
* 返回   : 0 : 失败   非零 ：成功
* 注意   : 在API层提取信号强度值
********************************************************************/
unsigned char Brd_Nbiot_Get_Csq(void);

/*******************************************************************
* 函数名 : Brd_Nbiot_Get_Cgatt
* 描述   : 判断是否附着到网络
* 输入   : 无
* 输出   : 无
* 返回   : 0 : 失败   非零 ：成功
* 注意   :
********************************************************************/
unsigned char Brd_Nbiot_Get_Cgatt(void);

/*******************************************************************
* 函数名 : Brd_Nbiot_Get_Cereg
* 描述   : 判断是否注册到网络
* 输入   : 无
* 输出   : 无
* 返回   : 0 : 失败   非零 ：成功
* 注意   :
********************************************************************/
unsigned char Brd_Nbiot_Get_Cereg(void);

/*******************************************************************
* 函数名 : Brd_Nbiot_Get_Cscon
* 描述   : 判断是当前设备的连接状态
* 输入   : 无
* 输出   : cscon=0 : idle   1 ：connect
* 返回   : 0 : 失败   非零 ：成功
* 注意   :
********************************************************************/
unsigned char Brd_Nbiot_Get_Cscon(unsigned char *cscon);

/*******************************************************************
* 函数名 : Brd_Nbiot_Get_Cclk
* 描述   : 获取当前网络时间
* 输入   : 无
* 输出   : 时间信息"yy/MM/dd,hh:mm:ss"
* 返回   : 0 : 失败   非零 ：成功
* 注意   :
********************************************************************/
unsigned char Brd_Nbiot_Get_Cclk(void);

/*******************************************************************
* 函数名 : Brd_Nbiot_Get_Ncdp
* 描述   : 获取当前NCDP信息，IoT平台信息
* 输入   : 无
* 输出   : <ip_addr>,<port>
* 返回   : 0 : 失败   非零 ：成功
* 注意   :
********************************************************************/
unsigned char Brd_Nbiot_Get_Ncdp(char *ncdp);

/*******************************************************************
* 函数名 : Brd_Nbiot_Set_Nconfig
* 描述   : 设置模块上电自动联网
* 输入   : 无
* 输出   : 无
* 返回   : 0 : 失败   非零 ：成功
* 注意   :
********************************************************************/
unsigned char Brd_Nbiot_Set_Nconfig(void);

/*******************************************************************
* 函数名 : Brd_Nbiot_Set_Cgatt
* 描述   : 手动附网 去网操作
* 输入   : cgatt=0： 去网  1 ：附网
* 输出   : 无
* 返回   : 0 : 失败   非零 ：成功
* 注意   :
********************************************************************/
unsigned char Brd_Nbiot_Set_Cgatt(unsigned char cgatt);

/*******************************************************************
* 函数名 : Brd_Nbiot_Set_Cfun
* 描述   : 手动打开 或者 关闭 射频电路
* 输入   : cfun=0： 关闭射频  1 ：打开射频
* 输出   : 无
* 返回   : 0 : 失败   非零 ：成功
* 注意   :
********************************************************************/
unsigned char Brd_Nbiot_Set_Cfun(unsigned char cfun);

/*******************************************************************
* 函数名 : Brd_Nbiot_Set_Ncdp
* 描述   : 设置
* 输入   : ipaddr平台的IP地址  ipport平台的端口号
* 输出   : 无
* 返回   : 0 : 失败   非零 ：成功
* 注意   :
********************************************************************/
unsigned char Brd_Nbiot_Set_Ncdp(char *ip_port);

/*******************************************************************
* 函数名 : Brd_Nbiot_Crt_Nsocr
* 描述   : 创建UDP信道
* 输入   : 无
* 输出   : 无
* 返回   : 0 : 失败   非零 ：成功
* 注意   :
********************************************************************/
unsigned char Brd_Nbiot_Crt_Nsocr(void);

/*******************************************************************
* 函数名 : Brd_Nbiot_Cls_Nsocl
* 描述   : 关闭UDP信道
* 输入   : 无
* 输出   : 无
* 返回   : 0 : 失败   非零 ：成功
* 注意   :
********************************************************************/
unsigned char Brd_Nbiot_Cls_Nsocl(void);

/*******************************************************************
* 函数名 : Brd_Nbiot_Snd_Nsost
* 描述   : 通过UDP信道发送数据
* 输入   : data数据指针，len 用户数据长度
* 输出   : 无
* 返回   : 0 : 失败   非零 ：成功
* 注意   : 发送前 需要构建发送指令
********************************************************************/
unsigned char Brd_Nbiot_Snd_Nsost(char *ip_port, char * data, unsigned short len);

/*******************************************************************
* 函数名 : Brd_Nbiot_Rcv_Nsorf
* 描述   : 通过UDP信道读取数据
* 输入   : 无
* 输出   : newdata=1 读取到新数据， newdata=0已经没有数据了
* 返回   : 0 : 失败   非零 ：成功
* 注意   : 数据仍然存放在recv1_buf，没有对数据做解析
********************************************************************/
unsigned char Brd_Nbiot_Rcv_Nsorf(unsigned char *newdata);

/*******************************************************************
* 函数名 : Brd_Nbiot_Snd_Nmgs
* 描述   : 通过coap信道发送数据
* 输入   : data数据指针，len 用户数据长度
* 输出   : 无
* 返回   : 0 : 失败   非零 ：成功
* 注意   : 发送前 需要构建发送指令
********************************************************************/
unsigned char Brd_Nbiot_Snd_Nmgs(char * data, unsigned short len);

/*******************************************************************
* 函数名 : Brd_Nbiot_Rcv_Nmgr
* 描述   : 通过COAP信道读取数据
* 输入   : 无
* 输出   : newdata=1 读取到新数据， newdata=0已经没有数据了
* 返回   : 0 : 失败   非零 ：成功
* 注意   : 数据仍然存放在recv1_buf，没有对数据做解析
********************************************************************/
unsigned char Brd_Nbiot_Rcv_Nmgr(unsigned char *newdata);

/*******************************************************************
* 函数名 : delay_nms
* 描述   : 使用delay_ms函数可以用来赋值变量
* 输入   : 无
* 输出   : 无
* 返回   : 0 : 失败   非零 ：成功
* 注意   : 
********************************************************************/
void delay_nms(int n);

/*******************************************************************
* 函数名 : Nbiot_Api_Open_Network
* 描述   : 打开射频，确保NBIOT模块注册到网络
* 输入   : 无
* 输出   : 无
* 返回   : 0 : 失败   非零 ：成功
* 注意   : 确保模块注册到网络上
********************************************************************/
unsigned char Nbiot_Api_Open_Network(void);

/*******************************************************************
* 函数名 : Nbiot_Api_Close_Network
* 描述   : 注销NBIOT网络，并关闭射频功能
* 输入   : 无
* 输出   : 无
* 返回   : 0 : 失败   非零 ：成功
* 注意   : 确保模块进入最低功耗
********************************************************************/
unsigned char Nbiot_Api_Close_Network(void);

#endif /* BRD_BC95_H_ */
