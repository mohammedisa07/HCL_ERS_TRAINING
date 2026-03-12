#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "\nMenu\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        int a, b;

        switch(choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << a + b << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << a - b << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << a * b << endl;
                break;

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while(choice != 4);

    return 0;
}