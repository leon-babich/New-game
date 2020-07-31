#ifndef DATA_H
#define DATA_H
#include <QRectF>

const qreal P = 3.14159265;

enum TypeEntity { HUMAN, BOT };
enum TypeObject { STONE, WOOD };
enum TypeAttack { CLOSE, DISTANT };
enum Direct { LEFT, RIGHT, DOWN, UP };

struct EntityStruct
{
    TypeEntity typeEntity;
    TypeAttack typeAttack;
    QRect contour;
    float life;
    float speed;
    float damage;
    float attackSpeed;
};

struct ObjectStruct
{
    TypeObject typeObject;
    QRect contour;
    float life;
    bool destructibility;
};

#endif // DATA_H
