#include <stdio.h>
 
// return + parameter 
    // 10+20=30
    // return_type name(parameter)
    // {
    //     code 
    //     return what? 
    // }

 int sum(int a, int b)
    {
        //code
        int sum=a+b; 
        return sum; 
        
    }

/*
********REturn+No Parameter


*/
int sum2(/*void*/)
{
    int x, y; 
    scanf("%d %d",&x, &y);
    int sum2=x+y; 
    return sum2; 

}


/*
******* No return+ Parameter 
*/
void sum3(int c, int d)
{
    int s3= c+d; 
    printf("\n%d", s3);
    //return; == the code return to where it was called from 
 
}
/*
No return + No parameter 
*/

void sum4()
{
    int g, f; 
    scanf("%d %d", &g, &f); 
    int s4= g+f; 
    printf("%d",s4); 
}

int main()
{

    int x=sum(3,4);
    //printf("%d\n",x);
    //printf("%d\n",sum(100,300));
    //printf("%d", sum2());
    //sum3(55,5);
    sum4();
    return 0;
}