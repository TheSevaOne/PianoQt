#ifndef TABLEMUSICMODEL_H
#define TABLEMUSICMODEL_H

#include <QMainWindow>
#include <QObject>
#include <QSharedDataPointer>
#include <QWidget>

class TableMusicModelData;

class TableMusicModel
{
public:
    TableMusicModel();
    TableMusicModel(const TableMusicModel &);
    TableMusicModel &operator=(const TableMusicModel &);
    ~TableMusicModel();

private:
    QSharedDataPointer<TableMusicModelData> data;
};

#endif // TABLEMUSICMODEL_H
