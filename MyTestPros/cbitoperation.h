/**
 * @file CBitOperation.h
 * @brief:	位操作相关功能测试类
 *
 * @note
 * 该类主要包括以下功能，包括：\n
 * 1-通过移位定义枚举值\n
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
#ifndef CBITOPERATION_H
#define CBITOPERATION_H
#include <QString>

/**
 * @brief chunhuitech命名空间的简单概述
 *
 *@details 命名空间的详细概述\n
 * 1.\n
 * 2.\n
*/
namespace chunhuitech
{
    class CTest
    {
        int getTestValue();
    };
}

/*! \class CBitOperation CBitOperation.h "CBitOperation.h"
 *  \brief 位操作相关功能测试类
 *
 *  1-通过移位定义枚举值\n
 *  2-打印枚举值\n
 *
 */
class CBitOperation
{
public:
    CBitOperation();
    //! 星期枚举定义
    enum WeekEnum
    {
      Sun, /*!< 星期天 */
      Mon, /*!< 星期一 */
      Tue, /*!< 星期二 */
      Wed, /*!< 星期三 */
      Thu, /*!< 星期四 */
      Fri, /*!< 星期五 */
      Sat /*!< 星期六 */
    };
    //! 连接类型定义
    enum ConnectionType
    {
        ConnectionTypeClear        = 1 << 0,          /*!< 00000001  0x00000001  0b000000000000000000000001 */
        ConnectionTypeStartTLS     = 1 << 1,          /*!< 00000002  0x00000002  0b000000000000000000000010 */
        ConnectionTypeTLS          = 1 << 2,          /*!< 00000004  0x00000004  0b000000000000000000000100 */
        ConnectionType3          = 1 << 3,            /*!< 00000008  0x00000008  0b000000000000000000001000 */
        ConnectionType4          = 1 << 4,            /*!< 00000016  0x00000010  0b000000000000000000010000 */
        ConnectionType5         = 1 << 5,             /*!< 00000032  0x00000020  0b000000000000000000100000 */
        ConnectionType6          = 1 << 6,            /*!< 00000064  0x00000040  0b000000000000000001000000 */
        ConnectionType7          = 1 << 7,            /*!< 00000128  0x00000080  0b000000000000000010000000 */
        ConnectionType8          = 1 << 8,            /*!< 00000256  0x00000100  0b000000000000000100000000 */
        ConnectionType9          = 1 << 9,            /*!< 00000512  0x00000200  0b000000000000001000000000 */
        ConnectionType10          = 1 << 10,          /*!< 00001024  0x00000400  0b000000000000010000000000 */
        ConnectionType11          = 1 << 11,          /*!< 00002048  0x00000800  0b000000000000100000000000 */
        ConnectionType12          = 1 << 12,          /*!< 00004096  0x00001000  0b000000000001000000000000 */
        ConnectionType13          = 1 << 13,          /*!< 00008192  0x00002000  0b000000000010000000000000 */
        ConnectionType14          = 1 << 14,          /*!< 00016384  0x00004000  0b000000000100000000000000 */
        ConnectionType15          = 1 << 15,          /*!< 00032768  0x00008000  0b000000001000000000000000 */
        ConnectionType16          = 1 << 16,          /*!< 00065536  0x00010000  0b000000010000000000000000 */
        ConnectionType17          = 1 << 17,          /*!< 00131072  0x00020000  0b000000100000000000000000 */
        ConnectionType18          = 1 << 18,          /*!< 00262144  0x00040000  0b000001000000000000000000 */
        ConnectionType19          = 1 << 19,          /*!< 00524288  0x00080000  0b000010000000000000000000 */
        ConnectionType20          = 1 << 20,          /*!< 01048576  0x00100000  0b000100000000000000000000 */
        ConnectionType21          = 1 << 21,          /*!< 02097152  0x00200000  0b001000000000000000000000 */
        ConnectionType22          = 1 << 22,          /*!< 04194304  0x00400000  0b010000000000000000000000 */
        ConnectionType23          = 1 << 23,          /*!< 08388608  0x00800000  0b100000000000000000000000 */
    };


public:
    int PrintEnumValue();
    QString decTobin(int nDecimal);
    void JudgeSystem();
};

#endif // CBITOPERATION_H
