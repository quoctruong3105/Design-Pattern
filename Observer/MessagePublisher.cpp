#include "MessagePublisher.h"
#include <iostream>
using namespace std;

void MessagePublisher::attach(Observer* ob) {
    int i;
    for(i = 0; i < observers.size(); i++) {
        if(observers.at(i) == ob) {
            break;
        }
    }
    if(i == observers.size()) {
        observers.push_back(ob);
        cout << "Subcribe successfully!" << endl;
    }
    else {
        cout << "This Object has been being a Subcribers!" << endl;
    }
}

void MessagePublisher::detach(Observer *ob) {
    int i;
    for (i = 0; i < observers.size(); i++) {
        if(observers.at(i) == ob) {
            break;
        }
    }
    observers.erase(observers.begin() + i);
}

void MessagePublisher::notify(Message *m) {
    for(size_t i = 0; i < observers.size(); i++) {
        observers.at(i)->update(m);
    }
} 