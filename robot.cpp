#include "robot.h"

Robot::Robot(QObject *parent) : QObject(parent)
{
    m_health = 100;
    m_timerStep = new QTimer();
    m_isMove = false;
    m_step = 0;
    connect(m_timerStep, &QTimer::timeout, this, &Robot::slotStep);
}

void Robot::setPos(int x, int y)
{
    m_pos.setX(x);
    m_pos.setY(y);
}

bool Robot::damage(int damage)
{
    m_health -= damage;

    if(m_health <= 0) {
        return true;
    }
    else {
        return false;
    }
}

void Robot::setMove(bool move)
{
    m_isMove = move;

    if(m_isMove) {
        m_timerStep->start(250);
    }
    else {
        m_timerStep->stop();
    }
}

int Robot::getStep() const
{
    return m_step;
}

QPoint Robot::getPos() const
{
    return m_pos;
}

void Robot::slotStep()
{
    m_step = (m_step + 1) % 2;
}
