#include "mainwindowmodel.h"
#include <QDebug>
#include <QFileDialog>

MainWindowModel::MainWindowModel(QObject *parent) :
    QObject(parent)
{
}

QString MainWindowModel::directory()
{
    return _directory;
}

void MainWindowModel::setDirectory(QString directory)
{
    _directory = directory;
    qDebug() << "Directory" << directory;
}

void MainWindowModel::changeDirectory()
{
    auto directory = QFileDialog::getExistingDirectory(nullptr, tr("Select directory"));
    if (directory != QString::null)
    {
        setDirectory(directory);
    }
}
