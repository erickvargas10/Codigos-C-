#include <iostream>
using namespace std;

int mochila(int W, int wt[], int b[], int n)
//peso W ; wt distintos pesos ; //beneficios o dinero; n//elementos disponibles
{
	// matriz de elementos y su peso
	int V[n + 1][W + 1];

	// linea 1 
	for(int w = 0; w <= W; w++)//menor al peso
		V[0][w] = 0;
	for(int i = 1; i <= n; i++)//menor a los elementos
		V[i][0] = 0;

	for(int i = 1; i <= n; i++)	{
		for(int w = 1; w <= W; w++){	
			// elemento pode fazer parte da solução
			if(wt[i - 1] <= w){
				// maxima capacidad en la mochila entre beneficios y peso
				if((b[i - 1] + V[i - 1][w - wt[i - 1]]) > V[i - 1][w])
					V[i][w] = b[i - 1] + V[i - 1][w - wt[i - 1]];
				else
					V[i][w] = V[i - 1][w];
			}
			else
				V[i][w] = V[i - 1][w]; 
		}
	}

	// retorna o valor máximo colocado na mochila
	return V[n][W];
}

int main(int argc, char *argv[])
{
	// capacidad 20 kilos en la mochila
	int W = 10;

	// número de elementos
	int n = 5;

	// beneficios
	int b[] = {3, 5, 8, 4, 10};

	// peso
	int wt[] = {2, 4, 5, 3, 9};

	// maximo valor colocado
	int max_valor = mochila(W, wt, b, n);

	cout << "Valor maximo: " << max_valor << endl;

	return 0;
}
