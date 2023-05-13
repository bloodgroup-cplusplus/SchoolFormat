#include "widget.h"
#include "./ui_widget.h"
#include<QSqlDatabase>
#include<iostream>

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
    QSqlDatabase sqlite = new QSqlDatabase("QSQLITE");
    sqlitedb.setDatabaseName("/bhushansharma/Downloads/mydb");
    if(!sqlitedb.open())
    {
        std::cout<<"Database is not connected "<<std::endl;
        // if you have a label on your ui 
        ui->label-setText("database is not connected");
    }
    else
    {
        std::cout<<"Database is connected "<<std::endl;
        // if you have a label field on your ui 
        ui->label->setText("database is connected ");
    }

}

