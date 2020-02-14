/**
* @file CBitOperation.cpp
* @brief:	位操作相关功能测试
*
* @note
* 该类主要包括以下功能，包括：\n
* 1-通过移位定义枚举值\n
*
*
* Copyright (c) 2020 chunhuitech.cn
*
* 版权所有 (C) 2020 春晖科技
*
* @author hechengjin
* @version 1.0
* @date 2020/2/14
*
*/

#pragma warning(disable:4309)
#include "cbitoperation.h"
#include <QDebug>
#include <iostream>
#include "define.h"

CBitOperation::CBitOperation()
{

}

int CBitOperation::PrintEnumValue()
{
    qDebug("%08d  0x%08x  0b%s",ConnectionTypeClear, ConnectionTypeClear, decTobin(ConnectionTypeClear).toLatin1().data());
    qDebug("%08d  0x%08x  0b%s",ConnectionTypeStartTLS, ConnectionTypeStartTLS, decTobin(ConnectionTypeStartTLS).toLatin1().data());
    qDebug("%08d  0x%08x  0b%s",ConnectionTypeTLS, ConnectionTypeTLS, decTobin(ConnectionTypeTLS).toLatin1().data());
    qDebug("%08d  0x%08x  0b%s",ConnectionType3, ConnectionType3, decTobin(ConnectionType3).toLatin1().data());
    qDebug("%08d  0x%08x  0b%s",ConnectionType4, ConnectionType4, decTobin(ConnectionType4).toLatin1().data());
    qDebug("%08d  0x%08x  0b%s",ConnectionType5, ConnectionType5, decTobin(ConnectionType5).toLatin1().data());
    qDebug("%08d  0x%08x  0b%s",ConnectionType6, ConnectionType6, decTobin(ConnectionType6).toLatin1().data());
    qDebug("%08d  0x%08x  0b%s",ConnectionType7, ConnectionType7, decTobin(ConnectionType7).toLatin1().data());
    qDebug("%08d  0x%08x  0b%s",ConnectionType8, ConnectionType8, decTobin(ConnectionType8).toLatin1().data());
    qDebug("%08d  0x%08x  0b%s",ConnectionType9, ConnectionType9, decTobin(ConnectionType9).toLatin1().data());
    qDebug("%08d  0x%08x  0b%s",ConnectionType10, ConnectionType10, decTobin(ConnectionType10).toLatin1().data());
    qDebug("%08d  0x%08x  0b%s",ConnectionType11, ConnectionType11, decTobin(ConnectionType11).toLatin1().data());
    qDebug("%08d  0x%08x  0b%s",ConnectionType12, ConnectionType12, decTobin(ConnectionType12).toLatin1().data());
    qDebug("%08d  0x%08x  0b%s",ConnectionType13, ConnectionType13, decTobin(ConnectionType13).toLatin1().data());
    qDebug("%08d  0x%08x  0b%s",ConnectionType14, ConnectionType14, decTobin(ConnectionType14).toLatin1().data());
    qDebug("%08d  0x%08x  0b%s",ConnectionType15, ConnectionType15, decTobin(ConnectionType15).toLatin1().data());
    qDebug("%08d  0x%08x  0b%s",ConnectionType16, ConnectionType16, decTobin(ConnectionType16).toLatin1().data());
    qDebug("%08d  0x%08x  0b%s",ConnectionType17, ConnectionType17, decTobin(ConnectionType17).toLatin1().data());
    qDebug("%08d  0x%08x  0b%s",ConnectionType18, ConnectionType18, decTobin(ConnectionType18).toLatin1().data());
    qDebug("%08d  0x%08x  0b%s",ConnectionType19, ConnectionType19, decTobin(ConnectionType19).toLatin1().data());
    qDebug("%08d  0x%08x  0b%s",ConnectionType20, ConnectionType20, decTobin(ConnectionType20).toLatin1().data());
    qDebug("%08d  0x%08x  0b%s",ConnectionType21, ConnectionType21, decTobin(ConnectionType21).toLatin1().data());
    qDebug("%08d  0x%08x  0b%s",ConnectionType22, ConnectionType22, decTobin(ConnectionType22).toLatin1().data());
    qDebug("%08d  0x%08x  0b%s",ConnectionType23, ConnectionType23, decTobin(ConnectionType23).toLatin1().data());
    return 1;
}

QString CBitOperation::decTobin(int nDecimal)
{
    int nDec = nDecimal;
       int nYushu, nShang;
       QString strBin, strTemp;
       //TCHAR buf[2];
       bool bContinue = true;
       while ( bContinue )
       {
           nYushu = nDec % 2;
           nShang = nDec / 2;
           strBin=QString::number(nYushu)+strBin; //qDebug()<<strBin;
           strTemp = strBin;
           //strBin.Format("%s%s", buf, strTemp);
           nDec = nShang;
           if ( nShang == 0 )
               bContinue = false;
       }
       int nTemp = strBin.length() % 4;
       switch(nTemp)
       {
       case 1:
           //strTemp.Format(_T("000%s"), strBin);
           strTemp = "000"+strBin;
           strBin = strTemp;
           break;
       case 2:
           //strTemp.Format(_T("00%s"), strBin);
           strTemp = "00"+strBin;
           strBin = strTemp;
           break;
       case 3:
           //strTemp.Format(_T("0%s"), strBin);
           strTemp = "0"+strBin;
           strBin = strTemp;
           break;
       default:
           break;
       }
       int preCharCount = g_contype_count - strBin.length();
       for(int i = 0; i < preCharCount; i++){
           strBin = "0"+strBin;
       }
       return strBin;
}



void  CBitOperation::JudgeSystem()
{
//    int a = 0b00000001;
//    char * p = (char *)&a;

//    if (0b00000001 == *p)
//    {
//        std::cout<<"小端"<<std::endl;
//    }
//    else
//    {
//        std::cout<<"大端"<<std::endl;
//    }
}

int chunhuitech::CTest::getTestValue()
{
    return 0;
}
