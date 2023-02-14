#ifndef _SUB4_
#define _SUB4_
#include "Observer.h"
#include "Message.h"
#include <iostream>
using namespace std;

class Subcriber4 : public Observer {
public:
    void update(Message *m) {
        cout << "Subriber4: " << m->getContent() << endl;
    }
};

#endif
