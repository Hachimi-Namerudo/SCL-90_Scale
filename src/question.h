#ifndef QUESTION_H
#define QUESTION_H

#include <QObject>
#include <QWidget>
#include <QButtonGroup>
#include <QRadioButton>

class Question
{


public:

    Question();
    enum Dimension
    {
        Default = 0,
        Somatization,        // 1. 躯体化（共12题）
        Obsessive,           // 2. 强迫症状（共10题）
        Interpersonal,       // 3. 人际关系敏感（共9题）
        Depression,          // 4. 抑郁（共13题）
        Anxiety,             // 5. 焦虑（共10题）
        Hostility,           // 6. 敌对（共6题）
        Phobic,       // 7. 恐怖（共7题）
        Paranoid,            // 8. 偏执（共6题）
        Psychotic,        // 9. 精神病性（共10题）
        Additional           // 10. 附加题（共7题，用于反映睡眠、饮食等情况）
    };

    QString description;//本题描述内容
    Dimension dimension;//本题归属维度
    int score;//本题得分

    // void setDimension(int i);
    // void setDescr(QString str);
    ~Question();
};

#endif // QUESTION_H
