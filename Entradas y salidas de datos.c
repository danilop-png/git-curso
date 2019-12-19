//entradas y salidas
#include<stdio.h>

int main(){
	int a=10;
	float b=15.5;
	char c='e';
	printf("digite el valor de la variable a:");
	scanf("%i",&a); //lee los datos de entrada
	printf("El valor es %i\n",a);
	printf("%i %f %c",a,b,c); //imprimir varias variables a la  vez
	return 0;
}
