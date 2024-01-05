#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_tabWidget_tabBarClicked(int index)
{
//     ui->menu_data->hide();
//     ui->menu_2->hide();
     ui->menu_data->hideTearOffMenu();
     ui->menu_2->hideTearOffMenu();
}

