#ifndef ARC_H
#define ARC_H

#include <QObject>
#include <QGraphicsObject>
#include <QGraphicsItem>
#include "figure.h"


class Arc : public Figure
{
    Q_OBJECT
public:
    explicit Arc(QPointF point, QGraphicsObject *parent = nullptr);
    ~Arc();
private:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

};

#endif // ARC_H
