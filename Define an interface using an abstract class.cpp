#include <iostream>
using namespace std;

// Interface
class Device {
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual ~Device() {} // Virtual destructor
};

// Concrete class implementing the interface
class Fan : public Device {
public:
    void turnOn() override { cout << "Fan turned ON\n"; }
    void turnOff() override { cout << "Fan turned OFF\n"; }
};

int main() {
    Device* d = new Fan(); // Interface pointer
    d->turnOn();
    d->turnOff();
    delete d;
}
