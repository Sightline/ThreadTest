#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Some comment
    // last comment

    qDebug() << "Git is a pain in the arse";

    return a.exec();
}
