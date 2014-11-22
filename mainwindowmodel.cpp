#include "mainwindowmodel.h"

MainWindowModel::MainWindowModel(QObject *parent) :
    QObject(parent)
{
}

QString MainWindowModel::text()
{
    return QString("some text");
}
