#ifndef LAHJOITUS_H
#define LAHJOITUS_H

#include <QDialog>

namespace Ui {
class lahjoitus;
}

class lahjoitus : public QDialog
{
    Q_OBJECT

public:
    explicit lahjoitus(QWidget *parent = nullptr);
    ~lahjoitus();

private:
    Ui::lahjoitus *ui;
};

#endif // LAHJOITUS_H
