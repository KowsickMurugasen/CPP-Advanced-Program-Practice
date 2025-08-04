#include <iostream>
using namespace std;
class Singleton {
    static Singleton* instance;
    Singleton() { cout << "Singleton Created\n"; }
public:
    static Singleton* getInstance() {
        if (!instance)
            instance = new Singleton();
        return instance;
    }
    void showMessage() {
        cout << "Hello from Singleton!\n";
    }
};
Singleton* Singleton::instance = nullptr;
int main() {
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();
    s1->showMessage();
    // Verifying both pointers are same
    cout << "Are s1 and s2 the same? " << (s1 == s2 ? "Yes" : "No") << endl;
}
