#include <iostream>
#include <string>

class Animal {
public:
    virtual void speak() = 0; // 纯虚函数
};

class Dog : public Animal {
public:
    void speak() override {
        std::cout << "woo" << std::endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        std::cout << "meow" << std::endl;
    }
};

int main() {
    Animal* a = new Dog();
    Animal* b = new Cat();

    a->speak(); // 输出：woo
    b->speak(); // 输出：meow

    delete a;
    delete b;

    return 0;
}
