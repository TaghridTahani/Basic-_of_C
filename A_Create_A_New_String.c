#include <stdio.h>
#include<string.h>
int main()
{
    char s[1000],t[1000];
    scanf("%s %s",s,t);
    int lens= strlen(s);
    int lent= strlen(t);
    printf("%d %d\n",lens,lent);
    printf("%s %s",s,t);
    


    return 0;
}