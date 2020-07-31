#ifndef OBJECT_H
#define OBJECT_H

#include <QObject>
#include <QDebug>

#include "data.h"

class Object : public QObject
{
public:
    explicit Object(QObject *parent = nullptr);
    virtual void move(Direct direct) = 0;
    void setLocation(QRectF rect);
    QRectF getLocation();

private:
public:
    QRectF m_location;
    float m_health;
};

#endif // OBJECT_H
