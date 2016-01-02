#include "linearspline.h"

LinearSpline::LinearSpline()
{

}

/*!
 * \param xPos enthaelt die zu interpolierenden x Stuetzstellen
 * \param yPos enthaelt die zu den x Stuetzstellen gehoerigen interpolierten y Stuetzstellen
 * \param xCurve speichert die interpolierten x Punkte
 * \param yCurve speichert die interpolierten y Punkte
 */
void LinearSpline::StartInterpolation(const QVector<double>&xPos, const QVector<double>&yPos, QVector<double> &xCurve, QVector<double> &yCurve)
{
    xCurve.clear();
    yCurve.clear();
    xCurve = xPos;
    yCurve = yPos;
    return;
}
