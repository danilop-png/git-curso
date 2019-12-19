//Ejercicio de arbol

#include<stdio.h>

int main() {
	
	int i, n,r;
	
	printf("Ingrese la cantidad de filas: ");
	scanf("%i",&n);
	
	for (i=1;i<=n;i++) {
		
		for (r=0;r<(n-i);r++){
			
			printf(" ");
		}
		
		
		for (r=1;r<=(2*i-1);r++){
		
		   printf("*");
		
	    }
	    printf("\n");  
	}
	return 0;
}
