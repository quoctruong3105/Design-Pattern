#ifndef _SHAPE_FACTORY_
#define _SHAPE_FACTORY_
#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include <string>

class ShapeFactory {
public:
    Shape* getShape(string shapeType);
};


#endif

