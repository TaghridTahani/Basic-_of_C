#include <stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",&s);
    int i=0,j=strlen(s)-1,count=1;
    while(i<j){
        if(s[i]==s[j]){
            i++;
            j--;
             
        }
        else if(s[i]!=s[j]){
            count=0;
            break;
        }
    }
    if(count ==1){
        printf("YES");
    }
    else if(count==0){
        printf("NO");
    }
    

    return 0;
}