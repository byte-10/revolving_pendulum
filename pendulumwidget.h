#ifndef PENDULUMWIDGET_H
#define PENDULUMWIDGET_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QTimer>

class PendulumWidget : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT

public:
    explicit PendulumWidget(QWidget *parent = nullptr);
    void setPeriod(double T);

protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;


private:
    QTimer timer;
    float angle = 0.0f;
    float time = 0.0f;
    double period = 2.0;
};

#endif // PENDULUMWIDGET_H
