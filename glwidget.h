#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QWidget>
#include <QOpenGLWidget>
#include <QKeyEvent>
#include <math.h>
#include <QDebug>
#include <vector>
#include <QShortcut>

#include "human.h"

using std::vector;

struct Pointer
{
    float x = 0;
    float y = 0;
};

class GlWidget : public QOpenGLWidget
{
    Q_OBJECT

public:
    GlWidget(QWidget *parent = nullptr);
    ~GlWidget();
    void keyPressEvent(QKeyEvent *ev);

protected:
    virtual void initializedGL();
    virtual void resizeGL(int w, int h);
    virtual void paintGL();

private:
    void drawHuman();
    void drawArc(QPoint center, float radius, float startAngle, float angle);
    void drawArc2(float x1, float y1, float x2, float y2, float radius, bool convex);
    void drawCircle(float xCen, float yCen, float radius);
    void paintCircle(float xCen, float yCen, float radius);
    void drawEllipse(float xC, float yC, float rx, float ry);
    void paintEllipse(float xC, float yC, float rx, float ry);
    void paintHalfEllipse(float xC, float yC, float rx, float ry, int part);
    void paintSectorEllipse(float xC, float yC, float rx, float ry, float st, float fin);
    void paintRotateEllipse(float xC, float yC, float rx, float ry, float angle);
    void makeRasterFont();
    void printString(const char* s);

private:
    Human *m_human;
    GLuint fontOffset;
    QShortcut *keySwitchBack;
    QShortcut *keySwitchFoward;
    float m_widthWord;
    float m_heightWord;
    float m_yGround;
};
#endif // GLWIDGET_H
