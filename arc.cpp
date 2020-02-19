#include "arc.h"
#include <QPainter>


Arc::Arc(QPointF point, QGraphicsObject *parent) : Figure(point, parent)
{
    Q_UNUSED(point);
}

Arc::~Arc()
{

}

void Arc::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(QPen(Qt::black, 2));
    QPolygon polygon;

    QRectF rectangle(endPoint().x() > startPoint().x() ? startPoint().x() : endPoint().x(),
                     endPoint().y() > startPoint().y() ? startPoint().y() : endPoint().y(),
                     qAbs(endPoint().x() - startPoint().x()),
                     qAbs(endPoint().y() - startPoint().y()));
    int startAngle(30 * 16);
    int spanAngle(120 * 16);
    painter->drawArc(rectangle, startAngle, spanAngle);

    Q_UNUSED(option);
    Q_UNUSED(widget);

}
