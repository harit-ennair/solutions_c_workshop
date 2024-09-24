
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int a;
    
    printf("entrer nombre :");
    scanf("%d",&a);
    
    if(a%2 == 0){
        printf("paire");
    } else {
        printf("impaire");
    }

    return 0;
}