#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    int *arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int;
        cin >> *arr[i];
    }
    for (int i = 0; i < n; i++) 
    cout << *arr[i] << ' ';
}
