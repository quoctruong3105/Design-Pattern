#include "Square.h"
#include <iostream>
using namespace std;

Square::Square(int x, int y, DrawAPISquare* drawAPI)   
    : x{x}, y{y}, Shape{drawAPI} {}

