#include <stdio.h>
 
int main() {
 
   double nota1, nota2, media;
   
   scanf("%lf", &nota1);
   scanf("%lf", &nota2);
   media = ((3.5*nota1)+(7.5*nota2))/11;
   printf("MEDIA = %.5lf\n", media);
   
    return 0;
}