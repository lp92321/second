#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->menu_data->menuAction()->setVisible(false);
    ui->menu_designer->menuAction()->setVisible(true);
    ui->menu_train->menuAction()->setVisible(false);
    ui->toolBar_data->hide();
    ui->toolBar_designer->show();
    ui->toolBar_train->hide();

    ui->widget->show();
    ui->widget_2->show();
    ui->widget_3->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_tabWidget_tabBarClicked(int index)
{
    if(0 == index)
    {
        qDebug()<<"pag 设计器";
//        QMenu::menuAction()->setVisible(false)
        ui->menu_data->menuAction()->setVisible(false);
        ui->menu_designer->menuAction()->setVisible(true);
        ui->menu_train->menuAction()->setVisible(false);
        ui->toolBar_data->hide();
        ui->toolBar_designer->show();
        ui->toolBar_train->hide();

        ui->widget->show();
        ui->widget_2->show();
        ui->widget_3->show();
    }
    else if(1 == index)
    {
        qDebug()<<"page 数据";
        ui->menu_data->menuAction()->setVisible(true);
        ui->menu_designer->menuAction()->setVisible(false);
        ui->menu_train->menuAction()->setVisible(false);
        ui->toolBar_data->show();
        ui->toolBar_designer->hide();
        ui->toolBar_train->hide();

        ui->widget->hide();
        ui->widget_2->hide();
        ui->widget_3->hide();

    }
    else if(2 == index)
    {
        qDebug()<<"pag 训练";
        ui->menu_data->menuAction()->setVisible(false);
        ui->menu_designer->menuAction()->setVisible(false);
        ui->menu_train->menuAction()->setVisible(true);
        ui->toolBar_data->hide();
        ui->toolBar_designer->hide();
        ui->toolBar_train->show();

        ui->widget->hide();
        ui->widget_2->hide();
        ui->widget_3->hide();
    }


}

