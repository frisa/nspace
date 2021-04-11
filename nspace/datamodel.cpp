#include "datamodel.h"

DataModel::DataModel()
{
    _objects = new Circle(2);
}

bool DataModel::loadDefaultDataMode()
{
    return true;
}

bool DataModel::loadJSONDataModel(string path)
{
    return true;
}

bool DataModel::saveJSONDataModel(string path)
{
    return true;
}
