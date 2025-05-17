#include "pendulumwidget.h"
#include <QtMath>

PendulumWidget::PendulumWidget(QWidget *parent)
    : QOpenGLWidget(parent)
{
    connect(&timer, &QTimer::timeout, this, QOverload<>::of(&PendulumWidget::update));
    timer.start(16); // ~60 FPS
}

void PendulumWidget::initializeGL()
{
    initializeOpenGLFunctions();
    glClearColor(1, 1, 1, 1); // Белый фон
}

void PendulumWidget::resizeGL(int w, int h)
{
    glViewport(0, 0, w, h);
}

void PendulumWidget::setPeriod(double T)
{
    if (T > 0.01) {
        period = T;
    }
}

void PendulumWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT);

    float T = 2.0f; // условный период
    float omega = 2 * M_PI / period; // period;
    time += 0.016f;
    angle = 0.3f * qSin(omega * time); // угол

    float x = 0.6f * qSin(angle);
    float y = -0.6f * qCos(angle);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glLineWidth(5.0f);
    glColor3f(0.2f, 0.2f, 0.6f);

    // маятник - линия
    glBegin(GL_LINES);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(x, y);
    glEnd();

    // груз - точка
    glPointSize(20.0f);
    glBegin(GL_POINTS);
    glVertex2f(x, y);
    glEnd();
}


