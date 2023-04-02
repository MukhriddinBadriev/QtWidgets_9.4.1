#include "mainwindow.h"
#include "./ui_mainwindow.h"

#define MAX_VPB 10
#define MIN_VPB 0

 int a=0;

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



    ui->progressBar->setMaximum(MAX_VPB);
    ui->progressBar->setMinimum(MIN_VPB);
    ui->progressBar->value();
    ui->progressBar->setValue(0);
    ui->progressBar->setFormat("%p%");


}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_toggled(bool checked)
{
    a++;
    if( a>MAX_VPB) a=MIN_VPB;

    ui->progressBar->setValue(a);

}

