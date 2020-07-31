#include "human.h"

Human::Human(QObject *parent) : Entity(parent)
{

}

//void Human::move(Direct direct)
//{
//    QString str;
//    int chose = (int)direct;
//    switch (chose) {
//    case 0:
//        str = "Left"; break;
//    case 1:
//        str = "Right"; break;
//    case 2:
//        str = "Down"; break;
//    case 3:
//        str = "Up"; break;
//    default:
//        break;
//    }
//    qDebug()<<str;
//}
