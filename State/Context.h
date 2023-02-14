#ifndef _CONTEXT_H_
#define _CONTEXT_H_
#include "State.h"

class Context {
private:
    State *state;
public:
    Context();
    void setState(State* state);
    State* getState();
};

#endif