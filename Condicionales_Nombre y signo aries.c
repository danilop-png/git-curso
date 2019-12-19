#include<stdio.h>

int main(){
	char nombre [30], signo[20];
	
	printf("Digite su nombre: ");
	gets(nombre);
	
	printf("Digite su signo: ");
	gets(signo);
	
	if (strcmp(signo,"aries")==0){
		printf("\n %s es signo aries", nombre);
	}
	else{
		printf("No es signo aries");
	}
	return 0;
}
