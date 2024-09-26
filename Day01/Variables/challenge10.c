
#include <stdio.h>
#include <math.h>
int main() {
    // Write C code here
    float a;
    float b;
    const float c=3.14;
    printf ("entrez le rayon de la sphère :");
    scanf ("%f",&a);
    
    
    
    b = (4/3) * c * pow(a , 3);
    printf ( " le rayon de la sphère =%f",b);

    return 0;
}