#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,Tiger,pathan; 
    int n;
    scanf("%d",&t); 
    for(int i=0; i<t; i++){
         
        scanf("%d",&n);   
        char s[n]; 
        scanf("%s",&s); 
        for(int j=0; j<n; j++){
            if(s[j]=='T'){
                Tiger++; 
            }
            else if(s[j]=='P'){
                pathan++; 
            }
        }
        if(Tiger > pathan){
            printf("Tiger\n"); 
        }
        if(Tiger < pathan){
            printf("Pathaan\n"); 
        }
        if(Tiger == pathan){
            printf("Draw\n"); 
        }
        Tiger=0,pathan=0;
    }    
    return 0;
}
