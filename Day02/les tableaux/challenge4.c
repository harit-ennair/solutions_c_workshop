
#include <stdio.h>

int main() {
    int i,b,a=0,c;
    
    printf("le nombre d'éléments:");
        scanf("%d",&b);
        int T[b];
        
    for(i=0;i<b;i++){
        printf("léléments %d:",i+1);
        scanf("%d",&T[i]);
        
        c=T[i];
        if(a<c){
        a=c;
        }
    }
    
   
    printf("%d",a);
    
    return 0;
}