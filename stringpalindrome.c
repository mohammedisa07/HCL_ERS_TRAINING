#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int start=0;


    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    int end=strlen(str)-1;
    while(start<end){
        if(!isalnum(str[start])){
            start++;
            
        }
        else if(!isalnum(str[end])){
            end--;

        }
        else{
            if (tolower (str[start])!=tolower (str[end])){
                printf("Not a palindrome");
                return 0;
            }
            start++;
            end--;
        }
        
        
    }
    printf("palindrome");
    return 0;    
    
}