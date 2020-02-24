#include <iostream>//librerias necesarias
#include <conio.h>
using namespace std;
int main(){
int numeros []={4,1,3,2,5};//arreglo a ordenar tamaño 5 ; numeros variable que contiene el arreglo
int i, j, aux,minimo;
//i integrador contable exterior
//j integrador contable interior
//aux que ocupe la posicion correcta
//min numero minimo que cambiara

for (int i =0; i < 5; i++) {
    minimo= i; //la primera posicion sea el numero minimo
    for (j= i + 1; j< 5; j++) {
//j+1 me dice que empieze a recorrer porque declare que mi primer numero es el menor
        if (numeros[j] < numeros[minimo]) {
//numeros[j] va a comprobar si es menor al min 
           	minimo= j;//si es menor el numero minimo "min" iguala a J
		   }
       }
//empiezpo hacer el intercambio para que el auxiliar tome el orden del casillero correcto
       aux = numeros[i];
       numeros[i] = numeros[minimo];
       numeros[minimo] = aux;
   }
     
//resultados obtenidos
cout<<"ordenamento seleccion"<<endl;	
for(i=0; i<5; i++){//bucle para la impresion del ordenamiento
	cout<<numeros[i]<<" ";
}
 	getch();
	return 0;
}




