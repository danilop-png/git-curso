#include<stdio.h>
#include<stdlib.h>
int main(){
	
	char tecla;
	printf("Programa borrado de pantalla");
	printf("\n --------------------------------------\n");
	printf("\n --------------------------------------\n");
	
	printf("Digite el número 1 :");
	scanf("%c", &tecla);
	
	if (tecla=='1'){
		system("cls"); //limpiado de pantalla
		printf("Ha funcionado cls");
	}
	
	else {
		
		fflush(stdin); //Limpiar el buffer (espacio de memoria en el que se almacenan datos de manera temporal, usa sistema FIFO)
		printf("\n No ha funcionado cls");
		printf("\n Por favor digite 1 : ");
		scanf("%c",&tecla);
		
		if (tecla=='1'){	
		   system("cls");
		   printf("Ha funcionado cls");
	    }
	    
	    else {
	    	printf("\n No ha funcionado cls");
	    }

	}
	return 0;
}
