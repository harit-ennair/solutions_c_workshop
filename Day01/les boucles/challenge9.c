
#include <stdio.h>

int main() {
    
    int i,n,j;
    
    printf("entre n :");
    scanf("%d" , &n);
    
    while(n>0){
     
     n=n/10;
     
     i++;
     
    }
    printf ("%d",i);
    

    return 0;
}