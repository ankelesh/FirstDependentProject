#include "FirstDependentProject.h"
#include "UNACommons/commonconsts.h"

FirstDependentProject::FirstDependentProject(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    ui.label->setText(ui.label->text() + QString::number(version) + " " + QString(getDescription()) + " " + 
    qtCheck());
    QObjCheck * t = new QObjCheck(5, this);
}
