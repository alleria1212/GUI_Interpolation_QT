#include "polynomialinterpolation.h"
#include <algorithm>

PolynomialInterpolation::PolynomialInterpolation()
{

}

/*!
 * Es wird mit den Punkten xPos und yPos interpoliert.
 *
 * \param xPos enthaelt die x Stuetzstellen
 * \param yPos enthaelt die y Stuetzstellen
 * \param xCurve speichert die interpolierten x Punkte
 * \param yCurve speichert die interpolierten y Punkte
 */
void PolynomialInterpolation::StartInterpolation(const QVector<double> &xPos, const QVector<double> &yPos, QVector<double> &xCurve, QVector<double> &yCurve)
{
    xCurve.clear();
    yCurve.clear();
    int n = 1000;
    xCurve.resize(n);
    yCurve.resize(n);
    int k = xPos.size();
    double xmin = *std::min_element(xPos.begin(),xPos.end());
    double xmax = *std::max_element(xPos.begin(),xPos.end());
    //double ymin = *std::min_element(yPos.begin(),yPos.end());
    //double ymax = *std::max_element(yPos.begin(),yPos.end());

    double lj;

    double h = (xmax-xmin)/n;

    for (int i=0; i<n; i++)
    {
        xCurve[i] = xmin + i*h;
        yCurve[i] = 0;
        for(int j=0; j<k;j++)
        {
            lj =1;
            for(int m=0; m<k;m++)
            {
                if(m==j)
                {}
                else
                {
                    lj *= (xCurve[i] - xPos[m])/(xPos[j] - xPos[m]);
                }
            }
            yCurve[i] += yPos[j]*lj;
        }
    }
}
