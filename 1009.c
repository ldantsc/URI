#include <stdio.h>
 
int main() {

char nome;
double salarioFixo, vendasEfetuadas, total;

scanf("%s",&nome);
scanf("%lf",&salarioFixo);
scanf("%lf",&vendasEfetuadas);
total=(vendasEfetuadas*0.15)+salarioFixo;
printf("TOTAL = R$ %.2lf\n",total);
return 0;
}