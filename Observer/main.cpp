#include "MessagePublisher.h"
#include "Subcriber1.h"
#include "Subcriber2.h"
#include "Subcriber3.h"
#include "Subcriber4.h"
#include <iostream>
using namespace std;

int main() {
    Subcriber1* s1 = new Subcriber1();
    Subcriber2* s2 = new Subcriber2();
    Subcriber3* s3 = new Subcriber3();
    Subcriber4* s4 = new Subcriber4();

    MessagePublisher* p = new MessagePublisher();
    p->attach(s1);
    p->attach(s2);
    p->attach(s1);
    p->notify(new Message("Nguyen Quoc Truong"));
    p->detach(s1);
    p->notify(new Message("Truong"));
}

