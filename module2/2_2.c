#include<stdio.h>
int main()
{
    //!= not equal
    //== equal 
    //greater than >
    //less than 
    //less equal <= 
    // greater equal >=
    int a , b; 
    printf("Enter two number : ");
    scanf("%d %d", &a, &b);
    if(a==b){
        printf("equal");
    }
    else if(a>b)
    {
        printf("Greater");
    }
    else if(a<b)
    {
        printf("less");
    }
    else 
    {
        printf("Baal diso input e");
    }

    return 0; 
}