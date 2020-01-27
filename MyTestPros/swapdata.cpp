#include "swapdata.h"

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
