// Example program
#include <iostream>
#include <string>
using namespace std;
void BinarioNoRecursivo(int* array, int entero, int l, int n){
	int prim=l;
	int ult=n;
	int medio;
	bool encontrado= true;
	if(encontrado==false){
	
		while(encontrado<=ult || prim<=ult){
			medio=(prim+ult)/2;
			if(entero==medio){
			encontrado==true;
			}if(entero>medio){
				prim=medio+l;
			}else{
				ult=medio+l;
			}
		}	
	}
    }
int main(){
int array[5] = { 2,5,7,12,15};
int entero;
cout<< "Arreglo a ordenar"<<endl;
for(int i = 0; i <5; i++){
    cout << array[i] << " "; 
} 
cout<< "Ingrese la posicion del elemento que desea encontrar"<<endl;
cin>>entero;
BinarioNoRecursivo(array, 3,0, 4);  
cout<<entero;
  return 0;
}

