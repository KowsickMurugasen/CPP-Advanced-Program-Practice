#include <iostream>
using namespace std;
class Person {
public:
    string name;
    void getName() { cout << "Enter name: "; cin >> name; }
};
class Student : public Person {
public:
    int id;
    void getID() { cout << "Enter ID: "; cin >> id; }
};
class Result : public Student {
public:
    float marks;
    void getMarks() { cout << "Enter marks: "; cin >> marks; }
    void show() {
        cout << "Name: " << name << ", ID: " << id << ", Marks: " << marks << endl;
    }
};
int main() {
    Result r;
    r.getName();
    r.getID();
    r.getMarks();
    r.show();
}
