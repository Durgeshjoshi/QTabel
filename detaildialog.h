#ifndef DETAILDIALOG_H
#define DETAILDIALOG_H

#include <QDialog>
#include "emydetail.h"
namespace Ui {
class DetailDialog;
}

class DetailDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DetailDialog(QWidget *parent = nullptr);
    EmyDetail getEmpluObect() const {
        return m_emloyeDetails;
    }
    ~DetailDialog();

private slots:

    void on_pushButton_OK_clicked();
    void on_pushButton_Cancel_clicked();

private:
    Ui::DetailDialog *ui;
    EmyDetail m_emloyeDetails;

};

#endif // DETAILDIALOG_H
