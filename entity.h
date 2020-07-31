#ifndef ENTITY_H
#define ENTITY_H

#include "object.h"

class Entity : public Object
{
    Q_OBJECT
public:
    Entity(QObject *parent = nullptr);
    void move(Direct direct);

private:
    TypeEntity m_typeEntity;
    TypeAttack m_typeAttack;

    float m_speed;
    float m_damage;
    float m_attackSpeed;
};

#endif // ENTITY_H
