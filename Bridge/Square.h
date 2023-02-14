#ifndef _CILE_
#define _CILE_
#include "Shape.h"

class Square : public Shape {
private:
    int x, y;
public:
    Square(int x, int y,  DrawAPISquare* drawAPI);
    void draw() override {
        drawAPISquare->drawShape(this->x, this->y);
    }

};

#endif