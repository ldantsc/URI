#include <stdio.h>
 
int main() {
 
   double notaA, notaB,notaC, total, media;
   
   scanf("%lf",&notaA);
   scanf("%lf",&notaB);
   scanf("%lf",&notaC);
   total = ((2*notaA)+(3*notaB)+(5*notaC));
   media = total/10;
   printf("MEDIA = %.1lf\n", media);
   
    return 0;
}