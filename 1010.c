#include <stdio.h>

int main(void){
	
	int codigo1, numPecas1,codigo2, numPecas2;
	float valorPecas1, valorPecas2, valorTotal;
	

	scanf("%d %d %f\n",&codigo1,&numPecas1,&valorPecas1);
	scanf("%d %d %f\n",&codigo1,&numPecas2,&valorPecas2);
		valorTotal = (valorPecas1*numPecas1)+(valorPecas2*numPecas2);
	printf("VALOR A PAGAR: R$ %.2f\n",valorTotal);
	return 0;
}