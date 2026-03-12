// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num1;
    int num2;
    
    printf("Enter the first integer: ");
    scanf("%d",&num1);
    
    printf("Enter the second integer: ");
    scanf("%d",&num2);
    
    int sum;
    int deference;
    int product;
    int quotient;
    
    sum=num1+num2;
    deference=num1-num2;
    product=num1*num2;
    if (num2!=0){
        quotient=num1/num2;
    }
    else{
        printf("There is no quotient");
    }
    printf("sum= %d\n",sum);
    printf("deference= %d\n",deference);
    printf("product= %d\n",product);
    printf("quotient= %d\n",quotient);
    
    
    

    return 0;
}