#ifndef CIRCLE_H
#define CIRCLE_H

#include "gobject.h"

class Circle : public GObject
{
private:
    double _radius;

public:
    Circle();
    Circle(double radius);
    bool draw();
};

#endif // CIRCLE_H
