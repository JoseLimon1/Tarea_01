#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c;
	float x1,x2,g;
	
		printf("Valores de ecuacion: \n");
			printf("A: \n");	
			scanf("%f",&a);
			
			printf("B: \n");
			scanf("%f",&b);
			
			printf("C: \n");
			scanf("%f",&c);	
	
	g=pow(b,2)-4*(a)*(c);
	if(g>=0){
		
	//ecuaciones 
	x1=(-1*(b)+sqrt(g))/(2*a);
	
	x2=(-1*(b)-sqrt(g))/(2*a);
	//-----------------------------
	
	printf("resultado x1= %.3f \n",x1);
	
	
	
	printf("resultado x1= %.3f \n",x2);	
	}
	
	else{
		printf("ERROR \n");
	}
	
	
}
