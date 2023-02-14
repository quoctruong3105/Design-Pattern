#ifndef _OBSERVER_H_
#define _OBSERVER_H_
#include "Message.h"
class Observer {
public:
    virtual void update(Message* m) = 0;
};

#endif