#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "agreement.h"
#include "instruction.h"
#include "scl_90.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("SCL-90测评入口");
    ui->Enter->setEnabled(0);
    ui->checkBox->setEnabled(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Agreement_clicked()
{
    Agreement* agr = new Agreement(this);
    agr->setWindowTitle("用户使用协议");
    if(agr->exec() == QDialog::Accepted)
    {
        ui->checkBox->setEnabled(1);
    }
    delete agr;
}


void MainWindow::on_ins_clicked()
{
    Instruction* i = new Instruction(this);
    i->setWindowTitle("量表简介");
    if(i->exec() == QDialog::Accepted)
    {

    }
    delete i;
}


void MainWindow::on_checkBox_stateChanged(int arg1)
{
    ui->Enter->setEnabled(arg1);
}


void MainWindow::on_Enter_clicked()
{
    SCL_90* s = new SCL_90(this);
    s->setWindowTitle("测试");
    if(s->exec() == QDialog::Accepted)
    {
        QMessageBox::information(this,"提示","感谢您的使用！您现在可以关闭程序了。祝顺遂！");
    }
    delete s;
}

