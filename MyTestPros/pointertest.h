#ifndef POINTERTEST_H
#define POINTERTEST_H

#include <QObject>
#include <QtTest/QtTest>

class PointerTest : public QObject
{
    Q_OBJECT
private slots:
    void case1_swapData1();
};



#endif // POINTERTEST_H
