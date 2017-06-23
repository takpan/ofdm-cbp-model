#ifndef SCTABLEMODEL_H
#define SCTABLEMODEL_H
#include <QAbstractTableModel>

class QAbstractTableModel;

class ScTableModel : public QAbstractTableModel
{
public:
    struct InputSc {
        QVector<int> bk;
        QVector<double> l;
        QVector<double> h;
        QVector<double> a;
    };

    ScTableModel(QObject *parent = 0);

    int rowCount(const QModelIndex &parent = QModelIndex()) const override; // override pure virtual 'rowCount' function

    int columnCount(const QModelIndex &parent = QModelIndex()) const override; // override pure virtual 'columnCount' function

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

    bool insertRows(int position, int rows, const QModelIndex &index = QModelIndex()) override; // inserts 'count' rows into the model before the given 'row'

    bool removeRows(int position, int rows, const QModelIndex &index = QModelIndex()) override;

    //void setRowCount(int rows);

    bool setData(const QModelIndex &index, const QVariant &cellVal, int role = Qt::EditRole) override;

    QVariant headerData(int section, Qt::Orientation orientation, int role) const override;

    InputSc* getInputScStruct();

private:
    int arrRows, arrCols;

    InputSc m_inputScData;
};

#endif // SCTABLEMODEL_H
