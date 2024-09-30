
#include <stdio.h>
#include <stdlib.h>

int a,b;
void sum(){
    printf("entre le premiar nombre:");
    scanf("%d",&a);
    printf("entre le deuxieme nombre:");
    scanf("%d",&b);
    int c=a+b;
    printf("sum = %d",c);
}
int main() {
    sum();
    return 0;
}