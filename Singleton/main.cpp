#include "Singleton.h"
#include "iostream"
using namespace std;

int main() {
    Singleton *inst1 = Singleton::getInstance();
    Singleton *inst2 = Singleton::getInstance();
    cout << inst1 << endl;
    cout << inst2 << endl;

    return 0;
}