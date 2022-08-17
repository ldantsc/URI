#include<stdio.h>
int main(void){
	int timeHora, velMedia;
	float result;
	scanf("%d",&timeHora);
	scanf("%d",&velMedia);
	result = (timeHora*velMedia)/12.0;
	printf("%.3f\n", result);
}