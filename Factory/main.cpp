#include "ShapeFactory.h"
using namespace std;

int main() {
    ShapeFactory *sf = new ShapeFactory();
    Shape *s1 = sf->getShape("circle");
    s1->draw();
    Shape *s2 = sf->getShape("square");
    s2->draw();
    Shape *s3 = sf->getShape("rectangle");
    s3->draw();
    
    return 0;
}