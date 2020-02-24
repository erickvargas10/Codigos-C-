#include <iostream>
using namespace std;
int main (){
    int billete_de_5;//variable que simboliza los billetes de 5
    int billete_de_20;//variable que simboliza los billetes de 5
    int billete_de_10;//variable que simboliza los billetes de 5
    int moneda_de_1;//variable que simboliza las monedas de 1
    int cantidad, deuda, cambio; //variable cantidad valor con la que paga 
    //deuda=cuanto cuesta lo que compra
    //cambio=el vuelto que vamos a dar
    cout << "Ingrese el valor de cantidad: ";
    cin>>cantidad;//ingresamos el valor que paga
    cout<<endl;
    cout << "cuanto cuesta el producto : ";
    cin >> deuda;//ingresamos el valor de lo que compro
    cambio=cantidad-deuda;//operacion aritmetica para saber cuanto hay que dar de vuelto
    cout << "Valor de cambio: " << cambio << endl; //impresion en pantalla del cambio
    cout<<endl;
    moneda_de_1=cambio%100;//igualamos el valor mas bajo para que sea un valor entero solo tomaro los valores enteros
    billete_de_20=(moneda_de_1-moneda_de_1%20)/20;//hacemos el residuo del billete de a 20
    moneda_de_1=moneda_de_1%20;//obtengo la cantidad de monedas para su residua 
    billete_de_10=(moneda_de_1-moneda_de_1%10)/10;//hacemos el residuo del billete de a 10
    moneda_de_1=moneda_de_1%10;//obtengo la cantidad de monedas para su residua 
    billete_de_5=(moneda_de_1-moneda_de_1%5)/5;//realizo la comparacion con las monedas dividendo para el billete que necesito  
    moneda_de_1=moneda_de_1%5;//obtengo la cantidad de monedas para su residua 
   
     if( moneda_de_1>5 || billete_de_5>5||billete_de_10>5||billete_de_20>5){//condicion para que solo me muestre maximo hasta 5 billetes y 5 monedas
     	cout<<"no hay suficientes monedas o billetes para dar cambio"<<endl;
       }else{ //si no cumple la condicion imprima cuanto necesito
    cout << "monedas de 1 dolar: " << moneda_de_1 << endl;
    cout << "billetes de 5: " << billete_de_5 << endl;
    cout << "billetes de 10: " << billete_de_10 << endl;
    cout << "billetes de 20: " << billete_de_20 << endl;
}
    return 0;
}

