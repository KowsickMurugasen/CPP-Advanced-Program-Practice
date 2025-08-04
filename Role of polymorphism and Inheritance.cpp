#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() { cout << "Some sound\n"; }
};

class Dog : public Animal {
public:
    void sound() override { cout << "Woof!\n"; }
};

class Cat : public Animal {
public:
    void sound() override { cout << "Meow!\n"; }
};

int main() {
    Animal* a;
    int choice;
    cout << "Enter 1 for Dog, 2 for Cat: ";
    cin >> choice;
    if (choice == 1) a = new Dog();
    else a = new Cat();
    a->sound(); // Polymorphic call
    delete a;
}
