#include "tablemodel.h"
#include "mainwindow.h"

TableModel::TableModel(QObject *parent) :
    QAbstractTableModel(parent)
{
    arrCols = 6;
    arrRows = 0;

}

int TableModel::rowCount(const QModelIndex &parent) const
{
   return arrRows;
}

int TableModel::columnCount(const QModelIndex &parent) const
{
    return arrCols;
}

QVariant TableModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if (index.row() >= m_inputData.servClass.size() || index.row() < 0)
        return QVariant();

    if (role == Qt::TextAlignmentRole)
        return Qt::AlignCenter;

    if (role == Qt::DisplayRole)
    {
        switch (index.column()) {
        case 0:
            if (!m_inputData.servClass[index.row()])
                return "";
            return index.row() + 1;
            break;
        case 1:
            if (!m_inputData.bk[index.row()])
                return QVariant();
            else
                return m_inputData.bk[index.row()];
            break;
        case 2:
            if (!m_inputData.ak[index.row()])
                return QVariant();
            return m_inputData.ak[index.row()];
            break;
        case 3:
            if (!m_inputData.gk[index.row()])
                return QVariant();
            return m_inputData.gk[index.row()];
            break;
        case 4:
            if (!m_inputData.amk[index.row()])
                return QVariant();
            return m_inputData.amk[index.row()];
            break;
        case 5:
            if (!m_inputData.prm[index.row()])
                return QVariant();
            return m_inputData.prm[index.row()];
            break;
        default:
            break;
        }
    }
    return QVariant();
}

void TableModel::setRowCount(int rows)
{
    arrRows = rows;
}

bool TableModel::insertRows(int position, int rows, const QModelIndex &index)
{
    beginInsertRows(QModelIndex(), position, position + rows - 1);

    for (int row = 0; row < rows; ++row)
    {
        m_inputData.servClass.insert(position, row + 1);
        setData(index, row + 1);
        m_inputData.bk.insert(position, 0);
        m_inputData.ak.insert(position, 0);
        m_inputData.gk.insert(position, 0);
        m_inputData.amk.insert(position, 0);
        m_inputData.prm.insert(position, 0);
    }

    endInsertRows();
    arrRows += rows;
    QModelIndex topLeft, bottomRight;
    topLeft = this->createIndex(0,0);
    bottomRight = this->createIndex(rows-1,3);
    emit dataChanged(topLeft, bottomRight);

    return true;

}

bool TableModel::removeRows(int position, int rows, const QModelIndex &index)
{
    beginRemoveRows(index, position, position + rows - 1);

    for (int row = 0; row < rows; ++row) {
        m_inputData.servClass.removeAt(position);
        m_inputData.bk.removeAt(position);
        m_inputData.ak.removeAt(position);
        m_inputData.gk.removeAt(position);
        m_inputData.amk.removeAt(position);
        m_inputData.prm.removeAt(position);
    }

    endRemoveRows();
    arrRows -= rows;
    return true;
}

bool TableModel::setData(const QModelIndex &index, const QVariant &cellVal, int role)
{
    if (index.isValid() && role == Qt::EditRole) {
        int row = index.row();
        int col = index.column();

        switch (col) {
        case 0:
            m_inputData.servClass.replace(row, cellVal.toInt());
            break;
        case 1:
            m_inputData.bk.replace(row, cellVal.toInt());
            break;
        case 2:
            m_inputData.ak.replace(row, cellVal.toDouble());
            break;
        case 3:
            m_inputData.gk.replace(row, cellVal.toDouble());
            break;
        case 4:
            m_inputData.amk.replace(row, cellVal.toDouble());
            break;
        case 5:
            m_inputData.prm.replace(row, cellVal.toDouble());
            break;
        default:
            break;
        }
        emit(dataChanged(index, index)); // When reimplementing the setData() function, this signal must be emitted explicitly.

        return true;
    }

    return false;
}

QVariant TableModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole)
    {
        if (orientation == Qt::Horizontal) {
            switch (section)
            {
            case 0:
                return QString("Call type");
            case 1:
                return QString("bk");
            case 2:
                return QString("ak");
            case 3:
                return QString("gm");
            case 4:
                return QString("amk");
            case 5:
                return QString("pR,m");
            }
        }
    }
    return QVariant();
}

TableModel::Input* TableModel::getInputStruct()
{
    return &m_inputData;
}

Qt::ItemFlags TableModel::flags(const QModelIndex &index) const
{
    if (scDist == "Add values manually" && index.column() == 2)
        return Qt::ItemIsEditable | QAbstractTableModel::flags(index);
    else if (gainDist == "Add values manually" && index.column() == 3)
        return Qt::ItemIsEditable | QAbstractTableModel::flags(index);
    else
        return QAbstractTableModel::flags(index);
}

void TableModel::setScDist(QString scDist)
{
    this->scDist = scDist;
}

void TableModel::setGainDist(QString gainDist)
{
    this->gainDist = gainDist;
}


