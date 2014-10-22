#include "testobject.h"
#include <QDebug>

TestObject::TestObject(QObject *parent) :
    QObject(parent)
{
}

void TestObject::setVariant(const QVariant &value)
{
    qDebug() << value.type();
}
