#include <iostream>
#include <initializer_list>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int* data;

public:
    Matrix(int r, int c) {
        rows = r;
        cols = c;
        data = new int[rows * cols]{0};
    }

    Matrix(int r, int c, initializer_list<int> list) {
        rows = r;
        cols = c;
        data = new int[rows * cols];

        int i = 0;
        for (int val : list) {
            if (i < rows * cols)
                data[i++] = val;
        }

        while (i < rows * cols) {
            data[i++] = 0;
        }
    }

    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << data[i * cols + j] << " ";
            }
            cout << endl;
        }
    }

    ~Matrix() {
        delete[] data;
        cout << "Matrix memory freed\n";
    }
};

int main() {
    Matrix m1(2, 2);
    cout << "Matrix m1:\n";
    m1.display();

    Matrix m2(2, 3, {1, 2, 3, 4, 5, 6});
    cout << "\nMatrix m2:\n";
    m2.display();

    Matrix m3{3, 2, {7, 8, 9, 10, 11, 12}};
    cout << "\nMatrix m3:\n";
    m3.display();

    return 0;
}