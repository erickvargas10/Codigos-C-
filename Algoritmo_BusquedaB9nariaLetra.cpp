//Busqueda Binaria

#include<iostream>
#include<conio.h>

using namespace std;

int main(){	
	char array[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p',
	'q','r','s','t','u','v','w','x','y','z'};
	int inf,sup,mitad,i;//variables para in ferior superior numero de diviiones en la mitad el dato qeu se busca y el numeo entero
	char dato;
	char band='F';//variable para determinar si existe o no el elemento
	cout<< "Arreglo ordenado "<<endl;//codigo para impresion del arreglo
    for(int i = 0; i <26; i++){
    cout << array[i] << " "; 
} 	
    cout<<endl;
	cout<<"ingrese la letra que desea saber su posicion"<<endl;
	cin>>dato;//ingreso del numero que se desea buscar
	//Algoritmo de la Busqueda Binaria
	inf=0;//marco el limite inferior del arreglo
	sup=27;//marco el limite superior del arreglo
	i=0;
	while((inf<=sup)&&(i<27)){//condiciones del bucle
		mitad = (inf+sup)/2;//hallo la mitad
		if(array[mitad] == dato){//si el numero mitad igual al dato es encontrado
			band='V';//cambiamos a verdadero que se encontro
			break;//rompe el bucle no gasto el tiempo gracias al while
		}
		if(array[mitad]>dato){//si el numero mitad es mayor al dato 
			sup = mitad;//cambio la variable superior a mitad
			mitad = (inf+sup)/2;//se vuelve ejecutar la division
		}
		if(array[mitad]<dato){//si el numero mitad es menor al dato 
			inf = mitad;//cambio la variable inferior a mitad
			mitad = (inf+sup)/2;//se vuelve ejecutar la division
		}
		i++;//aumento del bucle
	}
	
	if(band == 'V'){//condicion para que la bandera imprima si ya encontramos ek dato
		cout<<"La letra se encontro en la pos: "<<mitad<<endl;
	}
	else{
		cout<<"Letra NO se encontro";
	}

	
	getch();
	return 0;
}
