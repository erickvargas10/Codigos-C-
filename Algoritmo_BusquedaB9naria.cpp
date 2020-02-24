//Busqueda Binaria

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int array[] = {1,2,3,4,5};//busqueda binaria el arreglo ya debe estar ordenado en orden ascendente
	int inf,sup,mitad,dato,i;//variables para in ferior superior numero de diviiones en la mitad el dato qeu se busca y el numeo entero
	char band='F';//variable para determinar si existe o no el elemento
	
	cout<< "Arreglo ordenado "<<endl;//codigo para impresion del arreglo
for(int i = 0; i <5; i++){
    cout << array[i] << " "; 
} 
cout<<endl;
	
	cout<<"ingrese el numero que desea saber su posicion"<<endl;
	cin>>dato;//ingreso del numero que se desea buscar
	
	//Algoritmo de la Busqueda Binaria
	inf=0;//marco el limite inferior del arreglo
	sup=5;//marco el limite superior del arreglo
	i=0;
	while((inf<=sup)&&(i<5)){//condiciones del bucle
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
		cout<<"El numero se encontro en la pos: "<<mitad<<endl;
	}
	else{
		cout<<"El numero NO se encontro";
	}
	
	getch();
	return 0;
}

