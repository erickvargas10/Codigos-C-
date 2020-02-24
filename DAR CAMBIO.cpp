#ifdef __MSDOS__
    #include <iostream.h>
    #include <stdlib.h>
#else
    #include <iostream>
    #include <cstdlib>
    using namespace std;
#endif

int main (void)
{
    int billete_de_020, billete_de_050, billete_de_100, billete_de_200, cambio;
    int cantidad_entregada, deuda, moneda_de_01, moneda_de_02, moneda_de_05;
    int moneda_de_10;
    cout << "Ingrese el valor de cantidad entregada: ";
    cin >> cantidad_entregada;
    cin.get();
    cout << "Ingrese el valor de deuda: ";
    cin >> deuda;
    cin.get();
    cambio=cantidad_entregada-deuda;
    
    
    moneda_de_01=cambio%10;
    cout<<moneda_de_01<<endl;
    billete_de_200=(cambio-moneda_de_01)/200;
    billete_de_100=(moneda_de_01-moneda_de_01%100)/100;
    moneda_de_01=moneda_de_01%100;
    billete_de_050=(moneda_de_01-moneda_de_01%50)/50;
    moneda_de_01=moneda_de_01%50;
    billete_de_020=(moneda_de_01-moneda_de_01%20)/20;
    moneda_de_01=moneda_de_01%20;
    moneda_de_10=(moneda_de_01-moneda_de_01%10)/10;
    moneda_de_01=moneda_de_01%10;
    moneda_de_05=(moneda_de_01-moneda_de_01%5)/5;
    moneda_de_01=moneda_de_01%5;
    moneda_de_02=(moneda_de_01-moneda_de_01%2)/2;
    moneda_de_01=moneda_de_01%2;
    cout << "Valor de billete de 020: " << billete_de_020 << endl;
    cout << "Valor de billete de 050: " << billete_de_050 << endl;
    cout << "Valor de billete de 100: " << billete_de_100 << endl;
    cout << "Valor de billete de 200: " << billete_de_200 << endl;
    cout << "Valor de cambio: " << cambio << endl;
    cout << "Valor de moneda de 01: " << moneda_de_01 << endl;
    cout << "Valor de moneda de 02: " << moneda_de_02 << endl;
    cout << "Valor de moneda de 05: " << moneda_de_05 << endl;
    cout << "Valor de moneda de 10: " << moneda_de_10 << endl;
    cout << endl;
    system ("pause");
    return EXIT_SUCCESS;
}
   

