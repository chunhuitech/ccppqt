#include "pointertest.h"
#include "swapdata.h"
void PointerTest::case1_swapData1()
{
    SwapData sd;
    int a = 10;
    int b = 20;
    sd.swapData1(a, b);
    QVERIFY(a == 10 && b == 20);

    a = 10;
    b = 20;
    sd.swapData2(&a, &b);
    QVERIFY(a == 20 && b == 10);

    a = 10;
    b = 20;
    sd.swapData2(&a, &b);
    QVERIFY(a == 20 && b == 10);
}

