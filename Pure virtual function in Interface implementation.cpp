#include <iostream>
using namespace std;

// Interface
class Shape {
public:
    virtual void area() = 0; // pure virtual
};

// Derived class
class Circle : public Shape {
    float r;
public:
    Circle(float radius) : r(radius) {}
    void area() override { cout << "Area: " << 3.14f * r * r << endl; }
};

int main() {
    float r;
    cout << "Enter radius: ";
    cin >> r;
    Shape* s = new Circle(r); // Interface pointer
    s->area();
    delete s;
}
