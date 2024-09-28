
#include <stdio.h>

int main() {
    int i,b;
    
    printf("le nombre d'éléments:");
        scanf("%d",&b);
        int T[b];
        
    for(i=0;i<b;i++){
        printf("léléments %d:",i+1);
        scanf("%d",&T[i]);
    }
    
    for(i=0;i<b;i++){
        printf("%d\n",T[i]);
    }
    
    
    return 0;
}