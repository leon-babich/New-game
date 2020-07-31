#ifndef HUMAN_H
#define HUMAN_H

#include "entity.h"

class Human : public Entity
{
    Q_OBJECT
public:
    Human(QObject *parent = nullptr);
//    void move(Direct direct);
};

#endif // HUMAN_H
