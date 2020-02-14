#ifndef CMEMALLOC_H
#define CMEMALLOC_H

/**
 * @class CMemAlloc CMemAlloc.h "CMemAlloc.h"
 * @brief 内存管理相关类。
 * @details
 *  内存相关的函数写到这个类里，\n
 *  方便统一进行测试\n
 *
 */

class CMemAlloc
{
public:
    //! CMemAlloc constructor.
    /*!
      默认构造函数.
    */
    CMemAlloc();

public:
    /**
     * @defgroup  建议85 了解指针参数传递内存中的玄机
     * @brief 针对函数的每个参数，编译器都要为其生成一个临时副本
     * @details GetMemory1 并没有使pStr获得期望的内存，pStr依然为NULL,\n
     * 我们分析一下参数的传递过程，从中找出问题所在：\n
     * 针对函数的每个参数，编译器都要为其生成一个临时副本,指针pStr的副本是_pStr,并且会使_pStr = pStr = 0x00000000. \n
     * 在函数体内的程序修改了_pStr的内容，也就是改变了_pStr指向的内存地址，而pStr却丝毫未变，仍旧是0x00000000.\n
     * 所以GetMemory1不能输出任何东西。不仅如此，每执行一次还会造成一次内存的泄露.\n
     * 为什么"指向指针的指针"就能实现预想的功能呢？\n
     * 实参strHello传入函数GetMemory2时，传入的是存放指针strHello的地址addr_strHello,编译器为其生成临时副本_addr_strHello,\n
     * 并且 _addr_strHello = addr_strHello = 0x000f1850(可能是任意非NULL地址).\n
     * 在函数内部，程序修改了 _addr_strHello 所指向的内存地址，因为二者都指向相同的地址，所以 addr_strHello所指向的地址也就会相应的改变。\n
     * 那么采用指针的指针这种方式就可以实现动态内存的传递了。
     */

    /**
    *@ingroup 建议85
    *@brief	错误的指针分配内存方法
    *@param pStr
    *	[in] a character pointer.
    *@param num
    *	[in] 分配空间大小
    *@return void
    *	没有返回值
    *@see GetMemory2(char **pStr, int num), GetMemory3(int num)
    */
    void GetMemory1(char *pStr, int num);

    //! GetMemory2 taking two arguments and returning void value.
    /*!
      \ingroup 建议85
      \param pStr 指向指针的指针.
      \param num an integer argument.
      \return void
      \sa GetMemory1(char *pStr, int num), GetMemory3(int num)
    */
    void GetMemory2(char **pStr, int num);


    //! GetMemory3 用返回值来传递动态内存。
    /*!
      \param num an integer argument.
      \return char*
      \sa GetMemory1(char *pStr, int num), GetMemory2(char **pStr, int num)
    */
    char *GetMemory3(int num);
};



#endif // CMEMALLOC_H
