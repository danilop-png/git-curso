// Sacar la hipotenusa de un triangulo rectangulo

#include<stdio.h>
#include<math.h>

#define PI 3.1416
int main(){
	float hipotenusa, cateto1, cateto2, radio;
	
	//hipotenusa
	printf("Digite los dos catetos: ");
	scanf("%f %f",&cateto1,&cateto2);
	
	hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));
	
	printf("La hipotenusa del triangulo %.2f \n", hipotenusa);
	
	
	printf("Defina el radio de la circunferencia: ");
	scanf("%f",&radio);
	
	radio = radio* 2 * PI;
	
	printf("La longitud de la circunferencia es %.2f",radio);
	
	return 0;
}
