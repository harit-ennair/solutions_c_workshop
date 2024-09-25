
#include <stdio.h>

int main() {
    
    // Write C code here
     int h;
     int h1;
     int m;
     int m1;
     int s;
     int s1;
    
    
    printf("Entrer la 1ere instant (hh:mm:ss) : ");
    scanf("%d:%d:%d", &h, &m, &s);
    
    printf("Entrer la 1ere instant (hh:mm:ss) : ");
    scanf("%d:%d:%d", &h1, &m1, &s1);

    if (h < h1) {
        printf("Le premier instant vient avant le deuxième");
    } else if(h > h1) {
        printf("Le deuxième instant vient avant le premier");
    } else {
            if (m < m1){
                printf("Le premier instant vient avant le deuxième");
            }else if (m > m1){
                printf("Le deuxième instant vient avant le premier");
            }else {
                 if (s < s1){
                printf("Le premier instant vient avant le deuxième");
            }else if (s > s1){
                printf("Le deuxième instant vient avant le premier");
            }else{
                printf("Il s'agit du même instant");
            }
        
    }
}
    return 0;
}