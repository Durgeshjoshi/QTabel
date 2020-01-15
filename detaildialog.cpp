#include "detaildialog.h"
#include "ui_detaildialog.h"
#include <QDebug>

DetailDialog::DetailDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DetailDialog)
{
    ui->setupUi(this);
}

DetailDialog::~DetailDialog()
{
    delete ui;
}


void DetailDialog::on_pushButton_OK_clicked()
{
    qDebug()<<"Ok button is called\n";
    m_emloyeDetails.setName(ui->lineEdit_name->text());
    m_emloyeDetails.setAge(ui->lineEdit_Age->text());
    m_emloyeDetails.setSalary(ui->lineEdit_Salary->text());
    accept();
}

void DetailDialog::on_pushButton_Cancel_clicked()
{
    reject();
}
