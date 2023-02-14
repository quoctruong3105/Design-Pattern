#include "ShapeFactory.h"
using namespace std;

Shape* ShapeFactory::getShape(string shapeType) {
    if(shapeType == "circle") {
        return new Circle();
    }
    else if(shapeType == "rectangle") {
        return new Rectangle();
    }
    else if(shapeType == "square") {
        return new Square();
    }
    else {
        return nullptr;
    }
}