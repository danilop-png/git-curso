/* El bucle for:

       Sintaxis:
       
       for(inicializacion; condicion; incremento) {
       
       Instrucciones;
       ...
       
       }                                     */

//Mostrar los 10 primeros números

#include<stdio.h>

int main() {
	int i;
	
	for(i=1;i<=10;i++){
		
		printf("\t %i",i);
	}
	
	return 0;
}
