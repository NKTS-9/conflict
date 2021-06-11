#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

 int z=5;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_db=QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName("myDB");
    query=new QSqlQuery(m_db);
    if(!m_db.open())
        throw "cant't open database";
    if(!m_db.tables().contains("Serials"))
    {query->clear();
        query->exec("CREATE TABLE Serials(ID INTEGER PRIMARY KEY, Name VARCHAR, Year INTEGER, Rating INTEGER);");
        query->clear();
        query->exec("INSERT INTO  Serials (ID, Name, Year, Rating) VALUES (1, Lucifer, 2016, 80);");
        query->clear();
        query->exec("INSERT INTO  Serials (ID, Name, Year, Rating) VALUES (2, Sherloc, 2011, 78);");
    }
    model=new QSqlTableModel(this,m_db);
    model->setTable("Serials");
    model->select();
    model->setEditStrategy(QSqlTableModel::OnFieldChange);
    ui->tableView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete query;
    delete model;
}



void MainWindow::on_pushButtonAdd_clicked()
{  /*p.sprintf("%10.5lf",x3);
    ui->lineEdit_3->setText(p); */


   QString id=z;
    ui->lineEditID->setText(id); z++;
    if(ui->lineEditID->text().isEmpty()||ui->lineEditName->text().isEmpty()||ui->spinBoxyear->text().isEmpty()||ui->lineEditRating->text().isEmpty())
        return;
    /*id=ui->lineEditID->text();*/
    QString name=ui->lineEditName->text();
    QString year=ui->spinBoxyear->text();
    QString rating=ui->lineEditRating->text();
    QString buf=tr("INSERT INTO Serials (ID, Name, Year, Rating) VALUES (")+ id + tr (",'") + name +tr("','") + year + tr("',")+rating+tr(");");
    query->clear();
    query->exec(buf);
    model->select();
}

void MainWindow::on_pushButtonRem_clicked()
{
    if(ui->lineEditID->text().isEmpty())
        return;
    QString id=ui->lineEditID->text();
    query->clear();
    query->exec(tr("DELETE FROM Serials WHERE ID=")+id);
   model->select(); z=id;
}

void MainWindow::on_allDataViewButton_clicked()
{
    model->setFilter("");
    model->select();
    ui->tableView->setModel(model);
    QMessageBox:: information(0,tr("Action"),tr("All data"));
}

void MainWindow::on_filtrDataButton_clicked()
{
    model->setFilter("Year>2010");
    model->select();
    ui->tableView->setModel(model);
    QMessageBox:: information(0,tr("Action"),tr("Filter"));
}

void MainWindow::on_filtrData2Button_clicked()
{
    model->setFilter("Year<2011");
    model->select();
    ui->tableView->setModel(model);
}
