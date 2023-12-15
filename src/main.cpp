#include "CZEditor.hpp"
#include <QtWidgets/QApplication>
#include "global.hpp"
#include <qpushbutton.h>

int main(int argc, char *argv[])
{
    InitGlobals();
    QApplication a(argc, argv);
    CZEditor w;
    
    return a.exec();
}