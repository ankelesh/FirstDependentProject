#include "FirstDependentProject.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FirstDependentProject w;
    w.show();
    return a.exec();
}
