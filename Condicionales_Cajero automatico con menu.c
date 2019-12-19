/*Hacer un programa que simulaun cajero automático con un saldo inicial de 100 dolares*/

#include<stdio.h>

int main(){
	
	int option;
	float saldo=1000,agregar,retirar;
	
	
	printf("\t bienvenido a su cajero");
	printf("\n 1. Ingreso en cuenta");
	printf("\n 2. Retirar dinero de la cuenta");
	printf("\n 3. Salir");
	printf("\n Opcion: ");
	scanf("%i",&option);
	
	switch(option){
		
		case 1: printf("\n cuanto dinero desea ingresar en la cuenta");
		        scanf("%f",&agregar);
		        saldo += agregar;
		        printf("El saldo total es: %.2f",saldo);
		        
		break;	
		case 2: printf("Cuanto dinero desea retirar");
		        scanf("%f",&retirar);
		        
		        if (retirar>saldo){
		        	printf("La cantidad es mayor al saldo");
		        }
		        
		        else{
		        	
		        	saldo -= retirar;
		        	printf("El saldo disponible es de: %f",saldo);
		        }
		break;	
		case 3: break;	
		
		default: printf("Se equivoco de opcion");
	}
	
	return 0;
}
