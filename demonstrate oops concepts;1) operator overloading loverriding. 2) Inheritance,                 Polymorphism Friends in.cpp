#include <iostream>
using namespace std;
class A {
protected: int x;
public:
    A(int a = 0) : x(a) {}
    A operator+(A b) { return A(x + b.x); }
    virtual void show() { cout << "A: " << x << endl; }
    friend void disp(A);
};
class B : public A {
    int y;
public:
    B(int a = 0, int b = 0) : A(a), y(b) {}
    void show() override { cout << "B: " << x << " " << y << endl; }
};
void disp(A a) { cout << "Friend: " << a.x << endl; }
int main() {
    int a, b, c; cin >> a >> b >> c;
    A a1(a), a2(b), a3 = a1 + a2; disp(a3);
    B b1(c, b); A* p = &b1; p->show();
}
