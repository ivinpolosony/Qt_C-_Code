#include <QCoreApplication>
#include <iostream>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() << "hello beautiful world!" << endl << endl;
    return 0;
//    return a.exec();
}

