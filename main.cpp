#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Some comment
    // last comment

    qDebug() << "Git with Qt is a pain in the arse";
    qDebug() << "multithreading forever";

    return a.exec();
}
