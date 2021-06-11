#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "math.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->one,SIGNAL(clicked()),this,SLOT(number()));
    connect(ui->two,SIGNAL(clicked()),this,SLOT(number()));
    connect(ui->three,SIGNAL(clicked()),this,SLOT(number()));
    connect(ui->for_2,SIGNAL(clicked()),this,SLOT(number()));
    connect(ui->five,SIGNAL(clicked()),this,SLOT(number()));
    connect(ui->six,SIGNAL(clicked()),this,SLOT(number()));
    connect(ui->seven,SIGNAL(clicked()),this,SLOT(number()));
    connect(ui->eght,SIGNAL(clicked()),this,SLOT(number()));
    connect(ui->nine,SIGNAL(clicked()),this,SLOT(number()));
     connect(ui->zero,SIGNAL(clicked()),this,SLOT(number()));
    ui->pushButton_d->setCheckable(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_plus_clicked()
{
    QString g;
    double x1,x2,x3;
    x1=ui->lineEdit->text().toDouble();
    x2=ui->lineEdit_2->text().toDouble();
    x3=x1+x2;
    g.sprintf("%10.5lf",x3);
    ui->lineEdit_3->setText(g);

}

void MainWindow::on_pushButton_minus_clicked()
{
    QString s;
    double x1,x2,x3;
    x1=ui->lineEdit->text().toDouble();
    x2=ui->lineEdit_2->text().toDouble();
    x3=x1-x2;
    s.sprintf("%10.5lf",x3);
    ui->lineEdit_3->setText(s);
}



void MainWindow::on_pushButton_mult_clicked()
{
    QString m;
    double x1,x2,x3;
    x1=ui->lineEdit->text().toDouble();
    x2=ui->lineEdit_2->text().toDouble();
    x3=x1*x2;
    m.sprintf("%10.5lf",x3);
    ui->lineEdit_3->setText(m);
}


void MainWindow::on_pushButton_del_clicked()
{
    QString u;
    float x1,x2,x3;
    x1=ui->lineEdit->text().toDouble();
    x2=ui->lineEdit_2->text().toDouble();
    x3=x1/x2;
    u.sprintf("%10.5lf",x3);
    ui->lineEdit_3->setText(u);

}

void MainWindow::on_pushButton_step_clicked()
{
    QString a;
    double x1,x2,x3;
    x1=ui->lineEdit->text().toDouble();
    x2=ui->lineEdit_2->text().toDouble();
    x3=pow(x1,x2);
    a.sprintf("%10.5lf",x3);
    ui->lineEdit_3->setText(a);
}

void MainWindow::on_pushButton_tg_clicked()
{
    QString p;
    double x1,x2,x3;
    x1=ui->lineEdit->text().toDouble();
    x2=ui->lineEdit_2->text().toDouble();
    x3=tan(x1);
    p.sprintf("%10.5lf",x3);
    ui->lineEdit_3->setText(p);
}

void MainWindow::on_pushButton_kor_clicked()
{
    QString m;
    double x1,x2,x3;
    x1=ui->lineEdit->text().toDouble();
    x2=ui->lineEdit_2->text().toDouble();
    x3=pow(x1,1/x2);
    m.sprintf("%10.5lf",x3);
    ui->lineEdit_3->setText(m);
}

void MainWindow::on_pushButton_fakt_clicked()
{
    QString p;
    double x1,x2,x3;
    x1=ui->lineEdit->text().toDouble();
    x2=ui->lineEdit_2->text().toDouble();
    x3=1;
    for (int i=1; i<=x1; i++) { x3=x3*i; }
    p.sprintf("%10.5lf",x3);
    ui->lineEdit_3->setText(p);
}

void MainWindow::number()
{
    QPushButton *button=(QPushButton*)sender();

    double all;
    QString n;
    QPushButton *button2=(QPushButton*)sender();

    double all2;
    QString n2;


    if(ui->pushButton_d->isChecked())
    {
        all2=(ui->lineEdit_2->text()+button2->text()).toDouble();
        n2=QString::number(all2, 'g', 10);
        ui->lineEdit_2->setText(n2);
    }
    else { all=(ui->lineEdit->text()+button->text()).toDouble();
        n=QString::number(all, 'g', 10);
        ui->lineEdit->setText(n);  }
}


void MainWindow::on_pushButton_p_clicked()
{
    QPushButton *button=(QPushButton*)sender();

    button->setChecked(true);

    if(ui->pushButton_d->isChecked())
    {
        if(!(ui->lineEdit_2->text().contains('.')))
                    ui->lineEdit_2->setText( ui->lineEdit_2->text()+".");
    }
    else { if(!(ui->lineEdit->text().contains('.')))
            ui->lineEdit->setText( ui->lineEdit->text()+".");  }
 }


void MainWindow::on_pushButton_ac_clicked()
{
    ui->pushButton_d->setChecked(false);
     ui->lineEdit->setText( "0");
      ui->lineEdit_2->setText( "0");
}
