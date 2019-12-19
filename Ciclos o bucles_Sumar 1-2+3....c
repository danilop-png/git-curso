#include<stdio.h>

int main(){
	
	int cont=1, n, suma=0;
	
	printf("ingrese n: ");
	scanf("%i",&n); 
	
	
	while(cont<=n){ 
		
		if(cont%2==0){
			
			suma -= cont;
			cont++; 
		}
		
		else {
			
			suma += cont; 
			cont ++;
		}
	}
	
	printf("\n la suma es: %i",suma);
	return 0;
}
