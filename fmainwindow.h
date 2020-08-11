#ifndef FMAINWINDOW_H
#define FMAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QString>
#include <thread>

#include <codebuilder.h>
#include <director.h>
#include <ccode.h>

namespace Ui {
class FMainWindow;
}

class FMainWindow : public QMainWindow
{
    Q_OBJECT

private slots:
    void sltInitCode();
    void sltLoadIntoDB();

public:
    explicit FMainWindow(QWidget *parent = 0);

    ~FMainWindow();

private:
    bool res;
    Ui::FMainWindow *ui;

    CCode* code;
};

#endif // FMAINWINDOW_H
