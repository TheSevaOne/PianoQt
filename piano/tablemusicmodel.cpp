#include "tablemusicmodel.h"

class TableMusicModelData : public QSharedData
{
public:

};

TableMusicModel::TableMusicModel() : data(new TableMusicModelData)
{










}



TableMusicModel::TableMusicModel(const TableMusicModel &rhs) : data(rhs.data)
{

}




TableMusicModel &TableMusicModel::operator=(const TableMusicModel &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

TableMusicModel::~TableMusicModel()
{

}
