#ifndef _SUBJECT_H_
#define _SUBJECT_H_

class Observer;
class Message;
class Subject { 
public: 
    virtual void attach(Observer* ob) = 0;
    virtual void detach(Observer* ob) = 0;
    virtual void notify(Message* m) = 0;
};

#endif