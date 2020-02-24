#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	int num=1; //1 en la seri de fion acci;
	int anterior=0;
	int aux;
	

for(int i=0; i<10;i++){
	cout<<num<<endl;
	aux=num;
	num=num+anterior;
	anterior=aux;
}

		

	return 0;
} 
