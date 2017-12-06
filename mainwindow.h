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
    
private slots:
    void showhit();
    void on_Show_clicked();

private:
    Ui::MainWindow *ui;

public:
    QGraphicsScene *scene;
};

#endif // MAINWINDOW_H
