#ifndef _SUB2_
#define _SUB2_
#include "Observer.h"
#include "Message.h"
#include <iostream>
using namespace std;

class Subcriber2 : public Observer {
public:
    void update(Message *m) {
        cout << "Subriber2: " << m->getContent() << endl;
    }
};

#endif
