#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main (){
	cout<<"                 ****************************************"<<endl;
    cout<<"                 *                                      *"<<endl;
    cout<<"                 *       ALGORTIMO DAR CAMBIO           *"<<endl;
    cout<<"                 *                                      *"<<endl;
    cout<<"                 ****************************************"<<endl;
	
//..............VARIABLES PARA LA REALIZACION DE CAMBIOS Y MARCAS DE BILLETES..................
	//1._BILLETE OPERACION 
	//2._VALOR ES LA COMPARACION 
	//3 :: ACUMULADOR CUANDO SE VUELVA A INGRESAR DINERO
	int billete_de_20,valor4,acum4=0;
    int billete_de_10,valor3,acum3=0;
    int billete_de_5,valor2,acum2=0;
    int moneda_de_1,valor1,acum1=0;
    int cantidad;//variable con la que se paga el dinero
    int deuda;//variable para ingresar el costo de un producto
    int cambio; //Cuanto debo dar de vuelto
    int total;//resultado de billetes ingresados
    int opcion;//ingreso opcion en el case
    int cont=0;//variable acumuladora cuando se ingresa dinero
    
//.............CIERRE DE INICIALIZACION PARA REALIZACION DE MENU INTERACTIVO....................
    do{
    	

//...................MENU DE OPCIONES EN NUESTRO PROGRAMA......................................
    cout<<"1._ INGRESAR DINERO A CAJA : "<<endl;
    cout<<"2._COMPRAR PRODUCTO : "<<endl;
    cout<<"2._DETALLE EN BILLETES : "<<endl;
    cout<<"3._SALIR"<<endl;
    
    cout<<"Ingrese opcion"<<endl;
    cin>>opcion;

    switch (opcion){
  
    case 1://INGRESO DE VALORES 
    	{system(" color 0C");//FUNCION COLOR LETRAS	
    	
//,,,,,,,,,,,,,,,,,,,MENU PARA INGRESO DE VALORES ("BILLETES").................................
    cout<<"           INGRESE CUANTOS BILLETES DE 20 POSEE : "; cin>>valor4;cout<<endl;
    cout<<"           INGRESE CUANTOS BILLETES DE 10 POSEE  : "; cin>> valor3; cout<<endl;
    cout<<"           INGRESE CUANTOS BILLETES DE 5 POSEE  : "; cin>>valor2; cout<<endl;
    cout<<"           INGRESE CUANTAS MONEDAS DE 1 DOLAR POSEE  : "; cin>>valor1;cout<<endl;
//..................ACUMULADORES CUANDO USUARIO VUELVE A INGRESAR MAS DINERO...................
    acum1=acum1+valor1;
    acum2=acum2+valor2;
    acum3=acum3+valor3; 
	acum4=acum4+valor4;

  
  total =(valor4*20+valor3*10+valor2*5+valor1);//FUNCION ARITMETICA PARA TENER RESULTADO TOTAL
    cont=cont+total;//CONTADOR ACUMULADOR 
      cout<<"******CAJA**** : "<<cont<<endl;
      cout<<endl;
         }

    break;
   
    
    case 2://TRANSACCION COMPRA
    {system(" color 0A");//FUNCION COLOR LETRAS
    	  
    if(cont==0){//CONDICION SI ESQUE NO HAY DINERO
    	cout << ".........DEBE INGRESAR DINERO EN CAJA.............. "<<endl;;
    	break;
    	
    	
    }else{	
	cout << "       Cuanto cuesta el producto : ";
    cin >> deuda;//ingresamos el valor de lo que compro
    cout << "       Ingrese el valor con el que va a pagar: ";
    cin>>cantidad;//ingresamos el valor que paga
    cout<<endl;
    cambio=cantidad-deuda;//operacion aritmetica para saber cuanto hay que dar de vuelto
    
    if (cantidad<deuda){//CONDICION SI CLIENTE PAGA MENOS DE LO QUE DEBE
    	cout<<"     Ingrese correctamente el valor con el que va a pagar"<<endl;
    	break;
	}else{
//........................OPERACIONES Y TRAMNSACCIONES DE BILLETES QUE NECESITO ..........
    cout << "       Valor de cambio: " << cambio << endl; //impresion en pantalla del cambio
    cout<<endl;
    moneda_de_1=cambio%100;//igualamos el valor mas bajo para que sea un valor entero 
    billete_de_20=(moneda_de_1-moneda_de_1%20)/20;//hacemos el residuo del billete de a 20
    moneda_de_1=moneda_de_1%20;//obtengo la cantidad de monedas para su residuo
    billete_de_10=(moneda_de_1-moneda_de_1%10)/10;//hacemos el residuo del billete de a 10
    moneda_de_1=moneda_de_1%10;//obtengo la cantidad de monedas para su residua 
    billete_de_5=(moneda_de_1-moneda_de_1%5)/5;//realizo la comparacion con las monedas dividendo para el billete que necesito    
    moneda_de_1=moneda_de_1%5;//obtengo la cantidad de monedas para su residua 
    
//................CONDICION QUE ME MUESTRA SI UN VALOR EXCEDE LA CANTIDAD DE UNIDADES DISPONIBLES......
    if(cambio>total ){
     		cout<<"..........no hay suficiente dinero en caja..........."<<endl;
     		break;
     		}if(acum1<moneda_de_1){
     				cout<<"......no hay suficientes monedas de 1 dolar...... : "<<endl;
     				cout<<endl;
     				break;
			 }if(acum2< billete_de_5){
			 		cout<<".....no hay suficientes billetes de 5 dolares..... : "<<endl;
			 		break;
			 }if(acum3< billete_de_10){
			 		cout<<".....no hay suficientes billetes de 1o dolares..... : "<<endl;
			 		break;
			 }if(acum4< billete_de_20){
			 		cout<<".....no hay suficientes billetes de 20 dolares...... : "<<endl;
			 		break;
			 }
       else{ 
//.............si no cumple la condicion imprima cuanto necesito..................................
 cout<<"    ****************************************"<<endl;
	cout << "         BILLETES DE 20: " << billete_de_20 << endl;
	cout << "         BILLETES DE 10: " << billete_de_10 << endl;
	cout << "         BILLETES DE 5: " << billete_de_5 << endl;
    cout << "         MONEDAS 1 DOLAR: " << moneda_de_1 << endl;
 cout<<"    ****************************************"<<endl;



    cont=cont-cambio;
    cout << " *****CAJA**** : " << cont<< endl;
    cout<<endl;
//................ACUMULADORES CUANDO SE GASTA DINERO DINERO....................................
    acum1=acum1-moneda_de_1;
    acum2=acum2-billete_de_5;
    acum3=acum3-billete_de_10; 
	acum4=acum4-billete_de_20;
    cout<<endl;
}
}
}
}
    		break;
    
    		
    case 3: //OPCION 3 TERMINAR PROGRAMA
    {system(" color 0B");//FUNCION COLOR LETRAS		
//..................IMPRESION DE RESULTADO TOTAL Y CANTIDAD DE BILLETES QUE POSEO...............
    cout << " *****CAJA**** : " << cont<< endl;
    cout<<"    ****************************************"<<endl;
    cout<<"          BILLETES DE 20  : "<<acum4<<endl;
    cout<<"          BILLETES DE 10 : "<<acum3<<endl;
    cout<<"          BILLETES DE 5: "<<acum2<<endl;
    cout<<"          MONEDAS 1 DOLAR : "<<acum1<<endl;
    cout<<"    ****************************************"<<endl;
    cout<<endl;
}
   	break;
    case 4: //OPCION 3 TERMINAR PROGRAMA
    cout<<"ADIOS"<<endl;
    		 return 0;
    				
    break;
    
				
    default:   //DEFAULT PARA OPCION INCORRECTA 
    cout<<"INGRESE OPCION CORRECTA"<<endl;
   	break;
    					
	} 	
	}while(opcion=4);//CIERRE DE BUCLE PARA REALIZACION DE MENU INTERACTIVO
}


