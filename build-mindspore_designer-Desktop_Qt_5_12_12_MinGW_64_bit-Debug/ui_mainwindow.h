/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_new;
    QAction *action_copy;
    QAction *action_load_data;
    QAction *action_big;
    QAction *action_load_data_2;
    QAction *action_start_train;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSplitter *splitter_2;
    QWidget *widget_3;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QWidget *tab_2;
    QWidget *tab_3;
    QSplitter *splitter;
    QWidget *widget;
    QWidget *widget_2;
    QStatusBar *statusbar;
    QToolBar *toolBar_designer;
    QToolBar *toolBar_data;
    QMenuBar *menubar;
    QMenu *menu_designer;
    QMenu *menu_data;
    QMenu *menu_train;
    QToolBar *toolBar_train;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(883, 606);
        action_new = new QAction(MainWindow);
        action_new->setObjectName(QString::fromUtf8("action_new"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/picture/1.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        action_new->setIcon(icon);
        action_copy = new QAction(MainWindow);
        action_copy->setObjectName(QString::fromUtf8("action_copy"));
        action_load_data = new QAction(MainWindow);
        action_load_data->setObjectName(QString::fromUtf8("action_load_data"));
        action_big = new QAction(MainWindow);
        action_big->setObjectName(QString::fromUtf8("action_big"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/picture/2.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        action_big->setIcon(icon1);
        action_big->setPriority(QAction::NormalPriority);
        action_load_data_2 = new QAction(MainWindow);
        action_load_data_2->setObjectName(QString::fromUtf8("action_load_data_2"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/picture/3.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        action_load_data_2->setIcon(icon2);
        action_start_train = new QAction(MainWindow);
        action_start_train->setObjectName(QString::fromUtf8("action_start_train"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/picture/6.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        action_start_train->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter_2 = new QSplitter(centralwidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        widget_3 = new QWidget(splitter_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        splitter_2->addWidget(widget_3);
        tabWidget = new QTabWidget(splitter_2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        tabWidget->addTab(tab1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        splitter_2->addWidget(tabWidget);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        splitter->addWidget(widget);
        widget_2 = new QWidget(splitter);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);"));
        splitter->addWidget(widget_2);
        splitter_2->addWidget(splitter);

        gridLayout->addWidget(splitter_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar_designer = new QToolBar(MainWindow);
        toolBar_designer->setObjectName(QString::fromUtf8("toolBar_designer"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolBar_designer->sizePolicy().hasHeightForWidth());
        toolBar_designer->setSizePolicy(sizePolicy);
        toolBar_designer->setMinimumSize(QSize(0, 0));
        toolBar_designer->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_designer);
        toolBar_data = new QToolBar(MainWindow);
        toolBar_data->setObjectName(QString::fromUtf8("toolBar_data"));
        toolBar_data->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_data);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 883, 23));
        menu_designer = new QMenu(menubar);
        menu_designer->setObjectName(QString::fromUtf8("menu_designer"));
        menu_data = new QMenu(menubar);
        menu_data->setObjectName(QString::fromUtf8("menu_data"));
        menu_train = new QMenu(menubar);
        menu_train->setObjectName(QString::fromUtf8("menu_train"));
        MainWindow->setMenuBar(menubar);
        toolBar_train = new QToolBar(MainWindow);
        toolBar_train->setObjectName(QString::fromUtf8("toolBar_train"));
        sizePolicy.setHeightForWidth(toolBar_train->sizePolicy().hasHeightForWidth());
        toolBar_train->setSizePolicy(sizePolicy);
        toolBar_train->setMinimumSize(QSize(0, 0));
        toolBar_train->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_train);

        toolBar_designer->addAction(action_new);
        toolBar_designer->addAction(action_big);
        toolBar_data->addAction(action_load_data_2);
        menubar->addAction(menu_designer->menuAction());
        menubar->addAction(menu_data->menuAction());
        menubar->addAction(menu_train->menuAction());
        toolBar_train->addAction(action_start_train);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        action_new->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
        action_copy->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
        action_load_data->setText(QApplication::translate("MainWindow", "\345\257\274\345\205\245\346\225\260\346\215\256", nullptr));
#ifndef QT_NO_TOOLTIP
        action_load_data->setToolTip(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\225\260\346\215\256\350\267\257\345\276\204", nullptr));
#endif // QT_NO_TOOLTIP
        action_big->setText(QApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
        action_load_data_2->setText(QApplication::translate("MainWindow", "\345\212\240\350\275\275\346\225\260\346\215\256", nullptr));
#ifndef QT_NO_TOOLTIP
        action_load_data_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\350\256\255\347\273\203\351\200\211\351\241\271</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        action_start_train->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\350\256\255\347\273\203", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("MainWindow", " \350\256\276\350\256\241\345\231\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\346\225\260\346\215\256", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", " \350\256\255\347\273\203", nullptr));
        toolBar_designer->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
        toolBar_data->setWindowTitle(QApplication::translate("MainWindow", "toolBar_2", nullptr));
        menu_designer->setTitle(QApplication::translate("MainWindow", "\350\256\276\350\256\241\345\231\250", nullptr));
        menu_data->setTitle(QApplication::translate("MainWindow", "\346\225\260\346\215\256", nullptr));
        menu_train->setTitle(QApplication::translate("MainWindow", "\350\256\255\347\273\203", nullptr));
        toolBar_train->setWindowTitle(QApplication::translate("MainWindow", "\350\256\255\347\273\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
