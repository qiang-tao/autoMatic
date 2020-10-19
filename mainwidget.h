#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <qcheckbox.h>
#include <QGroupBox>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>

#define testNUM 14

class mainWidget : public QWidget
{
    Q_OBJECT

public:
    mainWidget(QWidget *parent = 0);
    ~mainWidget();
private:
    QCheckBox *checkbox[testNUM];

    QGroupBox *autoProject;
    QGroupBox *resultPart;
    QGroupBox *infoPart;

    QVBoxLayout *automaticlayout;
    QVBoxLayout *resultlayout;
    QVBoxLayout *infolayout;

    QHBoxLayout *statuslayout;

    QLabel *resultlabel_1;
    QLabel *resultlabel_2;
};

#endif // MAINWIDGET_H
