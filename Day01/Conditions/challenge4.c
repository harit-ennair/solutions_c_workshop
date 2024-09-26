
#include <stdio.h>
#include <math.h>

int main() {
    // Write C code here
    float a;
    float b;
    float c;
    float d;
    float x1;
    float x2;
    float x3;
    
    
    printf("entre a :");
    scanf("%f",&a);
    
    printf("entre b :");
    scanf("%f",&b);
    
    printf("entre c :");
    scanf("%f",&c);
    
    d = pow(b,2)-4*a*c;
    
    printf ("delta =%.2f",d);
    
    if(d>0){
         x1 = (-b + sqrt(d))/(2*a);
         x2 = (-b - sqrt(d))/(2*a);
        
                printf("\nSolutions: x1 = %.2f", x1);
                printf("\nSolutions: x2 = %.2f", x2);
                
                
    } else if (d == 0){
        x3 = -b/(2*a);
        printf("\nSolution: x = %.2f", x3);
    } else {
        printf("\nIl n'y a pas de solutions reelles");
    }
        
        
    

    return 0;
}