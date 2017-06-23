#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow> // includes 'qmainwindow.h' header file
#include <QMessageBox>
#include <QLineEdit>
//#include "tablemodel.h"
#include "stochastic.h"

// Declaration of 'Ui' namespace
namespace Ui {

    class MainWindow; // Forward declaration of class 'MainWindow'. 'MainWindow' has not been defined yet.
}

class TableModel; // Forward declaration of class 'TableModel'.
class ScTableModel;

// Definition of MainWindow class in the global namespace.
// 'MainWindow' class inherits 'QMainWindow' class. 'QMainWindow' class inherits 'QWidget' class.
// This 'MainWindow' class is irrelevant to the 'MainWindow' class of the 'Ui' namespace.
class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0); // Declaration of 'MainWindow' constructor. Accepts a pointer to a 'QWidget' object as a parameter.
    ~MainWindow();

    void storeIntVal(QString val, int *var, QLineEdit *lineEdit);

    void storeDoubleVal(QString val, double *var, QLineEdit *lineEdit);

    void popScTbl();

    void popScTblUniform();

    void popScTblPoisson();

    QVector<double> scPerCallDist();

    int tak;


private slots:


    void on_pwrLineEdit_textChanged(const QString &arg1);

    void on_bwLineEdit_textChanged(const QString &arg1);

    void on_totScLineEdit_textEdited(const QString &arg1);

    void on_drLineEdit_textChanged(const QString &arg1);

    void on_snrsLineEdit_textChanged(const QString &arg1);

    void on_maxCallScLineEdit_textChanged(const QString &arg1);

    void on_lLineEdit_textChanged(const QString &arg1);

    // void on_hLineEdit_textChanged(const QString &arg1);

    void on_aLineEdit_textChanged(const QString &arg1);

    void on_avSnrLineEdit_textChanged(const QString &arg1);

    void on_pushButton_clicked();

    void on_lRadioButton_toggled(bool checked);

    void on_avCallScLineEdit_textChanged(const QString &arg1);

    void on_scDistComboBox_currentIndexChanged(const QString &arg1);

    void on_gainDistComboBox_currentIndexChanged(const QString &arg1);

    void on_callDurDistComboBox_currentIndexChanged(const QString &arg1);

    void on_hMaxScLineEdit_textChanged(const QString &arg1);

    void on_hMaxLineEdit_textChanged(const QString &arg1);

private:
        Ui::MainWindow *ui; // Declaration of a pointer of type 'MainWindow' in the 'UI' namespace.

        // Boolean variables

        // Int variables
        int snrs, totSc, maxCallSc, totClasses;

        // Double variables
        double pwr, bw, dr, aOffSc, aTot, l, avCallSc , avSnr, hMax, hMaxSc;

        // String variables:
        QString scDist, callDurDist, gainDist;

        // Object variables
        QMessageBox msgBox;
        TableModel *inputTableModel;
        ScTableModel *scTablMdl;
        QVector<QString> inputTableHeader;
        Stochastic *stoch;

};

#endif // MAINWINDOW_H
