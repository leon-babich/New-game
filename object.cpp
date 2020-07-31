#include "object.h"

Object::Object(QObject *parent) : QObject(parent)
{

}

void Object::setLocation(QRectF rect)
{
    m_location = rect;
}

QRectF Object::getLocation()
{
    return m_location;
}
