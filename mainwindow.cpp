#include "mainwindow.h"// ← ОБЯЗАТЕЛЬНО
#include "pendulumwidget.h"
#include "ui_mainwindow.h"
#include <cmath>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_calc_clicked()
{
    bool ok;
    double T1 = ui->lineEdit_T1->text().toDouble(&ok);
    double T2 = ui->lineEdit_T2->text().toDouble(&ok);
    double a1 = ui->lineEdit_a1->text().toDouble(&ok);
    double a2 = ui->lineEdit_a2->text().toDouble(&ok);

    const double pi = 3.141592653589793;

    if (a2 == a1) {
        ui->label_result->setText("Ошибка: a1 = a2");
        return;
    }

    double g = (4 * pi * pi * (T2*T2*a1 - T1*T1*a2)) / (a2 - a1);
    QString result = QString("g ≈ %1 м/с²").arg(g, 0, 'f', 4);
    ui->label_result->setText(result);

    // передаём T1 в маятник
    ui->openGLView->setPeriod(T1); // openGLView — имя виджета из .ui
}


