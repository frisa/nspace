#ifndef DATAMODEL_H
#define DATAMODEL_H

#include <string>
#include "circle.h"

using namespace std;

class DataModel
{
private:
    string _path;
    GObject* _objects;
public:
    DataModel();
    bool loadDefaultDataMode();
    bool loadJSONDataModel(string path);
    bool saveJSONDataModel(string path);
};

#endif // DATAMODEL_H
