#include<stdio.h>

int main(){
	
	char a='e'; //tamaño 1byte Rango 0...255
	short b=-15;//tamaño 2 bytes Rango -128...127
	int c=1024; //tamaño 2 bytes Rango -32768...32768
	unsigned int d=128; // 2 bytes Rango 0...65535
	long e=123456;//4 bytes Rango -2147483648...2147483647
	float f=15.678; // 4 bytes
	double m=123123.123123; //tamaño 8 bytes
	
	printf("El elemento es: %c \n",a);
	printf("El elemento es: %i \n",b);
	printf("El elemento es: %i\n",c);
	printf("El elemento es: %i\n",d);
	printf("El elemento es: %li\n",e);
	printf("El elemento es: %.3f\n",f);
		printf("El elemento es: %.lf\n",m);//el punto elimina todos los decimales
	
	
	return 0;
}
