#ifndef _MESSAGE_
#define _MESSAGE_
#include <cstring>
using namespace std;
class Message {
private:   
    char a[50];
public:
    Message(const char* m) {
        strcpy(a, m);
    }
    char* getContent() {
        return a;
    }
};

#endif