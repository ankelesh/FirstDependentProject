#pragma once

#include <QtWidgets/QWidget>
#include "ui_FirstDependentProject.h"

class FirstDependentProject : public QWidget
{
    Q_OBJECT

public:
    FirstDependentProject(QWidget *parent = Q_NULLPTR);

private:
    Ui::FirstDependentProjectClass ui;
};
