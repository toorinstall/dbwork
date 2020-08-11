#include "fmainwindow.h"
#include "ui_fmainwindow.h"

FMainWindow::FMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FMainWindow)
{
    ui->setupUi(this);
    connect(ui->pbLoadCode, SIGNAL(clicked()), this, SLOT(sltInitCode()));
    connect(ui->pbLoadIntoDB, SIGNAL(clicked(bool)), this, SLOT(sltLoadIntoDB()));
}

void FMainWindow::sltInitCode()
{
    res = false;

    QString filePath;

    CodeBuilder codeBuilder;

    filePath = QFileDialog::getOpenFileName(0, QString::fromUtf8("Загрузить текст в БД"), "/", "*.c *.cpp *.h");

    code = Director::instance()->create(codeBuilder);

    res = code->InitCode(filePath);
}

void FMainWindow::sltLoadIntoDB()
{
    res = code->SendToDB();
}

FMainWindow::~FMainWindow()
{
    delete ui;
}
