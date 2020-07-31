#include "entity.h"

Entity::Entity(QObject *parent) : Object(parent)
{

}

void Entity::move(Direct direct)
{
    float x = m_location.x(), y = m_location.y(), w = m_location.width(), h = m_location.height();
    if(direct == LEFT) {
        x -= 10;
    }
    if(direct == RIGHT) {
        x += 10;
    }
    m_location.setRect(x, y, w, h);
}
