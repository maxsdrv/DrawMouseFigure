#ifndef PAINTSCENE_H
#define PAINTSCENE_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include "figure.h"

class PaintScene : public QGraphicsScene
{
    Q_OBJECT

    Q_PROPERTY(int typeFigure READ typeFigure
               WRITE setTypeFigure
               NOTIFY typeFigureChanged)
public:
    explicit PaintScene(QObject *parent = nullptr);
    ~PaintScene();

    int typeFigure() const;             //return type
    void setTypeFigure(const int type); //setup current type

    enum FigureTypes{LineType, CircleType, ArcType}; //figure type

signals:
    void typeFigureChanged(); //signal to change figure

private:
    //Object for keep save a figure

    Figure *tempFigure;
    int m_typeFigure;

    //Event mouse
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
};

#endif // PAINTSCENE_H
