#ifndef CIRCLE_H
#define CIRCLE_H


#include <QObject>
#include <QGraphicsObject>
#include <QGraphicsItem>
#include "figure.h"


class Circle : public Figure
{
    Q_OBJECT
public:
    explicit Circle(QPointF point, QGraphicsObject *parent = nullptr);
    ~Circle();
private:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

};


#endif // CIRCLE_H
