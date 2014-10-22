#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQml>
#include "testobject.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    qmlRegisterType<TestObject>("MyTest", 1, 0, "TestObject");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
