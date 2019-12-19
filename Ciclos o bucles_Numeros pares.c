#include<stdio.h>

int main(){
	
	int n, suma=0, i, cont=0;
	
	printf("Por favor ingrese n");
	scanf("%i",&n);
	for(i=1;i<=n;i++){
		
		if(i%2==0){
			
			suma=suma+i;
			cont++;
		}
	}
	printf("La suma de pares es %i, y la cantidad de pares es %i",suma,cont);
	
	return 0;
}
