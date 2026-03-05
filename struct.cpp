// Name: Liam
//Age: 35
//Grade: A
#include <iostream>
using namespace std;
struct Student{
    string name;
    int age;
    char grade;
        
};
int main() {
    Student s1;
    s1.name="John";
    s1.age=19;
    s1.grade='A';
    cout<<"Name:"<<s1.name<<endl;
    cout<<"Age:"<<s1.age<<endl;
    cout<<"Grade:"<<s1.grade<<endl;
    Student s2;
    s2.name="Liam";
    s2.age=29;
    s2.grade='B';
    cout<<"Name:"<<s2.name<<endl;
    cout<<"Age:"<<s2.age<<endl;
    cout<<"Grade:"<<s2.grade<<endl;
    
}