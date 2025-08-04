#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void stackDemo() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Stack Top: " << s.top() << "\n";
    s.pop();
    cout << "Stack after pop: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << "\n";
}

void queueDemo() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << "Queue Front: " << q.front() << "\n";
    q.pop();
    cout << "Queue after pop: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";
}

int main() {
    cout << "--- Stack Demo ---\n";
    stackDemo();

    cout << "--- Queue Demo ---\n";
    queueDemo();
}
