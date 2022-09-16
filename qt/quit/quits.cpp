#include "quits.h"
#include "ui_quits.h"

quits::quits(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::quits)
{
    ui->setupUi(this);
}

quits::~quits()
{
    delete ui;
}

