#include "widget.h"
#include <QApplication>
#include <QTranslator>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


//    QTranslator translator;
//    bool flag = translator.load("D:/project/Qt/translator1/lang_zh.qm");
//    if(flag)
//    {
//        qDebug() << "fds";
//        a.installTranslator(&translator);
//    }

    Widget w;
    w.show();

    return a.exec();
}
