#include "swapdata.h"

/**
* @file 		swapdata.cpp
* @brief		数据交换相关测试用例.
* @details	传值 指针 引用.
* @author		hcj
* @date		date
* @version	V001
* @par Copyright (c):
* 		chunhuitech.cn
* @par History:
*	001: hcj, date, swapdata\n
*/

SwapData::SwapData()
{
}


 void SwapData::swapData1(int a, int b)
 {
     int temp = a;
     a = b;
     b = temp;
 }
 void SwapData::swapData2(int *a, int *b)
 {
     int temp = *a;
     *a = *b;
     *b = temp;
 }

 void SwapData::swapData3(int &a, int &b)
 {
     int temp = a;
     a = b;
     b = temp;
 }
