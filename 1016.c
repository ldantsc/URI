#include <stdio.h>
#include <math.h>
int main(void){
   const int x = 60;
   int y, min;
   scanf("%d", &y);
   min = y*(x/30);
   printf("%d minutos\n", min);
}