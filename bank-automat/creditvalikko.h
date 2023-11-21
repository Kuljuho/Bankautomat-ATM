#ifndef CREDITVALIKKO_H
#define CREDITVALIKKO_H

#include <QDialog>

namespace Ui {
class creditvalikko;
}

class creditvalikko : public QDialog
{
    Q_OBJECT

public:
    explicit creditvalikko(QWidget *parent = nullptr);
    ~creditvalikko();

private slots:
    void creditSlot();
    void debitSlot();

private:
    Ui::creditvalikko *ui;



};

#endif // CREDITVALIKKO_H
