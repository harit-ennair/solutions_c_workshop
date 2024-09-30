
#include <stdio.h>
#include <stdlib.h>

int a,b=1,i;
int Factorielle(){
    printf("entre le premiar nombre:");
    scanf("%d",&a);
    for(i=a;i>0;i--){
      b*=i;
    }
    printf("factorielle =%d:",b);
}
int main() {
    Factorielle();
    return 0;
}