#ifndef PAAVALIKKO_H
#define PAAVALIKKO_H

#include <QDialog>

namespace Ui {
class paaValikko;
}

class paaValikko : public QDialog
{
    Q_OBJECT

public:
    explicit paaValikko(QWidget *parent = nullptr);
    ~paaValikko();

private:
    Ui::paaValikko *ui;
};

#endif // PAAVALIKKO_H
