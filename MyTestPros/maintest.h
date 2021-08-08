#ifndef BITTEST_H
#define BITTEST_H

#include <QObject>
#include <QtTest/QtTest>

class MainTest : public QObject
{
    Q_OBJECT
//public:
//    explicit MainTest(QObject *parent = 0);

//signals:

private slots:


   /**@name 内存操作组
   * @brief 内存分配、数据交换等
   * @{
   */
    void case1Swapdata1();
    void case2Memoryalloc();
    /** @} 内存操作组 */

    /**@name 位操作组
    * @brief 移位定义枚举值
    * @{
    */
    void shiftOper();
    /** @} 内存操作组 */

    //测试Unicode编码规则
    void unicodeTest();

};

#endif // BITTEST_H
