#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int n, x;
    cout << "Enter number of elements: ";
    cin >> n;
    while (n--) cin >> x, v.push_back(x);

    cout << "Forward: ";
    for (auto it = v.begin(); it != v.end(); ++it) cout << *it << " ";

    cout << "\nReverse: ";
    for (auto it = v.rbegin(); it != v.rend(); ++it) cout << *it << " ";
}
