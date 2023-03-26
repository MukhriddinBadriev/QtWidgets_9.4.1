#include "mainwindow.h"
#include "./ui_mainwindow.h"

int a=0;
int max_VPB=10;
int min_VPB=0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->radioButton->setText("Радиокнопка 1");
    ui->radioButton_2->setText("Радиокнопка 2");

    for(int i=-0;i<5;i++){
        ui->comboBox->addItem("Элемент "+ QString::number(i));
    }

    ui->pushButton->setText("Кнопка для прогресс бара");
    //ui->pushButton->setC(true);



    ui->progressBar->setMaximum(max_VPB);
    ui->progressBar->setMinimum(min_VPB);
    ui->progressBar->value();
    ui->progressBar->setValue(0);
    ui->progressBar->setFormat("%p%");


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if(a==max_VPB)a=min_VPB;
    a++;
    ui->progressBar->setValue(a);

}

