#include <iostream>
using namespace std;

class Singleton {
private:
    static Singleton* instance;
    Singleton();
    ~Singleton();
public:
    static Singleton* getInstance();
};