/*
Question: Make a function named char_to_ascii() which will take a character as parameter and it will convert that character to ascii value and return through that function. So, the return type will be int. Now in the main function take a character input and call that function to get the integer value of it and print that in the main function.

Bonus: You can also try this with 4 different types of function use cases.

*/

#include <stdio.h>

void ascii(char a){
    if(a>=97 && a<=122){
        printf("%d",a); 
    }
    if(a>=65 && a<=90){
        printf("%d",a); 
    }
    if(a>=48 && a<=57){
        printf("%d",a); 
    }
}

int main()
{

    char a; 
    scanf("%c", &a); 

    ascii(a); 

    
    return 0;
}