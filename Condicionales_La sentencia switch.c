/* Sentencia switch

switch (selector) { //selector es variable entera o de tipo char, no puede ser double o float

case etiqueta1: sentencias1; break;
case etiqueta2: sentencias2; break;
case etiqueta3: sentencias3; break;

default: sentencias; //caso contrario a los cases
}*/


#include<stdio.h>

int main () {
	char vocal;
	
	printf("Digite una vocal: ");
	scanf("%c",&vocal);
	
	switch(vocal){
		case 'a': printf("\n Vocal a");break;
		case 'e': printf("\n Vocal e");break;
		case 'i': printf("\n Vocal i");break;
		case 'o': printf("\n Vocal o");break;
		case 'u': printf("\n Vocal u");break;
		
		default: printf("Se equivoco, no es una vocal");
	}
	
	return 0;

}
