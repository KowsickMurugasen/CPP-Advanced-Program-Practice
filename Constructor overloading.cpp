#include <iostream>
using namespace std;
class Student {
    string name;
    int age;
public:
    Student() {
        name = "Unknown";
        age = 0;
    }
    Student(string n) {
        name = n;
        age = 0;
    }
    Student(string n, int a) {
        name = n;
        age = a;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    Student s1;                   
    Student s2("Alice");          
    Student s3("Bob", 20);        
    s1.display();
    s2.display();
    s3.display();
}

