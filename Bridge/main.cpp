#include <iostream>
#include "Circle.h"
#include "RedCircle.h"
#include "GreenCircle.h"
#include "BlackSquare.h"
#include "Square.h"

using namespace std;

int main() {
    Shape *greenCircle = new Cirlce(100, new GreenCircle());
    greenCircle->draw();
    Shape *redCircle = new Cirlce(155, new RedCircle());
    redCircle->draw();

    Shape *blackS = new Square(1, 2, new BlackSquare());
    blackS->draw();
    return 0;
}