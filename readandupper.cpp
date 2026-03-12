#include <iostream>
using namespace std;

int main() {
    char str[100];
    int length = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);


    while (str[length] != '\0') {
        length++;
    }

    cout << "Length of the string: " << length << endl;


    for (int i = 0; i < length; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    cout << "Uppercase string: " << str << endl;

    return 0;
}