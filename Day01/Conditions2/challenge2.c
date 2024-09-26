
#include <stdio.h>

int main() {
    // Write C code here
    int a,b,c,e;
    float d,f,g;
    e=3000;
    
    printf("Âge du conducteur (en années) :");
    scanf("%d",&a);
    
    printf("\n1 pour sportive \n2 pour utilitaire \n3 pour familiale \nType de voiture:");
    scanf("%d",&b);
    
    printf("Nombre d'accidents au cours des 5 dernières années :");
    scanf("%d",&c);
    
    if(a<25){
        d=e*1.5;
    }else if(a>=25 && a<65){
        d=e;
    }else{
        d=e*1.2;
    }
    
    switch(b){
        
        case 1:
              f=d*2;
              break;
        case 2:
              f=d*1.2;
              break;
        case 3:
              f=d*1.1;
              break;
        default:
               printf("Type de voiture faux");
    }
    
    if(c>1){
        g=f+f*0.3;
        printf("Prime d'Assurance Auto : %.2f",g);
        
    }else {
        printf("Prime d'Assurance Auto  : %.2f",f);
    }
        
    
    
    
    

    return 0;
}