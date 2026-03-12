#include <iostream>
using namespace std;

int main() {
    char str[100];
    int start = 0, end = 0;
    bool isPalindrome = true;

    cout << "Enter a string: ";
    cin >> str;

    while (str[end] != '\0') {
        end++;
    }
    end--;

    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        cout << "String is a Palindrome";
    else
        cout << "String is not a Palindrome";

    return 0;
}