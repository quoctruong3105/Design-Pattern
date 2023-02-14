#ifndef _STOP_H_
#define _STOP_H_
#include "State.h"
#include "Context.h"
#include <string>
using namespace std;

class StopState : public State {
public:
    void doAction() override;
};

#endif