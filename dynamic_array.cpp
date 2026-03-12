#include <iostream>
using namespace std;

int main() {
    int capacity = 2;
    int size = 0;
    int* arr = new int[capacity];
    int value;

    while (true) {
        cout << "Enter number (-1 to stop): ";
        cin >> value;

        if (value == -1)
            break;

        if (size == capacity) {
            capacity = capacity * 2;
            int* temp = new int[capacity];

            for (int i = 0; i < size; i++) {
                temp[i] = arr[i];
            }

            delete[] arr;
            arr = temp;
        }

        arr[size] = value;
        size++;
    }

    cout << "\nElements in dynamic array:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}