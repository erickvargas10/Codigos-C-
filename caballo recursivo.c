#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

#define tam 8

int iter = 0;
void carga_tablero(int arry[][tam])
{
     int j,i;
     for (j=0; j<tam; j++)
     {
         for (i=0; i<tam; i++)
         {arry[j][i] = 0;}
     }
}//carga

void mostrar(int arry[][tam])
{

     int j,i;

     for (i=0; i<tam; i++) {
         for (j=0; j<tam; j++){
		 cout<<arry[j][i]);
		 }
         cout<<" ";
     }

}//carga

int final(int arry[][tam])
{
    int j,i;

     for (i=0; i<tam; i++)
     {
         for (j=0; j<tam; j++)
         {
             if (arry[j][i] == 0)
             {
                 return 0;//no esta listo
             }

         }
     }
     return 1;
}

void recursivo(int tab[][tam],int numero,int x, int y)
{
     int arrx[]={  1, 2, 2, 1,-1,-2,-2,-1 };
     int arry[]={ -2,-1, 1, 2, 2, 1,-1,-2 };
     int newx = 0;
     int newy = 0;
     int indice = 0;

     while(indice < 8 && final(tab) != 1)
     {

          newx = arrx[indice] + x;
          newy = arry[indice] + y;

          if ((tab[newx][newy] == 0) && (newx < tam && newx >= 0 && newy < tam && newy >= 0))
          {
              tab[newx][newy]=numero;

              if (numero != tam*tam)
              {
                  recursivo(tab,numero+1,newx,newy);
              }//if

          }//if

          indice+=1;
          iter+=1;
     }//while
     if (final(tab) != 1)//mientras no este completado
     tab[x][y]=0;

}

int main ()
{
    int tablero[tam][tam];
    int columna = 0;
    int fila = 0;
    carga_tablero(tablero);//rellena tablero con 0
    tablero[columna][fila]=1;//ubicacion inicial caballo
    recursivo(tablero,2,columna,fila);//busqueda solucion
    cout<<" ",columna,fila,iter);
    mostrar(tablero);
    return 0;
}
