#include "mainwindow.h"
#include "ui_mainwindow.h"

/*!
 * \param parent Uebergibt den Besitzer von MainWindow.
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    checkValid = new QDoubleValidator(-10000000,10000000,3,NULL);
    errorMessage = new QErrorMessage(this);

    ui->setupUi(this);
    controller = new InterpolationControl();
    QObject::connect(ui->xmin_edit,SIGNAL(returnPressed()),this,SLOT(setRange()));
    QObject::connect(ui->xmax_edit,SIGNAL(returnPressed()),this,SLOT(setRange()));
    QObject::connect(ui->ymin_edit,SIGNAL(returnPressed()),this,SLOT(setRange()));
    QObject::connect(ui->ymax_edit,SIGNAL(returnPressed()),this,SLOT(setRange()));

    QObject::connect(ui->plotWidget,SIGNAL(plotOnClickEvent(double,double,Qt::MouseButton)),this,SLOT(mouseSlot(double,double,Qt::MouseButton)));
    QObject::connect(ui->defbereich_button,SIGNAL(clicked(bool)),this,SLOT(setRange()));
    QObject::connect(ui->reset_button,SIGNAL(clicked(bool)),this,SLOT(reset()));
    QObject::connect(ui->exit_button,SIGNAL(clicked(bool)),this,SLOT(close()));
    QObject::connect(ui->interpolation_select,SIGNAL(currentIndexChanged(int)),controller,SLOT(changeActiveModel(int)));
    QObject::connect(controller,SIGNAL(interpolationChanged(QString,int)),ui->statusBar,SLOT(showMessage(QString,int)));
    QObject::connect(controller,SIGNAL(interpolationChanged()),this,SLOT(refreshCurve()));
    QObject::connect(this,SIGNAL(keyPointsChanged(QVector<double>,QVector<double>,QVector<double>&,QVector<double>&)),controller,SLOT(calculateInterpolation(QVector<double>,QVector<double>,QVector<double>&,QVector<double>&)));
    QObject::connect(controller,SIGNAL(interpolationComplete()),this,SLOT(plot()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete checkValid;
    delete errorMessage;
}

/*!
 * \param x uebergibt die x-Koordinate des Mausklicks.
 * \param y uebergibt die y-Koordinate des Mausklicks.
 * \param btn uebergibt einen Index, welcher verwendeten MouseButton identifiziert.
 */
void MainWindow::mouseSlot(double x, double y, Qt::MouseButton btn){

    if(btn == 1){
        QString str = "Click at (" + QString().setNum(x,'f',2) + " | " + QString().setNum(y,'f',2) + ") with Button " + QString().setNum(btn) +".";
        this->statusBar()->showMessage(str,1000);

        controller->addPoint(xPos,yPos,x,y);
    }
    if(btn ==2){
        QString str = "Click at (" + QString().setNum(x,'f',2) + " | " + QString().setNum(y,'f',2) + ") with Button " + QString().setNum(btn) +".";
        this->statusBar()->showMessage(str,1000);

        double xmax = ui->xmax_edit->text().toDouble();
        double xmin = ui->xmin_edit->text().toDouble();
        double ymax = ui->ymax_edit->text().toDouble();
        double ymin = ui->ymin_edit->text().toDouble();

        double epsx = (xmax-xmin)*0.01;
        double epsy = (ymax-ymin)*0.01;
        double tmpx;
        double tmpy;
        QVector<double>::iterator xiter = xPos.begin();
        QVector<double>::iterator yiter = yPos.begin();
        for(;xiter!=xPos.end();)
        {
            tmpx = sqrt(pow(*xiter-x,2));
            tmpy = sqrt(pow(*yiter-y,2));
            if(tmpx < epsx && tmpy < epsy)
            {
                xPos.erase(xiter);
                yPos.erase(yiter);
                break;
            }

            xiter++;
            yiter++;
        }
    }
    emit keyPointsChanged(xPos,yPos,xCurve,yCurve);
}

void MainWindow::setRange()
{
    try
    {
        checkRange();
    }
    catch(const QString error)
    {
        errorMessage->showMessage(error);
        return;
    }

    //Set Range
    QString xmaxstr = ui->xmax_edit->text();
    QString xminstr = ui->xmin_edit->text();
    QString ymaxstr = ui->ymax_edit->text();
    QString yminstr = ui->ymin_edit->text();

    double xmax = xmaxstr.toDouble();
    double xmin = xminstr.toDouble();
    double ymax = ymaxstr.toDouble();
    double ymin = yminstr.toDouble();

    ui->plotWidget->setRange(xmin,xmax,ymin,ymax);
}

void MainWindow::reset()
{
    xPos.clear();
    yPos.clear();
    ui->plotWidget->setKeyPoints(xPos,yPos);
    ui->plotWidget->setPoints(xPos,yPos,1,"Red");
    ui->plotWidget->setRange(0,100,0,50);
    ui->xmin_edit->setText("0");
    ui->xmax_edit->setText("100");
    ui->ymin_edit->setText("0");
    ui->ymax_edit->setText("50");
    ui->interpolation_select->setCurrentIndex(0);
    controller->changeActiveModel(0);
    delete errorMessage;
    errorMessage = new QErrorMessage(this);
}

void MainWindow::plot()
{
    ui->plotWidget->setKeyPoints(xPos,yPos);
    ui->plotWidget->setPoints(xCurve,yCurve,1,"Red");
}

void MainWindow::refreshCurve()
{
    emit keyPointsChanged(xPos,yPos,xCurve,yCurve);
}

void MainWindow::checkRange() throw(QString)
{
    int pos;
    QString xmaxstr = ui->xmax_edit->text();
    QString xminstr = ui->xmin_edit->text();
    QString ymaxstr = ui->ymax_edit->text();
    QString yminstr = ui->ymin_edit->text();
    pos = ui->xmin_edit->cursorPosition();
    if(checkValid->validate(xminstr,pos) < 2)
    {
        throw(QString("Ungueltige Eingabe in xmin Textfeld"));
    }

    pos = ui->xmax_edit->cursorPosition();
    if(checkValid->validate(xmaxstr,pos) < 2)
    {
        throw(QString("Ungueltige Eingabe in xmax Textfeld"));
    }

    pos = ui->ymin_edit->cursorPosition();
    if(checkValid->validate(yminstr,pos) < 2)
    {
        throw(QString("Ungueltige Eingabe in ymin Textfeld"));
    }

    pos = ui->ymax_edit->cursorPosition();
    if(checkValid->validate(ymaxstr,pos) < 2)
    {
        throw(QString("Ungueltige Eingabe in ymax Textfeld"));
    }

    double xmax = xmaxstr.toDouble();
    double xmin = xminstr.toDouble();
    double ymax = ymaxstr.toDouble();
    double ymin = yminstr.toDouble();

    if (xmin > xmax)
    {
        throw(QString("Der Minimale x Wert ist groesser als der Maximale x Wert"));
    }
    if (ymin > ymax)
    {
        throw(QString("Der Minimale y Wert ist groesser als der Maximale y Wert"));
    }
}
