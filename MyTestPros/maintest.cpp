#include "maintest.h"
#include "cbitoperation.h"
#include "swapdata.h"
#include "cmemalloc.h"

//MainTest::MainTest(QObject *parent) : QObject(parent)
//{

//}

void MainTest::shiftOper()
{

    QVERIFY(CBitOperation::Sun == 0);
    QVERIFY(CBitOperation::Mon == 1);

    QVERIFY(CBitOperation::ConnectionTypeClear == 0x00000001);
    //QVERIFY(CBitOperation::ConnectionTypeClear == 0B0001);
    QVERIFY(CBitOperation::ConnectionTypeStartTLS == 0x00000002);
    QVERIFY(CBitOperation::ConnectionTypeTLS == 0x00000004);

    CBitOperation bo;
    QVERIFY(bo.PrintEnumValue() == 1);
}


void MainTest::case1Swapdata1()
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

void MainTest::case2Memoryalloc()
{
    CMemAlloc ma;
    char *strHello = NULL;
    ma.GetMemory1(strHello, 100);
    QVERIFY(strHello == NULL);

    char *strHello1 = NULL;
    // 重新解析，暴力类型转换
    char *addr_strHello1 = reinterpret_cast<char*>(&strHello1);
    ma.GetMemory1(addr_strHello1, 100);
    QVERIFY(strHello1 == NULL);

    char *strHello2 = NULL;
    ma.GetMemory2(&strHello2, 100);
    QVERIFY(strHello2 != NULL);
    strcpy(strHello2, "Hello C++ Tips");
    delete[] strHello2;

    char *strHello3 = NULL;
    strHello3 = ma.GetMemory3(100);
    QVERIFY(strHello3 != NULL);
    strcpy(strHello3, "Hello C++ Tips");
    delete[] strHello3;
}
