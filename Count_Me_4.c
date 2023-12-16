#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s;
    int count[26]={0};

    while(scanf("%c",&s)!=EOF){
        count[s-97]++;

    }
    for(int i=0; i<26; i++){
        if(count[i]!=0){
            printf("%c - %d\n",i+97, count[i]);
        }
    }
     
    return 0;
}
