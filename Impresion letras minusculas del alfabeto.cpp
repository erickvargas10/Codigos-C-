//14. Hacer un bucle do...while para imprimir las letras minusculas del alfabeto

#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	char letra = 'a';
	
	do{
		printf("%c.\n",letra);
		letra++;		
	}while(letra <= 'z');

		

	return 0;
} 
