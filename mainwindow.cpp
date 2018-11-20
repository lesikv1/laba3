#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QString>

using namespace std;

QString arrData[2] = {"lesik", "onufriev"};
QString showData = arrData[0] + "\n" + arrData[1];
QString threeLeft;
QString threeRight;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked() {
    qDebug() << ui->lineEdit->text();
    QString stri = ui->lineEdit->text();
    qDebug() << showData;
    qDebug() << stri;
    qDebug() << showData.indexOf(stri);
    if(showData.indexOf(stri) != -1) {
        threeLeft += QString('\n') + ui->lineEdit->text();
        ui->listLeft->setText(threeLeft);
    } else {
        threeRight += QString('\n') + ui->lineEdit->text();
        ui->listRight->setText(threeRight);
    }


}

void MainWindow::on_pushButton_3_clicked() {
    ui->data->setText(showData);
}

void MainWindow::on_pushButton_clicked()
{
    qDebug() << ui->lineEdit->text();
    showData += QString('\n') + ui->lineEdit->text();
}
