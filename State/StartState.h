#ifndef _START_H_
#define _START_H_
#include "State.h"
#include "Context.h"
#include <string>
using namespace std;

class StartState : public State {
public:
    void doAction() override;
};

#endif