#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    
    printf("entrer un nombre de 4 chiffres :");
    scanf("%d", &a);

    c = a / 1000;
    d = (a / 100) % 10;
    e = (a / 10) % 10;
    f = a % 10; 

    b = f * 1000 + e * 100 + d * 10 + c; 
    printf("Nombre inverse est : %d ", b);


    return 0;
}