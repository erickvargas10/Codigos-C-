
#include <stdlib.h>
#include <time.h>
#include<iostream>
using namespace std;
 
int main()
{
	int array[5] = { 12, 2, 15, 7,  5}; //array a ordenar
    int num, c;
    srand(time(NULL));
    
    for(c = 1; c <=5; c++)
    {
        num = 1 + rand() % (5-1);
        cout << num<< " ";
    }
    
    return 0;
}

         
