#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

    void on_pushButtonlogin_clicked();

    void on_pushButtoncreate_clicked();

    void on_pushButtonconfirm_clicked();

    void on_pushButtonok_clicked();

    void on_pushButtonback_e_clicked();

    void on_pushButtonok_e_clicked();


    void on_pushButtonadd_clicked();

    void on_pushButtonadde_clicked();

    void on_pushButtonaddi_clicked();

    void on_pushButtoncancel_clicked();

    void on_pushButtongback_in_clicked();

    void on_pushButtonok_in_clicked();

    void on_pushButtonsignup_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
