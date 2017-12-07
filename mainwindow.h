#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsRectItem>
#include <QGraphicsTextItem>
#include <QMessageBox>
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

private:
    Ui::MainWindow *ui;

public:
    QGraphicsScene *scene;
    QVector <QPair < double,double > > FreeSpace;
};

#endif // MAINWINDOW_H
