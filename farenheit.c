#include <stdio.h>

int main() {
    float celsius;
    float farenheit;
    
    printf("Enter celsius :");
    scanf("%f",&celsius);
    
    farenheit=(celsius*9/5)+32;
    printf("%f",farenheit);

    return 0;
}