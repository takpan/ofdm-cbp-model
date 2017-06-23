#ifndef TABLEMODEL_H
#define TABLEMODEL_H

#include <QAbstractTableModel>

class MainWindow; // forward declaration of 'MainWindow'

// When subclassing 'QAbstractTableModel' class, 'rowCount()', 'columnCount()', and 'data()' functions must be implemented.
//Default implementations of the 'index()' and 'parent()' functions are provided by 'QAbstractTableModel' class.
//Well behaved models will also implement headerData().
//Editable models need to implement 'setData()' function, and implement 'flags()' function to return a value containing Qt::ItemIsEditable.
class TableModel : public QAbstractTableModel
{
    Q_OBJECT

public:
    struct Input {
        QVector<int> servClass;
        QVector<int> bk;
        QVector<double> ak;
        QVector<double> gk;
        QVector<double> amk;
        QVector<double> prm;
    };

    TableModel(QObject *parent = 0);

    int rowCount(const QModelIndex &parent = QModelIndex()) const override; // override pure virtual 'rowCount' function

    int columnCount(const QModelIndex &parent = QModelIndex()) const override; // override pure virtual 'columnCount' function

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

    bool insertRows(int position, int rows, const QModelIndex &index = QModelIndex()) override; // inserts 'count' rows into the model before the given 'row'

    bool removeRows(int position, int rows, const QModelIndex &index = QModelIndex()) override;

    void setRowCount(int rows);

    bool setData(const QModelIndex &index, const QVariant &cellVal, int role = Qt::EditRole) override;

    QVariant headerData(int section, Qt::Orientation orientation, int role) const override;

    Input* getInputStruct();

    Qt::ItemFlags flags(const QModelIndex & index) const override ;

    void setScDist(QString scDist);

    void setGainDist(QString gainDist);


private:

    Input m_inputData;

    int arrRows, arrCols;

    QString scDist, gainDist;

    MainWindow *mw;
};

#endif // TABLEMODEL_H
