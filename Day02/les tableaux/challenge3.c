
#include <stdio.h>

int main() {
    int i,b,a=0,j;
    
    printf("le nombre d'éléments:");
        scanf("%d",&b);
        int T[b];
        
    for(i=0;i<b;i++){
        printf("léléments %d:",i+1);
        scanf("%d",&T[i]);
    }
    
    for(j=0;j<b;j++){
        
        a+=T[j];
       
        
    }
    printf("%d",a);
    
    return 0;
}