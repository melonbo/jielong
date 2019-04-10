#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QDebug>
#include <QStringList>
#include <QTextCodec>
#include "chineseletterhelper.h"

QStringList list;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GBK"));
    ui->setupUi(this);
    list.clear();
    qDebug()<<"start ... ...";
    QFile file("chengyu.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    while (!file.atEnd())
    {
        QByteArray line = file.readLine();
        if(line.size()>3)
        {
            QString str(line);
            str = str.trimmed();
            list.append(str);
        }
    }

    for(int i = 0; i< list.size();++i)
    {
        QString tmp = list.at(i);
//        qDebug()<<"tmp ="<< tmp.size();
    }

    qDebug()<<"xxxxxx "<<list.size();
    file.close();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_button_clicked()
{
    QString input=ui->textEdit_input->toPlainText();
//    qDebug()<<input;
    if(ChineseLetterHelper::GetFirstLetter(input).size()==0)
        return;

    int size = list.size();
    qDebug()<<size;

    for(int i=0;i<size;i++)
    {
        QString tmp = list.at(i);
        QString tmp_pinyin = ChineseLetterHelper::GetPinyins(tmp);
        QString input_pinyin = ChineseLetterHelper::GetPinyins(input);

        if(operator==(input.at(input.size()-1), tmp.at(0)))
        {
            ui->textEdit_input->setText(list.at(i).toLocal8Bit());
            ui->label_pinyin->setText(tmp_pinyin);
            QString pinyin = ChineseLetterHelper::GetPinyins(list.at(i));
            qDebug()<<pinyin;
            list.removeAt(i);
            return;
        }


    }

    for(int i=0;i<size;i++)
    {
        QString tmp = list.at(i);
        QString tmp_pinyin = ChineseLetterHelper::GetPinyins(tmp);
        QString input_pinyin = ChineseLetterHelper::GetPinyins(input);
        QStringList tmp_list = tmp_pinyin.split("'");
        QStringList input_list = input_pinyin.split("'");

        if(input_list.at(input_list.size()-2) == tmp_list.at(0))
        {
            qDebug()<<"input:"<<input<<input_pinyin<<input_list.size();
            qDebug()<<"tmp:"<<tmp<<tmp_pinyin<<tmp_list.size();
            qDebug()<<input_list.at(input_list.size()-2)<<"   "<<tmp_list.at(0);
            ui->textEdit_input->setText(list.at(i).toLocal8Bit());
            ui->label_pinyin->setText(tmp_pinyin);
            list.removeAt(i);
            return;
        }
    }

}

void MainWindow::on_pushButton_exit_clicked()
{
    exit(0);
}
