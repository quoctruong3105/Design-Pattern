#include "StartState.h"
#include "StopState.h"
#include "Context.h"
#include <iostream>
using namespace std;

int main() {    
    Context *context = new Context();
    StartState *start = new StartState();
    context->setState(start);
    (context->getState())->doAction();

    StopState*stop = new StopState();
    context->setState(stop);
    (context->getState())->doAction();

    return 0;
}