#include<stdio.h>
#include<math.h>
int main(){
	
	int n1,n2;
	float raiz;
	
	printf("Ingrese los dos números: ");
	scanf("%i %i",&n1,&n2);
	
	if (n1>n2){
		printf(" El numero mayor es %i",n1);
	}
	
	else if(n1<n2){
			printf(" El numero mayor es %i",n2);
			
		}

	
	else {
		printf("Los números son iguales");
	}
	
	//Ejercicio raiz
	
	if (n1<0){
		
		printf("\n La raiz es imaginaria");
	}
	
	else {
	   raiz= sqrt(n1);
	   printf("\n La raiz de %i es: %.2f",n1,raiz);
	}

	
	return 0;
}
