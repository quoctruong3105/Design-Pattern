#include "Circle.h"
#include <iostream>
using namespace std;

Cirlce::Cirlce(int radius, DrawAPICircle* drawAPI)   
    : radius{radius}, Shape{drawAPI} {}

