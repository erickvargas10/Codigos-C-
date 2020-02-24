# include <iostream>
using namespace::std;

// FUNCION MOVER_TORRES

void Mover_Torres(int N, int Origen, int Auxiliar, int Destino){
//cuando existe un disco o caso limite
if ( 1 == N ){//condicion si esque solo existe un disco
cout << "Mueve el disco " << Origen << " a " << Destino << endl;// directo se mueve el disco de origen a destino
}
//cuando existe mas de un disco
if ( N > 1 ){ //condicion cuando es mas de un disco
Mover_Torres( N - 1, Origen, Destino, Auxiliar);// declaro las variables origen destino y auxiliar como las torres
//y reduzcoN-1 porque debe existir un disco base qeu vaya directo a la torre 3
cout <<"Mueve el disco " <<  N  << " de " << Origen << " a " <<  Destino << endl;
Mover_Torres( N - 1, Auxiliar, Origen, Destino);//cambio de posicion cuando ya el disco n esta en su posicion
//es decir el disco mas grande ya esta en la torre 3
} 
}

int main(){
int Discos;
cout << "Torres de Hanoi"<< endl; 
cout << "Introduzca el numero de discos que quiere mover de Torre 1 a Torre 3 "<<endl;
cin >> Discos;//Introducir el numero de discos
Mover_Torres( Discos, 1, 2, 3);//llama a la funcion 
cout << endl << endl;//aplica dos saltos de linea para cada movimiento

return 0;
}


