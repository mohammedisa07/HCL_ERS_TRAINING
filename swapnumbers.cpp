#include <iostream>
using namespace std;
void swap(int &x, int &y){
    int z=x;
    x=y;
    y=z;
}
int main(){
    int a=10;
    int b=20;
    cout<<"Before swapping:a="<<a<<"b="<<b<<endl;
    swap(a,b);
    cout<<"After swapping:a="<<a<<"b="<<b<<endl;
}