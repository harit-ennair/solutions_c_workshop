
#include <stdio.h>
#include <stdlib.h>

int a,b;
int prod(){
    printf("entre le premiar nombre:");
    scanf("%d",&a);
    printf("entre le deuxieme nombre:");
    scanf("%d",&b);
    int c=a*b;
    printf("produit = %d",c);
}
int main() {
    prod();
    return 0;
}