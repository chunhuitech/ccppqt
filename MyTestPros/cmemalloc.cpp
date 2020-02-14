#include "cmemalloc.h"

/*!
 *  \file      CMemAlloc.cpp
 *  \brief     内存操作相关类.
 *  \details   测试内存相关的操作.
 *  \author    hechengjin
 *  \version   0.0.1
 *  \date      2020-2026
 *  \pre       First initialize the system.
 *  \warning   仅用于测试
 *  \copyright GNU Public License.
 */

CMemAlloc::CMemAlloc()
{

}

void CMemAlloc::GetMemory1(char *pStr, int num)
{
    pStr = new char[num];
}

void CMemAlloc::GetMemory2(char **pStr, int num)
{
    *pStr = new char[num];
}

char *CMemAlloc::GetMemory3(int num)
{
    char *p = new char[num];
    return p;
}
