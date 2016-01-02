#ifndef INTERPOLATION_H
#define INTERPOLATION_H
#include <QVector>
/*!
 * \brief Die Interpolation Klasse
 *
 * Die Klasse Interpolation ist die abstrakte Klasse fuer die verschiedenen Interpolationsmethoden
 */
class Interpolation
{
public:
    /*!
     * \brief Interpolation Standardkonstruktor
     */
    Interpolation();
    /*!
     * \brief StartInterpolation Virtuelle Methode, welche die Berechnung der Stuetzstellen startet
     */
    virtual void StartInterpolation(const QVector<double>&,const QVector<double>&, QVector<double>&, QVector<double>&)=0;
};

#endif // INTERPOLATION_H
