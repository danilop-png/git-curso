#include<stdio.h> // libreria entradas y salidas
#include<string.h> //libreria manipulaci�n de cadenas
#include<math.h> //libreria operaciones matem�ticas
#include<stdlib.h>
/*
Lo recuerdo
No lo puedo creer
*/
#define PI 3.1416 //macro para definir una constante o determinar alias por ejemplo para acortar un ciclo for

int y=5; //variable global

int main (){ //Funci�n principal
	
	int x=10; //variable local (dentro de la funci�n)
	float suma=0;
	suma=PI + x;
	printf("la suma es: %.2f",suma); //imprime la variables con solo dos decimales
	return 0; //indica a C que el proceso se complet� correctamente

}
