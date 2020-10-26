#include <stdio.h>
#include <math.h>
#define PI 3.1416


int main(){
	float A,P,r;
		printf("radio: \n");
		scanf("%f",&r);
	
	A=PI*pow(r,2);
	P=PI*(r*2);
	
	printf("Resultado Area= %.3f \n",A);
	printf("Resultado Perimetro= %.3f \n",P);	
	
}
