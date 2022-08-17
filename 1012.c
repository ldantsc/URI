#include <stdio.h>
#include <math.h>

int main(void){
	double a, b, c;
	double triangulo, circulo,trapezio,quadrado,retangulo;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	triangulo = (a*c)/2;
	circulo = 3.14159*(pow(c,2));
	trapezio = ((a+b)*c)/2;
	quadrado = pow(b,2);
	retangulo = a*b;
	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",triangulo,circulo,trapezio, quadrado, retangulo);
	return 0;
}