#include<stdio.h>

int main(){
	int n1, n2;
	printf("Ingrese los dos n�meros: ");
	scanf("%i %i",&n1,&n2);
	
	if (n1 % n2 == 0){
		printf("El n�mero %i es divisible entre %i", n1,n2);
	}
	
	else {
		printf("El n�mero %i no es divisible entre %i", n1,n2);
	}
	
	return 0;
	
}
