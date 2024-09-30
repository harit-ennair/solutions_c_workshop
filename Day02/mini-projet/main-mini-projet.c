#include <stdio.h>
#include <stdlib.h>
#include "fonction.c"

int main()
{
    int choix ;
    do
    {
        printf("\nMenu: \n");
        printf("1. Ajouter des livres\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Rechercher un livre\n");
        printf("4. Mettre a jour la quantite d'un livre\n");
        printf("5. Rechercher et supprimer un livre\n");
        printf("6. Afficher nombre Totale des livres\n");
        printf("7. Quitter\n");
        printf("Choix ? : ");
        scanf("%d", &choix);


        switch (choix)
        {
        case 1:
        {
            system("cls");
             ajoute ();
        }
        break;


        case 2:
        {
            system("cls");
             Affichage ();
        }
        break;

        case 3:
        {
            system("cls");
             ChercherUnLivre ();
        }
        break;

        case 4:
        {       
            system("cls");
             Modification();
        }
        break;

        case 5:
        {
            system("cls");
             Suppression();
        }
        break;

        case 6:
        {   
            system("cls");
            printf("Le Nombre Totale des Livres est : %d", nbr);
        }
        break;

        case 7:
        {
            system("cls");
            return 1;
        }
        break;

        default: system("cls"); printf(" Choix Invalide");
            break;
        }

    } while (choix < 7);


    return 0;
}