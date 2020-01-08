//3. Construir um algoritmo que determine o menor elemento para um conjunto de 10 valores.
#include <iostream>
using namespace std;
main ()
{
	float valor, menor = 99999;
	for (int n = 1 ; n <=10 ; n++)
	{
		cout << "Por Favor, informe 10 valores: ";
		cin >> valor;
		if (valor <menor)
		{
			menor = valor;
		}
	}
	
	cout << "O menor valor eh: " <<menor;
}
