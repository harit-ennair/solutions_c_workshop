#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, d;
    printf("Nombre total de jours de congés accordés :");
    scanf("%d", &a);
    
    printf("Nombre de jours de congés utilisés :");
    scanf("%d", &b);
    
    printf("\nStatut de l'employé (0 pour temps partiel, 1 pour temps plein) :");
    scanf("%d", &c);
    
    
    
    if(b > a) {
        printf("alerte");
        return 0;
    }
    
    if(c == 1){
        d = a - b;
            printf("jour(s) restant(s) = %dj", d);
    } else if (c == 0) {
        d = (a/2) - b;
            printf("jour(s) restant(s) = %dj", d);
    }
    
    return 0;
}