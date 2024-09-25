
    #include <stdio.h> 


int main() { 
    
    char a;
    
    printf("Entrer un caractere : "); 
    scanf("%c", &a);
    
    if((a >= 97 && a <= 122) || (a >= 65 && a <= 90)) {
        printf("est un caractere");
                if(a >= 65 && a <= 90) {
                     printf(" Majuscule"); 
                 } else { 
                     printf(" Miniscule"); 
                 }
    } else { 
        printf("pas un caractere"); 
    } 
    
    
    
    
 return 0;
}

