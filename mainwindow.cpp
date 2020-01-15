#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStringList>
#include <QTableWidget>
#include <detaildialog.h>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QStringList list {"Name","Age","Salary"};
    ui->tableWidget->setColumnCount(list.size());
    ui->tableWidget->setHorizontalHeaderLabels(list);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionOpen_triggered()
{

}

void MainWindow::on_actionSave_As_triggered()
{

}

void MainWindow::on_actionRemove_triggered()
{

}

void MainWindow::on_actionAdd_triggered()
{
    qDebug()<<"Line"<<__LINE__;
    d = new DetailDialog;
    qDebug()<<"Line"<<__LINE__;
    //d->setModal(true);
    d->show();
    /*if(d.exec() == QDialog::Rejected)
    {
        qDebug()<<"Line"<<__LINE__;
        return;
    }*/
    qDebug()<<"Line"<<__LINE__;
    Employee(d->getEmpluObect());
}

void MainWindow::on_actionEleminte_triggered()
{
    ui->tableWidget->removeRow(ui->tableWidget->currentRow());
}

void MainWindow::Employee(const EmyDetail &emy_obj)
{
    qDebug()<<"Line"<<__LINE__;
    const int rowcount = ui->tableWidget->rowCount();
    ui->tableWidget->setItem(rowcount,ONE_COLUMN,new QTableWidgetItem(emy_obj.getName()));
    ui->tableWidget->setItem(rowcount,TWO_COLUMN,new QTableWidgetItem(emy_obj.getAge()));
    ui->tableWidget->setItem(rowcount,THREE_COLUMN,new QTableWidgetItem(emy_obj.getSalary()));
}
