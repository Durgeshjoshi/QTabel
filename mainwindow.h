#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "emydetail.h"
#include "detaildialog.h"
class EmyDetail;
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionOpen_triggered();

    void on_actionSave_As_triggered();

    void on_actionRemove_triggered();

    void on_actionAdd_triggered();

    void on_actionEleminte_triggered();

private:
    void Employee( const EmyDetail &    emy_obj);
    enum{
        ONE_COLUMN,
        TWO_COLUMN,
        THREE_COLUMN
    };
    DetailDialog *d;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
