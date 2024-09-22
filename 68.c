#include<stdio.h>
int main(){
    char s[50],*p,*q;
    int i;
    printf("Enter the string to be checked ");
    scanf("%s", &s);
    p = &s;
    q = p;
    // Reaching to the end of the string
     while(*p != '\0'){   //for(; *p!=0; p++);
          p++;
     }  
     p--;
    // Checking for palindrome
    while(p>q){
        if(*p!=*q){
            
            printf("The string is not palindrome");
            return 0;
        }
        p--;
        q++;
    } 
    printf("The string is a palindrome.");
    return 0;

}