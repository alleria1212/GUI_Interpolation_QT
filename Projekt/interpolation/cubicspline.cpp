#include "cubicspline.h"

CubicSpline::CubicSpline()
{

}

/*!
 * \param xPos enthaelt die x Stuetzstellen
 * \param yPos enthaelt die y Stuetzstellen
 * \param xCurve speichert die interpolierten x Punkte
 * \param yCurve speichert die interpolierten y Punkte
 */
void CubicSpline::StartInterpolation(const QVector<double> &xPos, const QVector<double> &yPos, QVector<double> &xCurve, QVector<double> &yCurve)
{
    xCurve.clear();
    yCurve.clear();
    if(xPos.size()>2)
    {
        int n = 1000;
        xCurve.resize(n);
        yCurve.resize(n);
        double xmin = *std::min_element(xPos.begin(),xPos.end());
        double xmax = *std::max_element(xPos.begin(),xPos.end());
        double h = (xmax-xmin)/n;

        qVectorToVector(xPos,yPos);
        tk::spline s;
        s.set_points(x,y,true);


        for(int i=0;i<n;i++)
        {
            xCurve[i] = xmin + i*h;
            yCurve[i] = s(xCurve[i]);
        }
    }
}

/*!
 * \param xPos enthaelt die zu interpolierenden x Punkte
 * \param yPos enthaelt die zu interpolierenden y Punkte
 */
void CubicSpline::qVectorToVector(const QVector<double>& xPos, const QVector<double>& yPos)
{
    x.clear();
    y.clear();
    int n = xPos.size();
    x.resize(n);
    y.resize(n);
    for(int i=0; i<n; i++)
    {
        x[i] = xPos[i];
        y[i] = yPos[i];
    }

}
