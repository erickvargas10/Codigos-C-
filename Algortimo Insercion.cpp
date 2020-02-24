#include <iostream>//librerias necesarias
#include <conio.h>
using namespace std;
int main(){
int numeros []={4,1,3,2,5};//arreglo a ordenar tamaño 5 ; numeros variable que contiene el arreglo
	int i, j, aux;
//i entero contador externo 
//j entero contador interno
//aux va a guardar la posicion del numero que cambie de elemento
for (i=1; i<5; i++){ //inicializa en la posicion 1, contador i debe ser menor al tamaño del arreglo
    aux = numeros[i]; //si existe algun cambio el auxiliar lo va a guardar
    for(j=i-1; (numeros[j] > aux) && (j >= 0) ; j--){//
    //j=i-1 va a comparar un espacio menos 
    //numeros[j] > aux condicion para que compare con el numero siguiente  && j >= 0 siempre el comparador debe ser mayor a 0
        numeros[j+1] = numeros[j];//intercala la posicion del numero mayor al anterior si existe algun tipo de cambio
     }
     numeros[j+1] = aux;// intercambia la posicion que es mayor al aux para ocupar su casillero correcto
     }
     
     
//resultados obtenidos
cout<<"ordenamento insercion"<<endl;	
for(i=0; i<5; i++){//bucle para la impresion del ordenamiento
	cout<<numeros[i]<<" ";
}
 	getch();
	return 0;
}

