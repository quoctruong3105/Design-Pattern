#ifndef _SUB1_
#define _SUB1_
#include "Observer.h"
#include "Message.h"
#include <iostream>
using namespace std;

class Subcriber1 : public Observer {
public:
    void update(Message* m) {
        cout << "Subriber1: " << m->getContent() << endl;
    }
};

#endif
