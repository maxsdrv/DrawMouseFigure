#include "line.h"
#include <QPainter>


Line::Line(QPointF point, QGraphicsObject *parent) : Figure(point, parent)
{

}

Line::~Line()
{

}

void Line::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(QPen(Qt::black, 2));

    QLineF line(endPoint().x() > startPoint().x() ? startPoint().x() : endPoint().x(),
                endPoint().y() > startPoint().y() ? startPoint().y() : endPoint().y(),
                qAbs(endPoint().x() - startPoint().x()),
                qAbs(endPoint().y() - startPoint().y()));

    painter->drawLine(line);

    Q_UNUSED(option);
    Q_UNUSED(widget);

}
