#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setPeriod(double T);


private slots:
    void on_pushButton_calc_clicked();  // ← обязательно

private:
    Ui::MainWindow *ui;
    double period = 2.0;
};

#endif // MAINWINDOW_H
