#include "qstceplot.h"
#include <iostream>

QStcePlot::QStcePlot(QWidget* q,bool sorted){
    plot = new QCustomPlot(q,sorted);

    layout = new QVBoxLayout();
    layout->addWidget(plot); // layout is uninitialized and probably garbage
    this->setLayout(layout);

    plot->addGraph();
    this->setRange(0,100,0,50);
    QObject::connect(plot,SIGNAL(mousePress(QMouseEvent*)),this,SLOT(mouseClickRecv(QMouseEvent*)));
}

void QStcePlot::setRange(double xmin, double xmax, double ymin, double ymax){
    plot->xAxis->setRangeLower(xmin); xMin = xmin;
    plot->xAxis->setRangeUpper(xmax); xMax = xmax;
    plot->yAxis->setRangeLower(ymin); yMin = ymin;
    plot->yAxis->setRangeUpper(ymax); yMax = ymax;
    plot->replot();
}

void QStcePlot::getRange(double &xmin, double &xmax, double &ymin, double &ymax){
    xmin = xMin;
    ymin = yMin;
    xmax = xMax;
    ymax = yMax;
}

void QStcePlot::setKeyPoints(QVector<double> &x, QVector<double> &y){
    plot->graph(0)->setData(x, y);
    plot->graph(0)->setLineStyle(QCPGraph::lsNone);
    plot->graph(0)->setScatterStyle(QCPScatterStyle::ssDisc);
    plot->graph(0)->scatterStyle().setSize(10);
    plot->replot();

}

void QStcePlot::setPoints(QVector<double> &x, QVector<double> &y, int graphI, QColor color){
    while(plot->graphCount() < graphI + 1){
        plot->addGraph();
    }
    plot->graph(plot->graphCount()-1)->setPen(QPen(color));
    plot->graph(graphI)->setData(x,y);
    plot->replot();
}

void QStcePlot::replot()
{
    plot->replot();
}

void QStcePlot::mouseClickRecv (QMouseEvent *  event  ){
    double mouse_x,mouse_y,x,y;
    mouse_x = event->x();
    mouse_y = event->y();
    x = plot->xAxis->pixelToCoord(mouse_x);
    y = plot->yAxis->pixelToCoord(mouse_y);
    emit plotOnClickEvent(x,y,event->button());
}
