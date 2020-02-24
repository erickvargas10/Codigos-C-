#include <iostream>
using namespace std;
int main (){
    int billete_de_5;//variable que simboliza los billetes de 5
    int billete_de_20;//variable que simboliza los billetes de 5
    int billete_de_10;//variable que simboliza los billetes de 5
    int moneda_de_1;//variable que simboliza las monedas de 1
    int cambio; //variable cantidad valor con la que paga 

    cout << "Ingrese el cambio " << endl; //impresion en pantalla del cambio
    cin>>cambio;
    
  //PROGRAMACION SELECCION DE VARIABLES DE FORMA CORRECTA
    
    cout<<"FORMA CORRECTA"<<endl;
    moneda_de_1=cambio%100;//Elige el valor entero de las unidades 
    
    billete_de_20=(moneda_de_1-moneda_de_1%20)/20;//Cuantos necesita
    cout<<"calculo 1 billete de a 20 = "<<billete_de_20<<endl;
    moneda_de_1=moneda_de_1%20;//cuanto sobra
    cout<<"calculo 2 billete de a 20 ="<<moneda_de_1<<endl;
    cout<<endl;
    billete_de_10=(moneda_de_1-moneda_de_1%10)/10;
    cout<<"calculo 1 billete de a 10 ="<<billete_de_10<<endl;
    moneda_de_1=moneda_de_1%10;
	cout<<"calculo 2 billete de a 10 ="<<moneda_de_1<<endl;
    cout<<endl; 
    billete_de_5=(moneda_de_1-moneda_de_1%5)/5;
     cout<<"calculo billete de a 5 ="<<billete_de_5<<endl;
    moneda_de_1=moneda_de_1%5;
	cout<<"calculo moneda 1 dolar  ="<<moneda_de_1<<endl;
    cout<<endl;  
    
    //IMPRESION DE RESULTADOS
   
    cout << "monedas de 1 dolar: " << moneda_de_1 << endl;
    cout << "billetes de 5: " << billete_de_5 << endl;
    cout << "billetes de 10: " << billete_de_10 << endl;
    cout << "billetes de 20: " << billete_de_20 << endl;
    
    cout<<endl;
    
    //PROGRAMACION SELECCION DE VARIABLES DE FORMA INCORRECTA
    
    
    cout<<"FORMA INCORRECTA"<<endl;
    
    moneda_de_1=cambio%100;//igualamos el valor mas bajo para que sea un valor entero solo tomaro los valores enteros
    
    billete_de_5=(moneda_de_1-moneda_de_1%5)/5;
    cout<<"calculo billete de a 5 ="<<billete_de_5<<endl;
    moneda_de_1=moneda_de_1%5;
	cout<<"calculo moneda de 1 dolar  ="<<moneda_de_1<<endl;
    cout<<endl;  
    
    billete_de_10=(moneda_de_1-moneda_de_1%10)/10;
    cout<<"calculo 1 billete de a 10 ="<<billete_de_10<<endl;
    moneda_de_1=moneda_de_1%10;
	cout<<"calculo 2 billete de a 10 ="<<moneda_de_1<<endl;
    cout<<endl; 
    
    billete_de_20=(moneda_de_1-moneda_de_1%20)/20;//Cuantos necesita
    cout<<"calculo 1 billete de a 20 = "<<billete_de_20<<endl;
    moneda_de_1=moneda_de_1%20;//cuanto sobra
    cout<<"calculo 2 billete de a 20 ="<<moneda_de_1<<endl;
    cout<<endl;
      //IMPRESION DE RESULTADOS
    cout << "monedas de 1 dolar: " << moneda_de_1 << endl;
    cout << "billetes de 5: " << billete_de_5 << endl;
    cout << "billetes de 10: " << billete_de_10 << endl;
    cout << "billetes de 20: " << billete_de_20 << endl;
    
    

    return 0;
}
