#include "sctablemodel.h"

ScTableModel::ScTableModel(QObject *parent) :
    QAbstractTableModel(parent)
{
    arrCols = 4;
    arrRows = 0;
}

int ScTableModel::rowCount(const QModelIndex &parent) const
{
    return arrRows;
}

int ScTableModel::columnCount(const QModelIndex &parent) const
{
    return arrCols;
}

QVariant ScTableModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole)
    {
        if (orientation == Qt::Horizontal) {
            switch (section)
            {
            case 0:
                return QString("bk");
            case 1:
                return QString("λ");
            case 2:
                return QString("h");
            case 3:
                return QString("α");
            }
        }
    }
    return QVariant();
}

bool ScTableModel::insertRows(int position, int rows, const QModelIndex &index)
{
    beginInsertRows(index, position, position + rows - 1);

    for (int row = 0; row < rows; ++row)
    {
        m_inputScData.bk.insert(position, 0);
        m_inputScData.l.insert(position, 0);
        m_inputScData.h.insert(position, 0);
        m_inputScData.a.insert(position, 0);
    }

    endInsertRows();
    arrRows += rows;
    QModelIndex topLeft, bottomRight;
    topLeft = this->createIndex(0,0);
    bottomRight = this->createIndex(rows-1,3);
    emit dataChanged(topLeft, bottomRight);

    return true;
}

bool ScTableModel::removeRows(int position, int rows, const QModelIndex &index)
{
    beginRemoveRows(index, position, position + rows - 1);

    for (int row = 0; row < rows; ++row) {
        m_inputScData.bk.removeAt(position);
        m_inputScData.l.removeAt(position);
        m_inputScData.h.removeAt(position);
        m_inputScData.a.removeAt(position);

    }

    endRemoveRows();
    arrRows -= rows;
    return true;
}

QVariant ScTableModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if (index.row() >= m_inputScData.bk.size() || index.row() < 0)
        return QVariant();

    if (role == Qt::TextAlignmentRole)
        return Qt::AlignCenter;

    if (role == Qt::DisplayRole)
    {
        switch (index.column()) {
        case 0:
            if (!m_inputScData.bk[index.row()])
                return QVariant();
            else
                return m_inputScData.bk[index.row()];
            break;
        case 1:
            if (!m_inputScData.l[index.row()])
                return QVariant();
            else
                return m_inputScData.l[index.row()];
            break;
        case 2:
            if (!m_inputScData.h[index.row()])
                return QVariant();
            else
                return m_inputScData.h[index.row()];
            break;
        case 3:
            if (!m_inputScData.a[index.row()])
                return QVariant();
            else
                return m_inputScData.a[index.row()];
            break;
        default:
            break;
        }
    }
    return QVariant();
}

bool ScTableModel::setData(const QModelIndex &index, const QVariant &cellVal, int role)
{
    if (index.isValid() && role == Qt::EditRole) {
        int row = index.row();
        int col = index.column();

        switch (col) {
        case 0:
            m_inputScData.bk.replace(row, cellVal.toInt());
            break;
        case 1:
            m_inputScData.l.replace(row, cellVal.toDouble());
            break;
        case 2:
            m_inputScData.h.replace(row, cellVal.toDouble());
            break;
        case 3:
            m_inputScData.a.replace(row, cellVal.toDouble());
            break;
        default:
            break;
        }
        emit(dataChanged(index, index)); // When reimplementing the setData() function, this signal must be emitted explicitly.

        return true;
    }

    return false;
}

ScTableModel::InputSc* ScTableModel::getInputScStruct()
{
    return &m_inputScData;
}

