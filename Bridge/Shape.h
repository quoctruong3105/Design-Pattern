#ifndef _SHAPE_
#define _SHAPE_
#include "DrawAPICircle.h"
#include "DrawAPISquare.h"

class Shape {
protected:
    DrawAPICircle* drawAPICircle;
    DrawAPISquare* drawAPISquare;
    Shape(DrawAPICircle* drawAPI);
    Shape(DrawAPISquare* drawAPI);
    
public: 
    virtual void draw() = 0;
};

#endif

