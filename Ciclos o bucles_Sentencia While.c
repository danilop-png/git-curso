/*La sentencia while

Sintaxis:

        while(condicion) {
            
            instrucciones;
        
        
       }                   */
       
       
//Mostrar los 10 primeros números en pantalla

#include<stdio.h>

int main(){
	
	int i;
	
	i=1;
	
	while(i<=10){
		printf("%i. \n",i);
		i ++; //sumarle la unidad para restar i --;
	}
	
	return 0;
}
