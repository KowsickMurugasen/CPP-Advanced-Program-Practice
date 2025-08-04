#include <iostream>
#include <algorithm>
using namespace std;

class StringCheck {
private:
    string str;

public:
    void input() {
        cout << "Enter string: ";
        cin >> str;
    }

    inline string reverseStr() {
        string rev = str;
        reverse(rev.begin(), rev.end());
        return rev;
    }

    void checkPalindrome() {
        string rev = reverseStr();
        cout << "Reversed: " << rev << endl;
        if (rev == str) cout << "Palindrome\n";
        else cout << "Not Palindrome\n";
    }
};

int main() {
    StringCheck s;
    s.input();
    s.checkPalindrome();
}
