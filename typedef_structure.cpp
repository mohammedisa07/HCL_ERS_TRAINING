#include <iostream>
using namespace std;

typedef struct {
    int id;
    string name;
    float marks;
} Student;

int main() {
    Student s;

    cout << "Enter Student ID: ";
    cin >> s.id;

    cout << "Enter Student Name: ";
    cin >> s.name;

    cout << "Enter Marks: ";
    cin >> s.marks;

    cout << "\nStudent Details\n";
    cout << "ID: " << s.id << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}