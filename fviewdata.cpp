#include "fviewdata.h"
#include "ui_fviewdata.h"

FViewData::FViewData(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FViewData)
{
    ui->setupUi(this);
}

FViewData::~FViewData()
{
    delete ui;
}
