#ifndef FIGURE_H
#define FIGURE_H

#include <QGraphicsObject>
#include <QGraphicsItem>
#include <QObject>
#include <QDebug>

class Figure : public QGraphicsObject
{
    Q_OBJECT

    //Start point properties
    Q_PROPERTY(QPointF startPoint
               READ startPoint WRITE setStartPoint
               NOTIFY pointChanged)

    //Finish point properties
    Q_PROPERTY(QPointF endPoint READ endPoint
               WRITE setEndPoint NOTIFY pointChanged)

public:
    explicit Figure(QPointF point, QObject *parent = nullptr);
    ~Figure();

    QPointF startPoint() const;
    QPointF endPoint() const;

    void setStartPoint(const QPointF point);
    void setEndPoint(const QPointF point);

signals:
    void pointChanged();

private:
    QPointF m_startPoint;
    QPointF m_endPoint;

    QRectF boundingRect() const;

public slots:
    void updateLine();
};

#endif // FIGURE_H
