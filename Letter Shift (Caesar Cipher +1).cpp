#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    for (char &c : s)
        if (isalpha(c))
            c = (c == 'z' ? 'a' : c == 'Z' ? 'A' : c + 1);

    cout << "Shifted string: " << s;
}
