#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tablemodel.h"
#include "sctablemodel.h"

// Definition of the 'MainWindow' class constructor.
// Parent's constructor, with a 'parent' pointer to a 'QWidget' object as a parameter, is called in the initialization list of the 'MainWindow' class.
// If a superclass constructor should be called with an argument, the subclass's constructor initialization list must be used.
// 'MainWindow' constructor constructs a 'MainWindow' object and assigns a pointer to this object at ui variable in the 'Ui' namespace.
// 'MainWindow' definition in the 'Ui' namespace resides in 'ui_mainwindow.h' header file ('MainWindow' class inherits 'Ui_MainWindow' class defined in the same file).
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this); // the setupUi function of 'ui' object ('MainWindow' class) is called.

    // Set main window title:
    MainWindow::setWindowTitle("OFDM");

    // initialize ui
    ui->pbRadioButton->setChecked(true);
    ui->lRadioButton->setChecked(true);
    ui->hMaxScLineEdit->setDisabled(true);
    ui->aLineEdit->setDisabled(true);
    ui->avCallScLineEdit->setDisabled(true);
    ui->scDistComboBox->setCurrentIndex(0);
    scDist = "Uniform";
    ui->scCallTypeComboBox->setDisabled(true);
    ui->gainDistComboBox->setCurrentIndex(0);
    gainDist = "Uniform";
    ui->gainComboBox->setDisabled(true);
    ui->pGainLineEdit->setDisabled(true);
    ui->lngstCallDurLabel->setText("Mean call duration:");

    // Set validators:
    QIntValidator* int_validator = new QIntValidator(this);
    ui->totScLineEdit->setValidator(int_validator);
    ui->snrsLineEdit->setValidator(int_validator);
    ui->maxCallScLineEdit->setValidator(int_validator);

    QDoubleValidator* double_validator = new QDoubleValidator(this);
    ui->pwrLineEdit->setValidator(double_validator);
    ui->bwLineEdit->setValidator(double_validator);
    ui->drLineEdit->setValidator(double_validator);
    ui->lLineEdit->setValidator(double_validator);
    ui->hMaxLineEdit->setValidator(double_validator);
    ui->aLineEdit->setValidator(double_validator);
    ui->avSnrLineEdit->setValidator(double_validator);
    //-----------------------------------------------------------------------------

    // create input table header vector:
    inputTableHeader.resize(5);
    inputTableHeader[0] = "Call type";
    inputTableHeader[1] = "bk";
    inputTableHeader[2] = "amk";
    inputTableHeader[3] = "gm";
    inputTableHeader[4] = "prm";
    //-----------------------------------------------------------------------------

    //create and set input table model:
    inputTableModel = new TableModel(this);
    ui->inputTableView->setModel(inputTableModel);
    ui->inputTableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    ui->inputTableView->horizontalHeader()->setDefaultSectionSize(60);
    ui->inputTableView->verticalHeader()->setDefaultSectionSize(20);

    //create and set subcarriers table model:
    scTablMdl = new ScTableModel();
    ui->scTableView->setModel(scTablMdl);
    ui->scTableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    ui->scTableView->horizontalHeader()->setDefaultSectionSize(75);
    ui->scTableView->verticalHeader()->setDefaultSectionSize(20);


    //create and set channel gain table model:


    // initialize variables:
    maxCallSc = 0;
    snrs = 0;
    l = 0;
    hMax = 0;
    aOffSc = 0;
    ui->totScLineEdit->setText("256");
    ui->snrsLineEdit->setText("3");
    ui->maxCallScLineEdit->setText("64");
}


// 'MainWindow' class destructor
MainWindow::~MainWindow()
{
    delete ui;
}

//-----------------------------------------------------------------------------
// PRIVATE SLOTS:
//-----------------------------------------------------------------------------

// pwrLineEdit --> pwr
void MainWindow::on_pwrLineEdit_textChanged(const QString &arg1)
{
    storeDoubleVal(arg1, &pwr, ui->pwrLineEdit);
}

void MainWindow::on_bwLineEdit_textChanged(const QString &arg1)
{
    storeDoubleVal(arg1, &bw, ui->bwLineEdit);
}

// totScLineEdit --> totSc
void MainWindow::on_totScLineEdit_textEdited(const QString &arg1)
{
    storeIntVal(arg1, &totSc, ui->totScLineEdit);
    aTot = aOffSc * totSc;
}

// drLineEdit --> dr
void MainWindow::on_drLineEdit_textChanged(const QString &arg1)
{
    storeDoubleVal(arg1, &dr, ui->drLineEdit);
}

// snrsLineEdit --> snrs
void MainWindow::on_snrsLineEdit_textChanged(const QString &arg1)
{
    if (totClasses > 0)
        inputTableModel->removeRows(0, totClasses);

    storeIntVal(arg1, &snrs, ui->snrsLineEdit);
    totClasses = maxCallSc * snrs;

    if (totClasses > 0)
        inputTableModel->insertRows(0, maxCallSc * snrs);

    if (ui->gainDistComboBox->currentText() == "Add values manually")
    {
        ui->gainComboBox->clear();
        for (int i = 1; i <= snrs; i++)
        {
            ui->gainComboBox->addItem(QString::number(i));
        }
    }
}

// maxCallScLineEdit --> maxCallSc
void MainWindow::on_maxCallScLineEdit_textChanged(const QString &arg1)
{
    QModelIndex index;

    if (totClasses > 0)
        inputTableModel->removeRows(0, totClasses);

    if (maxCallSc > 0)
        scTablMdl->removeRows(0, maxCallSc);


    storeIntVal(arg1, &maxCallSc, ui->maxCallScLineEdit);
    totClasses = maxCallSc * snrs;

    if (totClasses > 0)
        inputTableModel->insertRows(0,  totClasses);

    if (maxCallSc > 0)
        scTablMdl->insertRows(0, maxCallSc);

    for (int i = 0; i < maxCallSc; i++)
    {
        index = scTablMdl->index(i, 0, QModelIndex());
        scTablMdl->setData(index, i + 1);
    }

    if (ui->scDistComboBox->currentText() == "Add values manually")
    {
        ui->scCallTypeComboBox->clear();
        for (int i = 1; i <= maxCallSc; i++)
        {
            ui->scCallTypeComboBox->addItem(QString::number(i));
        }
    }
    else if (scDist == "Uniform")
    {
        ui->avCallScLineEdit->setDisabled(true);
        ui->avCallScLineEdit->setText(QString::number((double)(maxCallSc + 1) / 2));
    }
}

void MainWindow::on_scDistComboBox_currentIndexChanged(const QString &arg1)
{
    //scDist = ui->scDistComboBox->itemText(ui->scDistComboBox->currentIndex());
    scDist = arg1;
    inputTableModel->setScDist(scDist);
    if (scDist == "Add values manually")
    {
        ui->scCallTypeComboBox->setDisabled(false);
        ui->scCallTypeComboBox->clear();
        for (int i = 1; i <= maxCallSc; i++)
        {
            ui->scCallTypeComboBox->addItem(QString::number(i));
        }
    }
    else
    {
        ui->scCallTypeComboBox->setDisabled(true);
        ui->scCallTypeComboBox->clear();
    }

    if (scDist == "Uniform")
    {
        ui->avCallScLineEdit->setDisabled(true);
        ui->avCallScLineEdit->setText(QString::number((double)(maxCallSc + 1) / 2));
    }
    else
    {
        ui->avCallScLineEdit->setDisabled(false);
    }

    if (scDist == "Uniform")
        popScTblUniform();
    else if (scDist == "Poisson")
         popScTblPoisson();
}

// avCallScLineEdit --> avCallSc
void MainWindow::on_avCallScLineEdit_textChanged(const QString &arg1)
{
    storeDoubleVal(arg1, &avCallSc, ui->avCallScLineEdit);

    if (!(scDist == "Add values manually"))
    {
        //storeDoubleVal(arg1, &h, ui->hLineEdit);
        if (scDist == "Uniform")
        {
            popScTblUniform();
        }
        else if (scDist == "Poisson")
        {
            popScTblPoisson();
        }
    }
}


void MainWindow::on_lRadioButton_toggled(bool checked)
{
    if (checked)
    {
        ui->lLineEdit->setDisabled(false);
        ui->callDurDistComboBox->setDisabled(false);
        ui->hMaxScLineEdit->setDisabled(false);
        ui->hMaxLineEdit->setDisabled(false);
        ui->aLineEdit->setText("");
        ui->traffLoadDistComboBox->setDisabled(true);
        ui->aLineEdit->setDisabled(true);
    }
    else
    {
        ui->lLineEdit->setText("");
        ui->lLineEdit->setDisabled(true);
        ui->callDurDistComboBox->setDisabled(true);
        ui->hMaxScLineEdit->setDisabled(true);
        ui->hMaxLineEdit->setDisabled(true);
        ui->traffLoadDistComboBox->setDisabled(false);
        ui->aLineEdit->setDisabled(false);
    }
}

// lLineEdit --> l
void MainWindow::on_lLineEdit_textChanged(const QString &arg1)
{

    if (!(scDist == "Add values manually"))
    {
        storeDoubleVal(arg1, &l, ui->lLineEdit);
        if (scDist == "Uniform")
        {
            popScTblUniform();
        }
        else if (scDist == "Poisson")
        {
            popScTblPoisson();
        }
    }
}

void MainWindow::on_callDurDistComboBox_currentIndexChanged(const QString &arg1)
{
    callDurDist = arg1;
    if (callDurDist == "Uniform")
    {
        ui->hMaxScLineEdit->setDisabled(true);
        ui->lngstCallDurLabel->setText("Mean call duration:");
    }
    else
    {
        ui->hMaxScLineEdit->setDisabled(false);
        ui->lngstCallDurLabel->setText("Mean duration of longest call:");
    }

}

// hMaxScLineEdit --> hMaxSc;
void MainWindow::on_hMaxScLineEdit_textChanged(const QString &arg1)
{
    if (!(scDist == "Add values manually"))
    {
        storeDoubleVal(arg1, &hMaxSc, ui->lLineEdit);
        if (scDist == "Uniform")
        {
            popScTblUniform();
        }
        else if (scDist == "Poisson")
        {
            popScTblPoisson();
        }
    }
}

// hMaxLineEdit --> hMax
void MainWindow::on_hMaxLineEdit_textChanged(const QString &arg1)
{
    if (!(scDist == "Add values manually"))
    {
        storeDoubleVal(arg1, &hMax, ui->lLineEdit);
        if (scDist == "Uniform")
        {
            popScTblUniform();
        }
        else if (scDist == "Poisson")
        {
            popScTblPoisson();
        }
    }
}

//void MainWindow::on_hLineEdit_textChanged(const QString &arg1)
//{

//    if (!(scDist == "Add values manually"))
//    {
//        storeDoubleVal(arg1, &h, ui->hLineEdit);
//        if (scDist == "Uniform")
//        {
//            popScTblUniform();
//        }
//        else if (scDist == "Poisson")
//        {
//            popScTblPoisson();
//        }
//    }
//}

void MainWindow::on_aLineEdit_textChanged(const QString &arg1)
{
    storeDoubleVal(arg1, &aOffSc, ui->aLineEdit);
    aTot = aOffSc * totSc;
    if (scDist == "Uniform")
    {
        popScTblUniform();
    }
    else if (scDist == "Poisson")
    {
        popScTblPoisson();
    }
}

void MainWindow::on_gainDistComboBox_currentIndexChanged(const QString &arg1)
{
    //gainDist = ui->gainDistComboBox->itemText(ui->gainDistComboBox->currentIndex());
    gainDist = arg1;
    inputTableModel->setGainDist(gainDist);
    if (gainDist == "Add values manually")
    {
        ui->gainComboBox->setDisabled(false);
        ui->pGainLineEdit->setDisabled(false);
        for (int i = 1; i <= snrs; i++)
        {
            ui->gainComboBox->addItem(QString::number(i));
        }
    }
    else
    {
        ui->gainComboBox->setDisabled(true);
        ui->pGainLineEdit->setDisabled(true);
        ui->gainComboBox->clear();
    }
}

void MainWindow::on_avSnrLineEdit_textChanged(const QString &arg1)
{
    storeDoubleVal(arg1, &avSnr, ui->avSnrLineEdit);
}

void MainWindow::on_pushButton_clicked()
{
    stoch = new Stochastic;
    TableModel::Input* inputData; // declare an 'Input' struct pointer using 'TableModel' scope
    QModelIndex index;
    inputData = inputTableModel->getInputStruct(); // assign the 'inputTableModel' 'm_inputData' 'Input' struct pointer to 'inputData' pointer. 'm_inputData' are now accessible.

    for (int i = 0; i < totClasses; i++)
    {
        int callSc = (i % maxCallSc) + 1;
        double p;
        //inputData->bk[i] = (i)%(maxCallSc)+1 ;
        index = inputTableModel->index(i, 1, QModelIndex());
        //inputTableModel->setData(index, inputData->bk[i]);
        inputTableModel->setData(index, callSc);


        index = inputTableModel->index(i, 2, QModelIndex());

        if (scDist == "Uniform")
        {
            p = 1 / (double)totSc;
            inputTableModel->setData(index, p * aTot);
            //inputData->amk[i] = 1 / (double)totClasses;
        }
        else if (scDist == "Poisson")
        {
            p = stoch->poissonDist(avCallSc, callSc);
            inputTableModel->setData(index, p * aTot);
            //inputData->amk[i] = stoch->poissonDist(avCallSc, i);
        }


        //inputTableModel->setData(index, inputData->amk[i]);
    }
}



//-----------------------------------------------------------------------------
// CUSTOM METHODS/FUNCTIONS:
//-----------------------------------------------------------------------------

void MainWindow::storeIntVal(QString val, int *var, QLineEdit *lineEdit)
{
    bool ok;
    int temp = val.toInt(&ok);
    if (!val.isEmpty() && (!ok || temp < 0)) // show message if the line edit is not empty AND the vlalue is not valid (double) OR is lower than 0
    {
        msgBox.setText("Only positive integer values are allowed");
        msgBox.exec();
        lineEdit->setText(QString::number(*var));
    }
    else
    {
        *var = temp;
    }
}

void MainWindow::storeDoubleVal(QString val, double *var, QLineEdit *lineEdit)
{
    bool ok;
    double temp = val.toDouble(&ok);
    if (!val.isEmpty() && (!ok || temp < 0)) // show message if the line edit is not empty AND the vlalue is not valid (double) OR is lower than 0
    {
        msgBox.setText("Only positive integer values are allowed");
        msgBox.exec();
        lineEdit->setText(QString::number(*var));
    }
    else
    {
        *var = temp;
    }
}

void MainWindow::popScTblUniform()
{
    QModelIndex index;
    double p, lk;

    for (int i = 0; i < maxCallSc; i++)
    {
        p = 1 / (double)maxCallSc;
        if (ui->lRadioButton->isChecked())
        {
            index = scTablMdl->index(i, 1, QModelIndex());
            lk = p * l;
            scTablMdl->setData(index, lk);
            index = scTablMdl->index(i, 2, QModelIndex());
            scTablMdl->setData(index, hMax);
            index = scTablMdl->index(i, 3, QModelIndex());
            if (hMax)
                scTablMdl->setData(index, lk/hMax);
            else
                scTablMdl->setData(index, "");

        }
        else
        {
            index = scTablMdl->index(i, 1, QModelIndex());
            scTablMdl->setData(index, "");
            index = scTablMdl->index(i, 2, QModelIndex());
            scTablMdl->setData(index, "");
            index = scTablMdl->index(i, 3, QModelIndex());
            scTablMdl->setData(index, p * aTot);
        }
    }
}

void MainWindow::popScTblPoisson()
{
    QModelIndex index;
    double p, lk;

    for (int i = 0; i < maxCallSc; i++)
    { 
        p = stoch->poissonDist(avCallSc, i + 1);
        if (ui->lRadioButton->isChecked())
        {
            index = scTablMdl->index(i, 1, QModelIndex());
            lk = p * l;
            scTablMdl->setData(index, lk);
            index = scTablMdl->index(i, 2, QModelIndex());
            scTablMdl->setData(index, hMax);
            index = scTablMdl->index(i, 3, QModelIndex());
            if (hMax)
                scTablMdl->setData(index, lk/hMax);
            else
                scTablMdl->setData(index, "");
        }
        else
        {
            index = scTablMdl->index(i, 1, QModelIndex());
            scTablMdl->setData(index, "");
            index = scTablMdl->index(i, 2, QModelIndex());
            scTablMdl->setData(index, "");
            index = scTablMdl->index(i, 3, QModelIndex());
            scTablMdl->setData(index, p * aTot);
        }

    }
}

void MainWindow::popScTbl()
{
    QModelIndex index;
    double p, lk, hk, ak;
    QVector<double> a(maxCallSc);

    for (int i = 0; i < maxCallSc; i++)
    {
        if (scDist == "Uniform")
        {
            p = 1 / (double)maxCallSc;
        }
        else if (scDist == "Binomial")
        {

        }
        else if (scDist == "Poisson")
        {
            p = stoch->poissonDist(avCallSc, i + 1);

        }
        else if (scDist == "Gamma")
        {

        }

        a[i] = p;



        if (callDurDist == "Uniform")
        {

        }
        else if (scDist == "Binomial")
        {

        }
        else if (scDist == "Poisson")
        {

        }
        else if (scDist == "Gamma")
        {

        }
    }

     for (int i = 0; i < maxCallSc; i++)
     {
         index = scTablMdl->index(i, 1, QModelIndex());
         scTablMdl->setData(index, lk);
         index = scTablMdl->index(i, 2, QModelIndex());
         scTablMdl->setData(index, hk);
         index = scTablMdl->index(i, 3, QModelIndex());
         scTablMdl->setData(index, ak);
     }
}

QVector<double> MainWindow::scPerCallDist()
{
    double p, sum, diff, dp;
    QVector<double> a(maxCallSc);

    for (int i = 0; i < maxCallSc; i++)
    {
        if (scDist == "Uniform")
        {
            p = 1 / (double)maxCallSc;
        }
        else if (scDist == "Binomial")
        {

        }
        else if (scDist == "Poisson")
        {
            p = stoch->poissonDist(avCallSc, i + 1);
        }
        else if (scDist == "Gamma")
        {

        }

        a[i] = p;
    }

    sum = 0;

    for (int i = 0; i < maxCallSc; i++)
    {
        sum += a[i];
    }

    if ((diff = 1 - sum) > 0.001)
    {
        dp = diff / maxCallSc;
        for (int i = 0; i < maxCallSc; i++)
            a[i] += dp;
    }

    return a;
}

