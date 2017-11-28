#ifndef NEWINVOICE_H
#define NEWINVOICE_H

#include <QDialog>

namespace Ui {
class NewInvoice;
}

class NewInvoice : public QDialog
{
    Q_OBJECT

public:
    explicit NewInvoice(QWidget *parent = 0);
    ~NewInvoice();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::NewInvoice *ui;
};

#endif // NEWINVOICE_H
