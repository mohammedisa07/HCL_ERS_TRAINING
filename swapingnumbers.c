#include <stdio.h>

int main() {
    int a=2;
    int b=4;
    printf("Before swapping:\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("After swapping:\n");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}