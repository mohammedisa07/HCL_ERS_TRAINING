#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;

    cout << "Enter password: ";
    cin >> password;

    if(password.length() > 8) {
        cout << "Valid password (length greater than 8)" << endl;
    }
    else {
        cout << "Invalid password (length must be greater than 8)" << endl;
    }

    return 0;
}