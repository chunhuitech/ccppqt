#ifndef DEFINE
#define DEFINE

/** 自定义消息 详细描述 */
#define WM_SCSIZE    (WM_USER + 2000) ///< 改变分隔栏的位置 摘要

/**  枚举值总数量  */
const int g_contype_count = 24; ///< 枚举数量

/**
 * @brief 地址域结构体.
 *
 *@details
 * The detail description\n
 *
*/
typedef struct tagAddrField
{
    QString strName; ///<字段名
    long   lLength;  ///<字段长度
}AddrField;

#endif // DEFINE

