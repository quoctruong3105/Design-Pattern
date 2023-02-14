#ifndef _SUB3_
#define _SUB3_
#include "Observer.h"
#include "Message.h"
#include <iostream>
using namespace std;

class Subcriber3 : public Observer {
public:
    void update(Message *m) {
        cout << "Subriber3: " << m->getContent() << endl;
    }
};

#endif
