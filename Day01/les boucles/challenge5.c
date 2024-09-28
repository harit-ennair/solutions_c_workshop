
#include <stdio.h>

int main() {
    
    int i,n,j,b=1;
    
    printf("entre base :");
    scanf("%d" , &n);
    
    printf("entre exposant :");
    scanf("%d" , &j);
    
    for(i=0;i<j;i++){
       
     b=b*n;
     
    }
    printf ("%d",b);
    

    return 0;
}