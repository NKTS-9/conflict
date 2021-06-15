#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtSql>
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
    void on_pushButtonAdd_clicked();

    void on_pushButtonRem_clicked();

    void on_allDataViewButton_clicked();

    void on_filtrDataButton_clicked();

    void on_filtrData2Button_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase m_db;
    QSqlQuery* query;
    QSqlTableModel* model;
};

#endif // MAINWINDOW_H
