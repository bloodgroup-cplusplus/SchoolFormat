#include "widget.h"
#include "./ui_widget.h"
#include<QSqlDatabase>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    QSqlDatabase sqlite = new QSqlDatabase("SQLITE");

}

