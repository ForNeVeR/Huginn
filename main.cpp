#include <QApplication>
#include <QQml.h>
#include <QQmlApplicationEngine>

#include "mainwindowmodel.h"

void registerTypes()
{
    qmlRegisterType<MainWindowModel>("Huginn", 1, 0, "MainWindowModel");
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QQmlApplicationEngine engine;

    registerTypes();

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
