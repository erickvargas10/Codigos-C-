#include <iostream>
using namespace std;

/*
1. Resolver el siguiente problema utilizando la técnica de la programación dinámica:
 Se cuenta con un número infinito de monedas de diferentes valores (x=[2,5, 6, 10]). 
 Utilice estas monedas para dar el cambio (N).
Implemente un programa para determinar el número de combinaciones posibles para dar el cambio N.

Tonces por ejemplo dices:

 tengo 10 
 me debe de dar las combinaciones de los sueltos que tengo en funcion de 10
 
 1. 5 monedas de 2
 2. 2 de 5
 3. 1 de 3 

*/
int main (){
	
	cout<<"VARIABLES EN BILLETES"<<endl;
	int x[]={2,5,6,10};
	for(int i=0; i<4; i++){
		cout<<x[i]<<" ";
	}
	cout<<endl;
    int billete_de_5;//variable que simboliza los billetes de 5
    int billete_de_6;//variable que simboliza los billetes de 6
    int billete_de_2;//variable que simboliza los billetes de 2
    int billete_de_10;//variable que simboliza los billetes de 10
    int moneda_de_1;//variable que simboliza las monedas de 1
    int cambio=10;  //cambio=el vuelto que vamos a dar
    int numero;
    cout << "Valor de cambio: " << cambio << endl; //impresion en pantalla del cambio
    cout<<endl;

cout<<"selecciones cuantos elementos del arreglo va a utilizar"<<endl;
cin>>numero;

  if(numero==1){
  	cout<<"solucion 1"<<endl;
  	moneda_de_1=cambio%100;//igualamos el valor mas bajo para que sea un valor entero solo tomaro los valores enteros
    billete_de_2=(moneda_de_1-moneda_de_1%2)/2;//realizo la comparacion con las monedas dividendo para el billete que necesito  
    moneda_de_1=moneda_de_1%2;//obtengo la cantidad de monedas para su residua 
    cout << "billetes de 2: " << billete_de_2 << endl;   
  }
  if (numero==2){
  		cout<<"solucion 1"<<endl;
  	moneda_de_1=cambio%100;//igualamos el valor mas bajo para que sea un valor entero solo tomaro los valores enteros
    billete_de_2=(moneda_de_1-moneda_de_1%2)/2;//realizo la comparacion con las monedas dividendo para el billete que necesito  
    moneda_de_1=moneda_de_1%2;//obtengo la cantidad de monedas para su residua 
    cout << "billetes de 2: " << billete_de_2 << endl; 
    	cout<<"solucion 2"<<endl;
  	moneda_de_1=cambio%100;//igualamos el valor mas bajo para que sea un valor entero solo tomaro los valores enteros
    billete_de_5=(moneda_de_1-moneda_de_1%5)/5;//realizo la comparacion con las monedas dividendo para el billete que necesito  
    moneda_de_1=moneda_de_1%5;//obtengo la cantidad de monedas para su residua 
    cout << "billetes de 5: " << billete_de_5 << endl;  
	 
  
  }
  if (numero==3){
  		cout<<"solucion 1"<<endl;
  	moneda_de_1=cambio%100;//igualamos el valor mas bajo para que sea un valor entero solo tomaro los valores enteros
    billete_de_2=(moneda_de_1-moneda_de_1%2)/2;//realizo la comparacion con las monedas dividendo para el billete que necesito  
    moneda_de_1=moneda_de_1%2;//obtengo la cantidad de monedas para su residua 
    cout << "billetes de 2: " << billete_de_2 << endl; 
    	cout<<"solucion 2"<<endl;
  	moneda_de_1=cambio%100;//igualamos el valor mas bajo para que sea un valor entero solo tomaro los valores enteros
    billete_de_5=(moneda_de_1-moneda_de_1%5)/5;//realizo la comparacion con las monedas dividendo para el billete que necesito  
    moneda_de_1=moneda_de_1%5;//obtengo la cantidad de monedas para su residua 
    cout << "billetes de 5: " << billete_de_5 << endl;   
    	cout<<"solucion 3"<<endl;
    moneda_de_1=cambio%100;//igualamos el valor mas bajo para que sea un valor entero solo tomaro los valores enteros
    billete_de_6=(moneda_de_1-moneda_de_1%6)/6;//realizo la comparacion con las monedas dividendo para el billete que necesito  
    moneda_de_1=moneda_de_1%6;//obtengo la cantidad de monedas para su residua 
    billete_de_2=(moneda_de_1-moneda_de_1%2)/2;//realizo la comparacion con las monedas dividendo para el billete que necesito  
    moneda_de_1=moneda_de_1%2;//obtengo la cantidad de monedas para su residua 
    cout << "billetes de 6: " << billete_de_6 << endl;    
	cout << "billetes de 2: " << billete_de_2 << endl;  
  }
  if (numero==4){
  		cout<<"solucion 1"<<endl;
  	moneda_de_1=cambio%100;//igualamos el valor mas bajo para que sea un valor entero solo tomaro los valores enteros
    billete_de_2=(moneda_de_1-moneda_de_1%2)/2;//realizo la comparacion con las monedas dividendo para el billete que necesito  
    moneda_de_1=moneda_de_1%2;//obtengo la cantidad de monedas para su residua 
    cout << "billetes de 2: " << billete_de_2 << endl; 
    	cout<<"solucion 2"<<endl;
  	moneda_de_1=cambio%100;//igualamos el valor mas bajo para que sea un valor entero solo tomaro los valores enteros
    billete_de_5=(moneda_de_1-moneda_de_1%5)/5;//realizo la comparacion con las monedas dividendo para el billete que necesito  
    moneda_de_1=moneda_de_1%5;//obtengo la cantidad de monedas para su residua 
    cout << "billetes de 5: " << billete_de_5 << endl;
		cout<<"solucion 3"<<endl;   
    moneda_de_1=cambio%100;//igualamos el valor mas bajo para que sea un valor entero solo tomaro los valores enteros
    billete_de_6=(moneda_de_1-moneda_de_1%6)/6;//realizo la comparacion con las monedas dividendo para el billete que necesito  
    moneda_de_1=moneda_de_1%6;//obtengo la cantidad de monedas para su residua 
    billete_de_2=(moneda_de_1-moneda_de_1%2)/2;//realizo la comparacion con las monedas dividendo para el billete que necesito  
    moneda_de_1=moneda_de_1%2;//obtengo la cantidad de monedas para su residua 
    cout << "billetes de 6: " << billete_de_6 << endl;    
	cout << "billetes de 2: " << billete_de_2 << endl; 
		cout<<"solucion 4"<<endl; 
  	
  	 moneda_de_1=cambio%100;//igualamos el valor mas bajo para que sea un valor entero solo tomaro los valores enteros
    billete_de_10=(moneda_de_1-moneda_de_1%10)/10;//hacemos el residuo del billete de a 10
    moneda_de_1=moneda_de_1%10;//obtengo la cantidad de monedas para su residua 
    cout << "billetes de 10: " << billete_de_10 << endl;
    cout<<endl;

  }
    
    return 0;
}

