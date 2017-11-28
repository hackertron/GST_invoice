#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newinvoice.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_Invoice_triggered()
{
    NewInvoice invoice;
    invoice.setModal(true);
    invoice.exec();
}

void MainWindow::on_NewInvoice_btn_clicked()
{
    NewInvoice invoice;
    invoice.setModal(true);
    invoice.exec();
}

void MainWindow::on_Quit_btn_clicked()
{

}
