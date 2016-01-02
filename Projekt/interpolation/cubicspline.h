#ifndef CUBICSPLINE_H
#define CUBICSPLINE_H
#include <interpolation.h>
#include "spline.h"
#include <vector>

/*!
 * \brief Die CubicSpline Klasse erbt von der Klasse Interpolation und implementiert die Funktionitaet zwischen Punkten mithilfe
 * Kubischer Splines zu Interpolieren.
 *
 * Die Klasse verwenden ausserdem die Bibliothek spline.h der Uni Chemnitz
 */
class CubicSpline : public Interpolation
{
private:
    /*!
     * \brief x Enthaelt lokale Kopie des xPos QVector als std::vector
     * \brief y Enthaelt lokale Kopie des yPos QVector als std::vector
     */
    std::vector<double> x,y;
public:
    /*!
     * \brief Standardkonstruktor fuer die Klasse CubicSpline
     */
    CubicSpline();

    /*!
     * \brief StartInterpolation interpoliert die Punkte xPos und yPos mithilfe Kubischer Splines und speichert die berechnete Kurve in xCurve
     * und yCurve
     */
    void StartInterpolation(
            const QVector<double>& xPos,
            const QVector<double>& yPos,
            QVector<double>& xCurve,
            QVector<double>& yCurve
            );

    /*!
     * \brief qVectorToVector erstellt in lokalen Variablen x und y Kopien der QVektoren xPos und yPos
     */
    void qVectorToVector(
            const QVector<double>& xPos,
            const QVector<double>& yPos
            );
};

#endif // CUBICSPLINE_H
