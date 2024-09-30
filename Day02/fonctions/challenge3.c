
#include <stdio.h>
#include <stdlib.h>

int a,b;
int com(){
    printf("entre le premiar nombre:");
    scanf("%d",&a);
    printf("entre le deuxieme nombre:");
    scanf("%d",&b);
    if(a>b){
    printf("Maximum et : %d",a);
    }else
    printf("Maximum et : %d",b);
}
int main() {
    com();
    return 0;
}