#include <iostream>
#include <vector>
using namespace std;

class Matrix3D {
    int d, r, c;
    vector<vector<vector<int>>> mat;
public:
    Matrix3D(int depth, int rows, int cols) : d(depth), r(rows), c(cols), mat(d, vector<vector<int>>(r, vector<int>(c))) {}
    void input() {
        cout << "Enter " << d*r*c << " elements:\n";
        for (int i = 0; i < d; ++i)
            for (int j = 0; j < r; ++j)
                for (int k = 0; k < c; ++k)
                    cin >> mat[i][j][k];
    }
    void print() {
        for (int i = 0; i < d; ++i) {
            cout << "Layer " << i+1 << ":\n";
            for (int j = 0; j < r; ++j) {
                for (int k = 0; k < c; ++k)
                    cout << mat[i][j][k] << " ";
                cout << "\n";
            }
            cout << "\n";
        }
    }
};
int main() {
    int d, r, c;
    cout << "Enter depth, rows, columns: ";
    cin >> d >> r >> c;

    Matrix3D m(d, r, c);
    m.input();
    cout << "3D Matrix:\n";
    m.print();
}
