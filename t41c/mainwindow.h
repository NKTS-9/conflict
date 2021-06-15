#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

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
    void on_pushButton_plus_clicked();

    void on_pushButton_minus_clicked();

    void on_pushButton_mult_clicked();

    void on_pushButton_del_clicked();

    void on_pushButton_step_clicked();

    void on_pushButton_tg_clicked();

    void on_pushButton_kor_clicked();

    void on_pushButton_fakt_clicked();

   void number();
   void on_pushButton_p_clicked();

   void on_pushButton_ac_clicked();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
