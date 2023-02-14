#ifndef _CIRCLE_
#define _CIRCLE_
#include "Shape.h"

class Cirlce : public Shape {
private:
    int radius;
public:
    Cirlce(int radius, DrawAPICircle* drawAPI);
    void draw() override {
        drawAPICircle->drawShape(this->radius);
    }

};

#endif