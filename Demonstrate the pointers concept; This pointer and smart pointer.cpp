#include <iostream>
#include <memory> // for smart pointers
using namespace std;

// Class with 'this' pointer
class Box {
    int length;
public:
    void setLength(int length) { this->length = length; } // 'this' pointer
    void show() { cout << "Length: " << this->length << endl; }
};

int main() {
    // 1. Basic pointer
    int x;
    cout << "Enter a number: ";
    cin >> x;
    int* ptr = &x;
    cout << "Pointer value: " << *ptr << "\n";

    // 2. 'this' pointer demo
    Box b;
    b.setLength(x);
    b.show();

    // 3. Smart pointer
    unique_ptr<int> smartPtr(new int(x * 2));
    cout << "Smart pointer value: " << *smartPtr << "\n";
}
