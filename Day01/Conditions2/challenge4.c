#include <stdio.h>
#include <stdlib.h>



int main(){

    int a,b;
    float c;

    printf("entrer Score (0 - 100):");
    scanf("%d", &a);

    printf("entrer nciennete (annees):");
    scanf("%d", &b);

    printf("entrer Recompenses (0 pour aucune, 1 pour une, 2 pour deux ou plus):");
    scanf("%f", &c);

    if(a >= 90 && b >= 5){
        printf("Excellente");
    } else if(a >= 75 && b >= 3){
        printf("Bonne");
    } else if(a >= 50 && b < 3){
        printf("Satisfaisante");
    } else if(a < 50) {
        printf("Insuffisante");
    } 

    if(c == 1) {
        printf("Recompense = %.2f", 0.1*c);
    }else if(c >= 2) {
        printf("Recompense = %.2f", 0.2*c);
    }


}