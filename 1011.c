#include <stdio.h>
#include <math.h>
int main(void){
	
	const double pi = 3.14159;
	
	double raio, volume;
	scanf("%lf", &raio);
	volume = (4*pow(raio,3))*(pi)/3;
	printf("VOLUME = %.3lf\n", volume);
	return 0;
}