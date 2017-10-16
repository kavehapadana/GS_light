#include "controlview.h"
#include "ui_controlview.h"

ControlView::ControlView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ControlView)
{
    ui->setupUi(this);
}

ControlView::~ControlView()
{
    delete ui;
}
