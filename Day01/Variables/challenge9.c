// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    // Write C code here
    float x1;
    float x2;
    float y1;
    float y2;
    float z1;
    float z2;
    float a;
    printf ("entrez x1 :");
    scanf ("%f",&x1);
    printf ("entrez x2 :");
    scanf ("%f",&x2);
    printf ("entrez y1 :");
    scanf ("%f",&y1);
    printf ("entrez y2 :");
    scanf ("%f",&y2);
    printf ("entrez z1 :");
    scanf ("%f",&z1);
    printf ("entrez z2 :");
    scanf ("%f",&z2);
    
    a = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) + (z2-z1)*(z2-z1));
    printf ( " la distance entre deux points =%f",a);
    
    

    return 0;
}