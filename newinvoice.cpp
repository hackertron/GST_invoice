#include "newinvoice.h"
#include "ui_newinvoice.h"

NewInvoice::NewInvoice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewInvoice)
{
    ui->setupUi(this);
}

NewInvoice::~NewInvoice()
{
    delete ui;
}

void NewInvoice::on_buttonBox_accepted()
{
    if(ui->GSTIN_in->text().isEmpty() || ui->Name_in->text().isEmpty() || ui->Address_in->text().isEmpty() || ui->Serial_in->text().isEmpty()
            || ui->dateTimeEdit->text().isEmpty())
    {

    }
}
