#ifndef MAINWINDOWMODEL_H
#define MAINWINDOWMODEL_H

#include <QObject>

class MainWindowModel : public QObject
{
    Q_OBJECT

public:
    explicit MainWindowModel(QObject *parent = 0);

    Q_PROPERTY(QString directory READ directory WRITE setDirectory NOTIFY directoryChanged)
    QString directory();

    Q_INVOKABLE void changeDirectory();

private:
    QString _directory;

    void setDirectory(QString directory);

signals:
    void directoryChanged();

public slots:

};

#endif // MAINWINDOWMODEL_H
