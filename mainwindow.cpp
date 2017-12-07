#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->la->setText("Address \t Size \n");
    showhit();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::showhit()
{
    QBrush a(Qt::blue);
    QBrush b(Qt::green);
    QBrush c(Qt::red);
    QGraphicsRectItem *l1 = new QGraphicsRectItem();
    QGraphicsRectItem *l2= new QGraphicsRectItem();
    QGraphicsRectItem *l3 = new QGraphicsRectItem();
    QGraphicsTextItem *p1  = new QGraphicsTextItem();
    QGraphicsTextItem *p2  = new QGraphicsTextItem();
    QGraphicsTextItem *p3  = new QGraphicsTextItem();
    p1->setPos(15,0-5);
    p2->setPos(15,15-5);
    p3->setPos(15,30-5);
    p1->setPlainText("blocked");
    p2->setPlainText("process");
    p3->setPlainText("free holes");
    l1->setRect(0,0,10,10);
    l1->setBrush(a);
    l2->setRect(0,15,10,10);
    l2->setBrush(b);
    l3->setRect(0,30,10,10);
    l3->setBrush(c);
    QGraphicsScene *s=new QGraphicsScene();
    ui->hit->setScene(s);
    s->addItem(l1);
    s->addItem(l2);
    s->addItem(l3);
    s->addItem(p1);
    s->addItem(p2);
    s->addItem(p3);
}
void MainWindow::on_Show_clicked()
{

}


void MainWindow::on_Insert_clicked()
{
    //设置内存地址和大小
    double add= ui->memoryAddress->text().toDouble();
    double siz = ui->memorySize->text().toDouble();
    //内存加入空闲区
    FreeSpace.push_back(qMakePair(add,siz));
    //设置文字
    QString temp = ui->la->text();
    temp.append(ui->memoryAddress->text()+"\t"+ui->memorySize->text()+"\n");
    ui->la->setText(temp);
    ui->memoryAddress->setText("");
    ui->memorySize->setText("");
}
