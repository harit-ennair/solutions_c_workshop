// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    float c;
    printf("entree la tompirature on c :");
    scanf("%f",&c);
    if(c<0){
        printf("Solide");
    }else if(c>0 && c<100){
        printf("Liquide");
    }else {
        printf("gaz");
    }
    
    

    return 0;
}