#include "paintscene.h"
#include "arc.h"
#include "circle.h"
#include "line.h"

PaintScene::PaintScene(QObject *parent) : QGraphicsScene(parent)
{

}

PaintScene::~PaintScene()
{

}

int PaintScene::typeFigure() const
{
    return m_typeFigure;
}

void PaintScene::setTypeFigure(const int type)
{
    m_typeFigure = type;
}

void PaintScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    switch (m_typeFigure) {
    case LineType: {
        Line *item = new Line(event->scenePos());
        item->setPos(event->pos());
        tempFigure = item;
        break;
    }
    case CircleType: {
         Circle *item = new Circle(event->scenePos());
         item->setPos(event->pos());
         tempFigure = item;
         break;
    }
    case ArcType: {
        Arc *item = new Arc(event->scenePos());
        item->setPos(event->pos());
        tempFigure = item;
        break;
    }
    default: {
        Circle *item = new Circle(event->scenePos());
        item->setPos(event->pos());
        tempFigure = item;
        break;
    }
    }

    this->addItem(tempFigure);
}

void PaintScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    tempFigure->setEndPoint(event->scenePos());

    this->update(QRectF(0, 0, this->width(), this->height()));
}





