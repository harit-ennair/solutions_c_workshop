
#include <stdio.h>

int main() {
    // Write C code here
      float a,b,c;
    printf("Revenu annuel (en euros): "); 
    scanf("%f", &a);
    
    printf("Score de crédit (sur 1000): "); 
    scanf("%f", &b);
    
    printf("Durée du prêt (en années): "); 
    scanf("%f", &c);
    
    
    
    if(a >= 30000 && b >= 700 && c <= 10 ){
        printf("Éligible");
        
        
    }else if (a >= 30000 && b >= 650 && c <= 15 ){
        printf("passable");
        
        
        
    }else if (a < 30000 && b < 650 && c > 15){
        printf("Non éligible");
        
        
    }
    

    return 0;
}