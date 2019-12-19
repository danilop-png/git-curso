#include<stdio.h>

int main() {
	
	int num,rever;
	
	printf("Ingrese el número a reversar");
	scanf("%i",&num);
	
	
	while(num != 0){
		
		rever = num % 10;
		printf("%i",rever);
		num = num / 10;
	}
	
	return 0;
}
