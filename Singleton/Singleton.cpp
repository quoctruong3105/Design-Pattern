#include <iostream>
#include "Singleton.h"
using namespace std;

Singleton::Singleton() {
    cout << "Instance is created" << endl;
}

Singleton::~Singleton() {
    if(instance) {
       instance = nullptr; 
    }
    cout << "Instance is deleted" << endl;
}

Singleton* Singleton::instance = nullptr;

Singleton* Singleton::getInstance() {
    if(instance == nullptr) {
        instance = new Singleton();
    }
    return instance;
}