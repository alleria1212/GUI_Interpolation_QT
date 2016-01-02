#ifndef LINEARSPLINE_H
#define LINEARSPLINE_H
#include <interpolation.h>

/*!
 * \brief Die LinearSpline Klasse
 *
 * Die LinearSpline Klasse erbt von der Klasse Interpolation und implementiert die Funktionitaet zwischen Punkten mithilfe
 * linearer Splines zu Interpolieren.
 */
class LinearSpline : public Interpolation
{
public:
    /*!
     * \brief LinearSpline Ist der Standardkonstruktor
     */
    LinearSpline();
    /*!
     * \brief StartInterpolation interpoliert die Punkte xPos und yPos mithilfe linearer Splines und speichert die berechnete Kurve in xCurve
     * und yCurve
     */
    void StartInterpolation(
            const QVector<double>& xPos,
            const QVector<double>& yPos,
            QVector<double>& xCurve,
            QVector<double>& yCurve
            );
};

#endif // LINEARSPLINE_H
