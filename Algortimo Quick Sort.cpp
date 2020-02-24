#include <iostream>
#include <conio.h> 
#include <stdlib.h>
#include <time.h>
using namespace std;
void Quicksort(int* array, int izq, int der) { //Varaiables para la funcion quicksort
//array=arreglo a ordenar; izq, der=los numeros que se compararan del lado izquierdo y derecho 
     int i = izq;//i vaiable del bucle externo
	 int j= der, aux; //variable del bucle derecho y aux como auxiliar para hacer el intercambio
     int pivote=array[izq];//seleccion del pivote
     while (i <= j){ //mientras la sublista i sea menor a j
          while (array[i] < pivote) i++; //los datos del arreglo i deben ser menores al pivote
          while (array[j] > pivote) j--; //los datos del arreglo j deben ser mayores al pivote
          if (i <= j){ //si se cumple la condicion se hacen los cambios
               aux = array[i]; //aux =arreglo i
               array[i] = array[j]; //arreglo i 0 arreglo j
               array[j] = aux; //arreglo j = aux para el cambio y comparaciones
               i++;
			   j--; 
          } 
     }
//con estas condiciones if acomodaremos el arreglo de acuerdo al tamaño que hay
     if (izq < j) {
          Quicksort(array, izq, j); 
      }
     if (i < der) {
          Quicksort(array, i, der);  
      }   
}
//FUNCION PRINCIPAL
int main() { 
cout<<"Metodo QuickSort"<<endl;
int array[5] = { 12, 2, 15, 7,  5}; //array a ordenar
cout<< "Arreglo a ordenar"<<endl;
for(int i = 0; i <5; i++){ //for para la impresion del arreglo
    cout << array[i] << " "; 
} 
cout<<endl;
//llamado de la funcion Quick sortcon los intervalos del arreglo 
 Quicksort(array, 0, 4);  
cout<< "arreglo ordenado"<<endl;
for(int i = 0; i <5; i++){ //for para la impresion del arreglo
    cout << array[i] << " "; 
}
getch();
return 0;
}

