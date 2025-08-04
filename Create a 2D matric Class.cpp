#include <iostream>
#include <vector>
using namespace std;

class Matrix2D {
    int r, c;
    vector<vector<int>> mat;
public:
    Matrix2D(int rows, int cols) : r(rows), c(cols), mat(r, vector<int>(c)) {}
    void input() {
        cout << "Enter " << r * c << " elements:\n";
        for (auto& row : mat)
            for (int& x : row) cin >> x;
    }
    void print() {
        for (auto& row : mat) {
            for (int x : row) cout << x << " ";
            cout << "\n";
        }
    }
};

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;
    Matrix2D m(r, c);
    m.input();
    cout << "Matrix:\n";
    m.print();
}
