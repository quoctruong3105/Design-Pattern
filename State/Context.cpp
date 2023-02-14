#include "Context.h"
#include <iostream>
using namespace std;

Context::Context() 
    : state{} {
}

void Context::setState(State* state) {
    this->state = state;
}

State* Context::getState(){
    return state;
}