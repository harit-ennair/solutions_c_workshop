
#include <stdio.h>

int main() {
    // Write C code here
    char a;
    printf("Entrer un caractere : "); 
    scanf("%c", &a);
    
    if(a >= 65 && a <= 90){
        printf("Majuscule");
    }else{
        printf("pas Majuscule");
    }
    
    

    return 0;
}