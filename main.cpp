#include <QtGui/QApplication>
#include "controlview.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ControlView w;
    w.show();
    
    return a.exec();
}
