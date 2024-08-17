#include <iostream>

class Base {
public:
    virtual ~Base() {
        std::cout << "Base destructor called" << std::endl;
        // Calling a virtual function inside the base class destructor
        this->virtualFunc();
    }

    virtual void virtualFunc() {
        std::cout << "Base virtual function" << std::endl;
    }
};

class Derived : public Base {
public:
    ~Derived() override {
        std::cout << "Derived destructor called" << std::endl;
        this->virtualFunc();
    }

    void virtualFunc() override {
        std::cout << "Derived virtual function" << std::endl;
    }
};

int main() {
    Base* obj = new Derived();
    delete obj;
    return 0;
}
