//Construa um algoritmo que leia uma cole��o X [1..20] e ap�s troque o 1� elemento com o 20�; o 2� com o 19�; e assim por diante. Ao final, apresente X na tela.   
#include <iostream>
using namespace std;
main ()
{
	float Y[19], X[19];
	int x=0, y=0;
		
	for ( x; x<20 ; x++)
	{
		
		cout << "Informe o valor: ";
		cin >> Y[x];
		
	}	
	for ( y ; y<20; y++)
	{
		x--;
		X[y] = Y[x];
		
		
	}
	for (int z=0; z<20 ; z++)
	{
		
		cout << "\n"<<X[z];
		
	}
	
}
