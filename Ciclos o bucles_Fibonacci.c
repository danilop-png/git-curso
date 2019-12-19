#include<stdio.h>

int main(){
	
	int i, num;
	long x=0,y=1,z=1;
	
	printf("Digite la cantidad de elementos de la serie: ");
	scanf("%i",&num);
	
	for(i=1;i<=num;i++){
		
		printf("%i, ",z);
		z= x + y;
		x= y;
		y= z;
		
	}
	
	return 0;
}
