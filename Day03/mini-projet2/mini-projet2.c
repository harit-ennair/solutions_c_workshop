
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100
typedef struct{
    char num[MAX];
    char numerodetelephone[MAX];
    char Adresse_e_mail[MAX];
}Ajouter;
Ajouter a[MAX];     
int main() {
    int nbr = 0,choix,ajout; 
   do {
    printf("\nMenu: \n");
        printf("1. Ajouter un Contact\n");
        printf("2. Modifier un Contact\n");
        printf("3. Supprimer un Contact\n");
        printf("4. Afficher Tous les Contacts\n");
        printf("5. Rechercher un Contact\n");
        printf("6. Quitter\n");
        printf("Choix ? : ");
        scanf("%d", &choix);
    switch (choix){
        case 1:{
                    int ajout;
                    printf("antrer numbre de contactes a ajouter : ");
                    scanf("%d", &ajout);
                    for(int i=nbr;i< nbr + ajout;i++){        
                        printf("Ajouter un num :");
                        scanf(" %[^\n]", a[i].num);
                        printf("Ajouter un numero de telephone :");
                        scanf(" %[^\n]", a[i].numerodetelephone);
                        printf("Ajouter un dresse e-mail :");
                        scanf(" %[^\n]", a[i].Adresse_e_mail);
                    }
                    nbr += ajout;
         }
        break;
         case 2:{
                    char chercher[MAX];
                    char mod1[MAX],mod2[MAX];    
                    int found = 0;
                    printf("===================== Chercher Un contacte ======================\n");
                    printf("num : ");
                    scanf(" %[^\n]", chercher);
                    for (int i = 0; i < nbr; i++){
                        if(strcmp(a[i].num, chercher) == 0){
                            printf("---------- contacte est Trouve ----------\n");
                            printf("%s", a[i].num);
                            printf("%s", a[i].numerodetelephone);
                            printf("%S", a[i].Adresse_e_mail);
                            found=1;
                            printf("\nModification nobere telephone: \n");
                            scanf(" %[^\n]", mod1);
                            strcpy(a[i].numerodetelephone, mod1);
                            printf("Modification adresse e-gmail\n");
                            scanf(" %[^\n]", mod2);
                            strcpy(a[i].Adresse_e_mail, mod2);
                        }
                    }
                    if(!found) printf("contacte pas Trouve");
                }
                break;
        case 3:{
                char chercher[MAX];
                int found = 0;
                printf("===================== Suppression ======================\n");
                printf("num : ");
                scanf(" %[^\n]", chercher);
                for (int i = 0; i < nbr; i++)
                {
                    if(strcmp(a[i].num, chercher) == 0){
                        found=1;
                        for(int j=0;j<nbr - 1;j++){
                            strcpy(a[j].num, a[j+1].num);
                            strcpy(a[j].numerodetelephone, a[j+1].numerodetelephone);
                            strcpy(a[j].Adresse_e_mail , a[j+1].Adresse_e_mail);
                            printf("contacte a ete Supprimer");
                        }
                    }
                }
                nbr--;
                if(!found) printf("contacte pas Trouve");   
        }
        break;
        case 4:{
                    if(nbr == 0) {
                        printf("pas de contactes dans Stock");
                    } else {
                        printf("===================== Afficher Le Stock ======================\n");
                            for(int i=0;i< nbr;i++){
                                printf("%s\n", a[i].num);
                                printf("%s\n", a[i].numerodetelephone);
                                printf("%s\n", a[i].Adresse_e_mail);
                            }
                    }
                }
                break;
        case 5:{
                    char chercher[MAX];
                    int found = 0;
                    printf("===================== Chercher Un contacte ======================\n");
                    printf("num : ");
                    scanf(" %[^\n]", chercher);
                    for (int i = 0; i < nbr; i++){
                            if(strcmp(a[i].num, chercher) == 0){ 
                                printf("---------- contacte est Trouve ----------\n");
                                printf("%s", a[i].num);
                                printf("\n%s\n", a[i].numerodetelephone);
                                printf("%s", a[i].Adresse_e_mail);
                                found=1;
                                break;
                            }
                    }

                    if(!found) printf("contacte pas Trouve");
        }
        break;
        case 6:
        {
            return 1;
        }
        break;
        default:  printf(" Choix Invalide");
        break;
    }
   } while (choix < 6);
    return 0;        
}       
