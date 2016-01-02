#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <cmath>
#include <QDebug>
#include <QDoubleValidator>
#include <QErrorMessage>
#include "interpolationcontrol.h"
#include "qStcePlot/qstceplot.h"

namespace Ui {
class MainWindow;
}

/*!
 * \brief Die MainWindow Klasse
 *
 * Die MainWindow Klasse enthaelt alle Ui Elemente sowie die Funktionen und Variablen welche fuer das Zeichnen in das Plotfenster
 * notwendig sind.
 */

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
     //! MainWindow Ist der Standardkonstruktor fuer die Klasse MainWindow. Es werden die connect-Befehle definiert, das Ui und ein InterpolationControl Objekt erzeugt.
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    /*!
     * \brief xPos Definiert die KeyPoints auf der x-Achse
     * \brief yPos Definiert die KeyPoints auf der y-Achse
     * \brief xCurve Definiert die Punkte welche die x-KeyPoints verbinden
     * \brief yCurve Definiert die Punkte welche die y-KeyPoints verbinden.
     */
    QVector<double> xPos,yPos,xCurve,yCurve;

    //! Validator um die Definitionsbereich Grenzen zu pruefen
    QDoubleValidator* checkValid;

    //! Error Message um Fehler anzuzeigen
    QErrorMessage* errorMessage;

    //! ui Enthaelt alle ui Elemente
    Ui::MainWindow *ui;

    //! controller verwaltet die Interpolationsarten
    InterpolationControl* controller;


    //!checkRange ueberprueft die Eingaben in die Textfelder, zum Setzen des Definitionsbereichs
    void checkRange() throw(QString);

public slots:
     //! mouseSlot definiert das Verhalten bei einem Klick auf das PlotWidget.
    void mouseSlot(
            double x,
            double y,
            Qt::MouseButton btn
            );

    //! setRange veraendert die Grenzen des plotWidgets
    void setRange();

    //! reset setzt alle im Verlauf der Verwendung des Programms veraenderten Einstellungen auf die Standardeinstellungen zurueck.
    void reset();

    //! plot zeichnet xPos, yPos als KeyPoints, und xCurve, yCurve als Points (also Kurve) in den Plot
    void plot();

    //! refreshCurve berechnet den Plot komplett neu, z.B. wenn die Interpolationsart veraendert wird.
    void refreshCurve();

signals:
    //! keyPointsChanged signalisiert wenn ein Punkt hinzugefuegt oder geloescht wurde.
    void keyPointsChanged(
            const QVector<double>&,
            const QVector<double>&,
            QVector<double>&,
            QVector<double>&
            );

};

#endif // MAINWINDOW_H
