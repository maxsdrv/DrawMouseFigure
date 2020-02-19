#ifndef LINE_H
#define LINE_H


#include <QObject>
#include <QGraphicsObject>
#include <QGraphicsItem>
#include "figure.h"


class Line : public Figure
{
    Q_OBJECT
public:
    explicit Line(QPointF point, QGraphicsObject *parent = nullptr);
    ~Line();
private:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

};


#endif // LINE_H
