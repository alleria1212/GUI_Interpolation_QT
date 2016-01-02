#include "interpolationcontrol.h"
#include <QString>

/*!
 * Es werden beim Initialisieren Objekte
 * der verschiedenen Interpolationsmethoden, sowie ein activeModel, welches auf die aktuelle
 * Interpolationsmethode zeigt, erzeugt. Dieses ist beim Initialisieren die lineare Spline Interpolation.
 */
InterpolationControl::InterpolationControl()
{
    CubicSplineModel = new CubicSpline();
    LinearSplineModel = new LinearSpline();
    PolynomialModel = new PolynomialInterpolation();
    activeModel = LinearSplineModel;
}

void InterpolationControl::changeActiveModel(int _activeModel)
{
    QString str;
    switch(_activeModel)
    {
        case 0 : activeModel = LinearSplineModel;
            str = "Lineare Interpolation ausgewaehlt";
            break;

        case 1 : activeModel = PolynomialModel;
            str = "Polynominterpolation ausgewaehlt";
            break;

        case 2 : activeModel = CubicSplineModel;
            str = "Kubische Spline Interpolation ausgewaehlt";
            break;
    }

    emit interpolationChanged(str,1000);
    emit interpolationChanged();
}

void InterpolationControl::calculateInterpolation(const QVector<double> &xPos, const QVector<double> &yPos,QVector<double>&xCurve, QVector<double>&yCurve)
{
    activeModel->StartInterpolation(xPos, yPos, xCurve, yCurve);
    emit interpolationComplete();
}

/*!
 * \param xPos Enthaelt die x Werte von den bestehenden Knoten
 * \param yPos Enthaelt die zu den x-Werte die dazugehoerigen y-Werte
 * \param x x-Koordinate des neuen Punktes
 * \param y y-Koordinate des neuen Punktes
 */
void InterpolationControl::addPoint(QVector<double>&xPos, QVector<double>&yPos, double x, double y)
{
    for(QVector<double>::iterator xit = xPos.begin(), yit = yPos.begin(); xit != xPos.end(); xit++, yit++)
    {
        if(*xit == x)
        {
            return;
        }

        if(*xit > x)
        {
            xPos.insert(xit,x);
            yPos.insert(yit,y);
            return;
        }
    }

    xPos.push_back(x);
    yPos.push_back(y);
    return;

}
