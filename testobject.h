#ifndef TESTOBJECT_H
#define TESTOBJECT_H

#include <QObject>

class TestObject : public QObject
{
    Q_OBJECT
public:
    explicit TestObject(QObject *parent = 0);


signals:

public slots:
    void setVariant(const QVariant &value);

};

#endif // TESTOBJECT_H
