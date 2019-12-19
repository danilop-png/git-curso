/* Pedir dos números al usuario y sumarlos restarlos multiplicarlos y dividirlos*/

#include<stdio.h>

int main(){
	
	int n1,n2, suma=0, resta=0, mult=0, div=0;
	float grad;
	
	
	printf ("digite 2 numeros: ");
	scanf ("%i %i",&n1,&n2);
	
	suma = n1 + n2;
	resta = n1 - n2;
	mult = n1 * n2;
	div = n1 / n2;
	
	printf("Los resultados son %i %i %i %i \n",suma,resta,mult,div);
	printf("La suma es %i \n",suma);
	printf("La resta es %i \n",resta);
	printf("La multiplicacion %i \n",mult);
	printf("La division es %i \n",div);
	
	//Pasar de Celsius a Fahrenheit
	
	printf("Ingrese los grados C para pasarlos a F ");
	scanf ("%f",&grad);
	
	grad= (grad*9/5)+32;
	
	printf("Los grados F son %.2f",grad);
	
	return 0;
}
