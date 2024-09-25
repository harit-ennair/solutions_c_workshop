#include <stdbool.h>
#include <stdio.h>

int main() {
    
    int a,b;
    
    printf("\nentrer une annee :");
    scanf("%d",&a);
    
    
    printf("Voici le Menu de Conversion :");
    printf("\n=============================");
    printf("\n1 - Coversion en mois");
    printf("\n2 - Coversion en jours");
    printf("\n3 - Coversion en heures");
    printf("\n4 - Coversion en minutes");
    printf("\n5 - Coversion en secondes");
    printf("\n=============================");
    printf("\nentrer une choix :");
    scanf("%d",&b);
    
    switch(b){
        case 1: printf("Conversion en Mois : %d", a*12);
        break;
        case 2: printf("Conversion en Jours : %d", a*365);
        break;
        case 3: printf("Conversion en Heures : %d", a*365*24);
        break;
        case 4: printf("Conversion en Minutes : %d", a*365*24*60);
        break;
        case 5: printf("Conversion en Seconds : %d", a*365*24*3600);
        break;
    }

    return 0;
}
