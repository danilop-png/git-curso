#include<stdio.h>
#include<math.h>

int main(){
	
	//area del trapecio
	int base_M, base_m, area, altura,n1,n2,n3;
	float media;
	
	printf("digite la base mayor: ");
	scanf("%i",&base_M);
	
	printf("digite la base menor: ");
	scanf("%i",&base_m);
	
	printf("digite la base altura: ");
	scanf("%i",&altura);
	
	area=((base_M + base_m)*altura)/2;
	
	printf("el area es %i",area);
	
	//media aritmetica de 3 numeros
	
	printf("digite los 3 numeros para sacar la media :");
	scanf("%i %i %i",&n1,&n2,&n3);
	
	media=(n1+n2+n3)/3;
	printf("la media es %.2f",media);
	
	return 0;

}
