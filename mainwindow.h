#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "newinvoice.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionNew_Invoice_triggered();

    void on_NewInvoice_btn_clicked();

    void on_Quit_btn_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
