#include<stdio.h>

int main (){
	int a,b,c;
	a=b=c=10; // = es un operador de asignación
	
	a = a + 10;
	a += 10; //equivalente a a= a + 10
	a -= 5; //a = a - 5
	a *= 2; //a = a * 2
	a /= 2; // a = a / 2
	printf("El valor de a,b,c es %i %i %i",a,b,c); //imprimer diferente variables en el mismo printf
	
	return 0;
}
