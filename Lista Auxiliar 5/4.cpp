//Construa um algoritmo que leia uma coleção X [1..20] e após troque o 1º elemento com o 20º; o 2º com o 19º; e assim por diante. Ao final, apresente X na tela.   
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
