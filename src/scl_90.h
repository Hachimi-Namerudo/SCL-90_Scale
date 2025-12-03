#ifndef SCL_9__H
#define SCL_9__H
#include "Question.h"
#include <QDialog>
#include <QFile>
#include<QCloseEvent>

namespace Ui {
class SCL_90;
}

class SCL_90 : public QDialog
{
    Q_OBJECT

public:
    explicit SCL_90(QWidget *parent = nullptr);
    ~SCL_90();

    Question::Dimension switcher(QString str);
    void pull(int index);
    void push(int index);
    void test(int i);
    void debug();
    void calculate();
    void closeEvent(QCloseEvent *);







    int currentPage;//幸好我早有准备！
private slots:
    void on_pushButton_3_clicked();

    void on_nextPage_clicked();

    void on_prePage_clicked();

    void on_submit_clicked();

    void on_pushButton_clicked();

private:
    Ui::SCL_90 *ui;
    QVector<Question*> questions;

    double totalScore = 0.0;
    int posCount = 0;//阳性计数
    double posScore = 0.0;//阳性得分
    QVector<int>dimScore;//维度得分
    double arg[10] = { 12,10,9,13,10,6,7,6,10,7 };

};

#endif // SCL_9__H
