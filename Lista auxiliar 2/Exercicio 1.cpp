#include <iostream>
#include <stdlib.h>
using namespace std;
main ()
{
	float peso, multa;
	
	cout << "POR FAVOR, INFORME O PESO PESCADO: ";
	cin >> peso;
	
	if (peso >50)
	{
		multa = (peso-50) * 4;
		cout << "\n\nSUA MULTA FOI DE: RS"  <<multa ;
	}
	
	
}
