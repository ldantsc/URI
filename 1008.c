#include <stdio.h>
 
int main() {
 
 int funcionario, horasTrabalhadas;
 float salarioHora, salarioTotal;
 
 scanf("%d",&funcionario);
 scanf("%d",&horasTrabalhadas);
 scanf("%f",&salarioHora);
 salarioTotal=horasTrabalhadas*salarioHora;
 printf("NUMBER = %d\n",funcionario);
 printf("SALARY = U$ %.2f\n",salarioTotal);
 
}