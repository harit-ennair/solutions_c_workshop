
#include <stdio.h>

int main() {
    // Write C code here
      float a;
    printf("Entrer la moyenne : "); 
    scanf("%f", &a);
    
    if(a <10){
        printf("recalé");
    }else if (a>=10 && a<12){
        printf("passable");
    }else if (a>=12 && a<14){
        printf("assez bien");
    }else if (a>=14 && a<16){
        printf("bien");
    }else  {
        printf("très bien");
    }

    return 0;
}