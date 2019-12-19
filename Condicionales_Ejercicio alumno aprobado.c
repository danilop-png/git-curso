#include<stdio.h>

int main(){
	
	float nota;
	
	printf("Ingrese la calificación ");
	scanf("%f",&nota);
	
	if  (nota>10.5) {
	
	     puts("el alumno ha aprobado"); //solo imprime dentro de un condicional
	}
	
	else{
		puts("el alumno ha reprobado");
	}
}
