#ifndef INTERPOLATIONCONTROL_H
#define INTERPOLATIONCONTROL_H
#include <QVector>
#include <QWidget>
#include "interpolation.h"
#include "cubicspline.h"
#include "linearspline.h"
#include "polynomialinterpolation.h"

    /*!
    * \brief Die InterpolationControl Klasse
    *
    * Die InterpolationControl Klasse regelt den Wechsel zwischen den einzelnen Interpolationsmethoden und kann
    * die Kurve mit der jeweils ausgewaehlten Interpolationsmethode starten.
    */
class InterpolationControl : public QWidget
{
    Q_OBJECT
public:
         /*!
         * \brief InterpolationControl Ist der Standardkonstruktor.
         */
        InterpolationControl();

        /*!
         * \brief addPoint Fügt den Punkt (x,y) nach der Groeße sortiert in den xPos und yPos QVektor
         */
        void addPoint(
                QVector<double>& xPos,
                QVector<double>& yPos,
                double x,
                double y
                );
private:
        /*!
         * \brief xpos Enthaelt die x Werte von den bestehenden Knoten
         * \brief ypos Enthaelt die zu den x-Werte die dazugehoerigen y-Werte
         */
        std::vector <double> xpos,ypos;
        /*!
         * \brief activeModel Zeiger auf die aktuelle Interpolationsmethode
         */
        Interpolation *activeModel;
        /*!
         * \brief LinearSplineModel Zeiger auf die lineare Spline Interpolation
         */
        Interpolation *LinearSplineModel;
        /*!
         * \brief CubicSplineModel Zeiger für die Kubische Spline Interpolations
         */
        Interpolation *CubicSplineModel;
        /*!
         * \brief PolynomialModel Zeiger auf die Lagrangeinterpolationsmethode
         */
        Interpolation *PolynomialModel;
public slots:
        /*!
         * \brief changeActiveModel kann man zwischen den einzelnen Interpolationsmethoden herumwechseln
         */
        void changeActiveModel(int);
        /*!
         * \brief calculateInterpolation ruft in der Klasse Interpolation die Funktion StartInterpolation() auf
         */
        void calculateInterpolation(
                const QVector<double>&,
                const QVector<double>&,
                QVector<double> &,
                QVector<double> &
                );
signals:
        /*!
         * \brief interpolationChanged Signalisiert durch eine Nachricht, wenn der User die Interpolationsmethode aendert
         */
        void interpolationChanged(
                QString,
                int
                );
        /*!
         * \brief interpolationComplete Signalisiert, wenn die Berechnung der Stuetzstellen fertig ist
         */
        void interpolationComplete();
        /*!
         * \brief interpolationChanged Signalisiert dem Programm die Kurve neu zuplotten
         */
        void interpolationChanged();
};

#endif // INTERPOLATIONCONTROL_H
