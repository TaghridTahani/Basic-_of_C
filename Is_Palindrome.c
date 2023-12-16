#include <stdio.h>
#include<string.h>
int is_palindrome(char s[1001])
{
    int count=1; 
    int i =0;
    int j =strlen(s)-1; 
    while(i<j)
    {
        if(s[i]==s[j])
        {
            count =1; 
            i++; 
            j--; 
        }
        else if(s[i]!=s[j])
        {
            count =0; 
            break; 
        }
    }
    return count; 

}
int main()
{
    char s[1001]; 
    scanf("%s",&s); 
    int x= is_palindrome(s); 
    if(x==1){
        printf("Palindrome"); 
    }
    else if(x==0){
        printf("Not Palindrome"); 
    }
    return 0;
}