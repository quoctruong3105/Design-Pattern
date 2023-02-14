#include "Shape.h"
using namespace std;

Shape::Shape(DrawAPICircle* drawAPI) 
    : drawAPICircle{drawAPI} {}

Shape::Shape(DrawAPISquare* drawAPI) 
    : drawAPISquare{drawAPI} {}