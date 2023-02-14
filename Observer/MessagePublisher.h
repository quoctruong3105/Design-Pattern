#ifndef _MESSAGE_PUB_H_
#define _MESSAGE_PUB_H_
#include "Subject.h"
#include "Observer.h"
#include "Message.h"
#include <vector>
using namespace std;

class MessagePublisher : public Subject {
private:
    vector<Observer*> observers;
public: 
    void attach(Observer* ob) override;
    void detach(Observer* ob) override;
    void notify(Message* m) override;
};


#endif