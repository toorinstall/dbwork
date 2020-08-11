#ifndef FVIEWDATA_H
#define FVIEWDATA_H

#include <QWidget>

namespace Ui {
class FViewData;
}

class FViewData : public QWidget
{
    Q_OBJECT

public:
    explicit FViewData(QWidget *parent = 0);
    ~FViewData();

private:
    Ui::FViewData *ui;
};

#endif // FVIEWDATA_H
