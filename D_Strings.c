#include <stdio.h>
#include<string.h>
int main()
{
    char a[11],b[11],c[22];
    int temp; 
    scanf("%s %s",&a,&b);
    printf("%d %d\n",strlen(a),strlen(b));
    for(int i=0; i<strlen(a);i++){
        c[i]=a[i];
    }
    int i=strlen(a);
    for(int j=0; j<strlen(b); j++){
        c[i]=b[j];
        i++;
    }
    
    for(int i=0; i<(strlen(a)+strlen(b)); i++){
        printf("%c",c[i]);

    }
   
    temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    printf("\n%s %s",a,b);
    return 0;
}