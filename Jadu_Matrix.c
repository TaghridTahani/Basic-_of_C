 #include <stdio.h>
 int main()
 {
     int n,m; 
     int flag=1; 
     scanf("%d %d",&n,&m); 
     int a[n][m]; 
     if(n!=m){
        flag=0; 
     }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&a[i][j]); 
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i==j || (i+j)==(n-1)){
                if(a[i][j]!=1){
                    flag=0; 
                }
                
            } 
            else if(a[i][j]!=0){
                flag=0; 
            }
            
        }
    

    }
    if(flag==1){
    printf("YES"); 
    }
    else if(flag==0){
    printf("NO"); 
    }


     return 0;
 }