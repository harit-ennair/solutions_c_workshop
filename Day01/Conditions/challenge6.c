
#include <stdio.h>

int main() {
    // Write C code here
     float a;
    printf("entre numpre :");
    scanf("%f",&a);
    
    if(a>0){
        printf("positif");
    }else if(a<0){
        printf("négatif");
    }else {
        printf("nul");
    }

    return 0;
}