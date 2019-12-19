/* Repetición: el bucle do...while

     Sintaxis:
     
           do{
               Instrucciones...
        }while (condicion)  (Se va a ejecutar mínimo una vez)*/
        
//Mostrar los 10 primeros numeros

#include<stdio.h>

int main(){
	
	int i=1;
	char opc;
	
	do{
		printf("%i \n",i);
		i++;
	}while(i<=10);
	


	do{
		
		fflush(stdin);
	    printf("Hola \n");
		printf("Digite 's' para saludar nuevamente: ");//TECLA S
		scanf("%c",&opc);
		
	}while(opc=='s' || opc=='S'); // ||Operador "o"
	
		return 0;
}
