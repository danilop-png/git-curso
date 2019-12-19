/* Una tienda ofrece un descuento del 15% sobre el total de la compra y 
un cliente desea saber cuanto deberá pagar al final por su compra*/

#include<stdio.h>

int main(){
	float precio_inicio,precio_desc;
	int horas, pago_hora, pago_total;
	
	printf("Ingrese el total de la compra en $: ");
    scanf("%f",&precio_inicio);
    
    precio_desc=precio_inicio*0.85;
    
    printf("El valor a pagar es %.2f \n",precio_desc);

//salario dadas las horas y el salario por hora

    printf("Ingrese las horas trabajadas: ");
    scanf("%i",&horas);
    
    printf("Ingrese el pago por hora: ");
    scanf("%i",&pago_hora);
    
    pago_total=horas*pago_hora;
    printf("el salario total es %i",pago_total);
    return 0;
}
