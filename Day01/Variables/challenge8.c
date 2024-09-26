
#include <stdio.h>
#include <math.h>

int main() {
    // Write C code here
    int a;
    int b;
    int c;
    float d;
    float e;
    printf ("entrez le premier nombre :");
    scanf ("%d",&a);
    printf ("entrez le deuxieme nombre :");
    scanf ("%d",&b);
    printf ("entrez le troisieme nombre :");
    scanf ("%d",&c);
    d=(a*b*c);
    e=pow(d,1.0/3.0);
    printf ( "le Moyenne géométrique =%f",e);

    return 0;
}