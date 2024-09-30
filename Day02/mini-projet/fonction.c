#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "vareable.h"
#include "hedar.h"


void ajoute (){

            int ajout;
            printf("antrer Nombre de livres a ajouter : ");
            scanf("%d", &ajout);

            printf("====================== Ajout =====================\n");

            for(int i=nbr;i< nbr + ajout;i++){
                printf("Titre : ");
                scanf(" %[^\n]", titre[i]);
                printf("Auteur : ");
                scanf(" %[^\n]", auteur[i]);
                printf("Prix : ");
                scanf("%f", &prix[i]);
                printf("Quantite : ");
                scanf("%d", &quantite[i]);
                printf("\n");
            }
            nbr += ajout;

}
void Affichage (){

            if(nbr == 0) {
                printf("pas de livres dans Stock");
            } else {
                printf("===================== Afficher Le Stock ======================\n");
    for(int i=0;i< nbr;i++){
        
                printf("Titre : %s\n", titre[i]);
                printf("Auteur : %s\n", auteur[i]);
                printf("Prix : %.2f\n", prix[i]);
                printf("Quantite : %d\n", quantite[i]);
                printf("\n");
                           }
            }
}
void ChercherUnLivre (){
            char chercher[100];
                int found = 0;
                printf("===================== Chercher Un Livre ======================\n");
                printf("Titre : ");
                scanf(" %[^\n]", chercher);

                for (int i = 0; i < nbr; i++)
                {
                    if(strcmp(titre[i], chercher) == 0){
                        system("cls");
                        printf("---------- Livre est Trouve ----------\n");
                        printf("Titre : %s\n", titre[i]);
                        printf("Auteur : %s\n", auteur[i]);
                        printf("Prix : %.2f\n", prix[i]);
                        printf("Quantite : %d\n", quantite[i]);
                        found=1;
                        break;
                    }
                }

                if(!found) printf("Livre pas Trouve");

}
void Modification(){
            char chercher[100];
                int found = 0;
                printf("===================== Chercher Un Livre ======================\n");
                printf("Titre : ");
                scanf(" %[^\n]", chercher);

                for (int i = 0; i < nbr; i++)
                {
                    if(strcmp(titre[i], chercher) == 0){
                        system("cls");
                        printf("---------- Livre est Trouve ----------\n");
                        printf("Titre : %s\n", titre[i]);
                        printf("Auteur : %s\n", auteur[i]);
                        printf("Prix : %.2f\n", prix[i]);
                        printf("Quantite : %d\n", quantite[i]);
                        found=1;
                        printf("===================== Modification ======================\n");
                        int mod;
                        printf("Donne Moi la Nouvelle Quantite :");
                        scanf("%d", &mod);

                        quantite[i] = mod;
                    }

                }


                if(!found) printf("Livre pas Trouve");
}
void Suppression(){
            char chercher[100];
                int found = 0;
                printf("===================== Suppression ======================\n");
                printf("Titre : ");
                scanf(" %[^\n]", chercher);

                for (int i = 0; i < nbr; i++)
                {
                    if(strcmp(titre[i], chercher) == 0){
                        found=1;

                        for(int j=0;j<nbr - 1;j++){
                        strcpy(titre[j], titre[j+1]);
                        strcpy(auteur[j], auteur[j+1]);
                        prix[j] = prix[j+1];
                        quantite[j] = quantite[j+1];
                        printf("Livre a ete Supprimer");
                    }
                    }
                }
                nbr--;

                if(!found) printf("Livre pas Trouve"); 
}