#include "mainwidget.h"

mainWidget::mainWidget(QWidget *parent)
    : QWidget(parent)
{
    this->setFixedSize(1024,768);

    //VBoxLayout
    automaticlayout = new QVBoxLayout(this);
    //resultlayout = new QVBoxLayout(this);
    //infolayout = new QVBoxLayout(this);

    //HBoxLayout
    //statuslayout = new QHBoxLayout(this);

    autoProject = new QGroupBox(this);
    resultPart = new QGroupBox(this);
    infoPart = new QGroupBox(this);

    autoProject->setTitle("测试项目");
    autoProject->setGeometry(10,100,400,500);
    autoProject->setFixedSize(200,500);

    resultPart->setTitle("测试结果");
    resultPart->setGeometry(10,10,400,200);
    resultPart->setFixedSize(400,200);

    for(int i=0;i<testNUM;i++)
    {
        checkbox[i] = new QCheckBox(this);
        //checkbox[i]->setGeometry(30,100+30*i,150,30);
        checkbox[i]->setFixedSize(200,30);

        automaticlayout->addWidget(checkbox[i]);
    }
    autoProject->setLayout(automaticlayout);

    checkbox[0]->setText("FPGA_LED检查");
    checkbox[1]->setText("B_IIC");
    checkbox[2]->setText("B_GPIO/销毁开关");
    checkbox[3]->setText("LANAC_1000M");
    checkbox[4]->setText("LANBA_100M");
    checkbox[5]->setText("LANBC_100M");
    checkbox[6]->setText("B_COM34(600)");
    checkbox[7]->setText("B_COM34(115200)");
    checkbox[8]->setText("BA_NAND_BUS");
    checkbox[9]->setText("AB_NAND_BUS");
    checkbox[10]->setText("BC_NAND_BUS");
    checkbox[11]->setText("CB_NAND_BUS");
    checkbox[12]->setText("A_OTG");
    checkbox[13]->setText("FPGA");

    resultlabel_1 = new QLabel("All Result:",this);
    resultlabel_1->setGeometry(30,30,100,40);


    resultlabel_2 = new QLabel("test",this);
    resultlabel_2->setGeometry(130,30,100,40);

    resultlabel_2->setStyleSheet("QLabel{background:#FF0000;}");







}

mainWidget::~mainWidget()
{

}
