#ifndef ROBOT_H
#define ROBOT_H

#include <QObject>
#include <QPoint>
#include <QTimer>

class Robot : public QObject
{
    Q_OBJECT

public:
    explicit Robot(QObject *parent = nullptr);
    void setPos(int x, int y);
    bool damage(int damage);
    void setMove(bool move);
    int getStep() const;
    QPoint getPos() const;

public slots:
    void slotStep();

private:
    QPoint m_pos;
    short m_health;
    int m_step;
    bool m_isMove;
    QTimer *m_timerStep;
};

#endif // ROBOT_H
