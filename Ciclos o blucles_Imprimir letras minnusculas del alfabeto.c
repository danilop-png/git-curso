#include<stdio.h>

int main(){
	
	char letra='a'; //En ASCCI equivale a 61 hexadecimales
	
	do{
		printf("%c\n",letra);
		letra++;
	}while(letra<='z');
	return 0;
}
