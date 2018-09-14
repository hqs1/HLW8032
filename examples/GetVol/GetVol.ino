#include "HLW8032.h"
//mega2560 examples   2560硬件例子
HLW8032 HL;

void setup()
{
	HL.begin(Serial1);   //使用硬件串口1链接HLW8032
	Serial.begin(9600);  //初始化2560的 USB串口进行输出调试信息
}

void loop()
{
	HL.SerialReadLoop();    //串口循环业务，尽可能快的执行，不应大于50ms/周期
  
	if(HL.SerialRead == 1)   
	{
		Serial.println(HL.GetVol());  //输出数据
	}
}