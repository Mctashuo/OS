#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsRectItem>
#include <QGraphicsTextItem>
#include <QMessageBox>
#include <process.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:      //槽
    void showhit();
    void on_Show_clicked();

    void on_Insert_clicked();
    void updateview();
    void firstfit(double s);    //首次适应算法
    void bestfit(double s);
    void on_Add_clicked();

private:
    Ui::MainWindow *ui;

public:
    QGraphicsScene *scene;
    QVector <QPair < double,double > > FreeSpace;
    QVector <process> AllocateSpace;
    //记录进程id号
    static int id;
};

#endif // MAINWINDOW_H
