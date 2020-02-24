//Implemetacion algorimo burbuja
#include <iostream>//librerias necesarias
#include <conio.h>
#include <ctime> //libreria para analizar el tiempo de ejecucion
using namespace std;
int main(){
	int numeros []={4,1,3,2,5};//arreglo a ordenar
	int i, j, aux;// variables para bucles i,j ... aux va a hacer el numero que vaya intercambiandose
	//algoritmo metodo burbuja
	for(i=0; i<=5; i++){ //tome la cantidad de elementos/
		for (j=0; j<5; j++){//arregle la cantidad de elementos
			if(numeros[j]>numeros[j+1]){//numero actual es numero siguiente en la condicion
			aux=numeros[j];//si cumple se hace el intercambio al numero actual
			numeros [j]=numeros[j+1];//numero actual va a se rigual a numero siguiente
			numeros[j+1]=aux;//numero siguiente va a hacer igual al espacio que ocupa
			}
		}
		}
	cout<<"ordenamento burbuja"<<endl;	
	for(i=0; i<5; i++){//bucle para la impresion del ordenamiento
			cout<<numeros[i]<<" ";
}
cout<<endl;
unsigned t0, t1; //Variables para reducir el tiempo de ejecucion
t0=clock();
t1 = clock();
float time = (float(t1-t0)/CLOCKS_PER_SEC);//CLOCKS_PER_SEC nos permite traducir el tiempo a segundos
cout << "tiempo de ejecucion: " << time << endl;

	getch();
	return 0;
}

