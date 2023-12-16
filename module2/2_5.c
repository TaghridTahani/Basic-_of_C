#include<stdio.h>
int main(){

    int tk;
    scanf("%d",tk);
    if(tk==100)
    {
        printf("Burger khabo");

    }
    else if(100<tk<110){
        printf("Date e jabo");
    }
    else if (tk>=110){
        printf("pizza khabo");
    }
    else {
        printf("sharadin kichu khabo na");
    }

    return 0;
}