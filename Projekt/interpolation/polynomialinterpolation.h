#ifndef POLYNOMIALINTERPOLATION_H
#define POLYNOMIALINTERPOLATION_H
#include <interpolation.h>

/*!
 * \brief Die Klasse PolynomialInterpolation Interpoliert zwischen gegebenen Punkten x und y mithilfe der Lagrange-Multiplikator
 * Methode.
 *
 * Es wird also bei n Punkten ein Polynom vom Grad n-1 zur Interpolation verwendet. Die Klasse erbt ausserdem von der abstrakten Klasse
 * Interpolation.
 */
class PolynomialInterpolation : public Interpolation
{
public:
    /*!
     * \brief PolynomialInterpolation ist der Standardkonstruktor.
     */
    PolynomialInterpolation();

    /*!
     * \brief StartInterpolation fuehr die Interpolation aus.
     */
    void StartInterpolation(const QVector<double>& xPos,const QVector<double>& yPos,QVector<double>& xCurve,QVector<double>& yCurve);
};

#endif // POLYNOMIALINTERPOLATION_H
