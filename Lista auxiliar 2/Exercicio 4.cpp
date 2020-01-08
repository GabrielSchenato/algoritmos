#include <iostream>
#include <stdlib.h>
using namespace std;
main ()
{
	int numero;
	
	cout << "POR FAVOR, DIGITE O NUMERO A SER VERIFICADO: ";
	cin >> numero;
	
	if (numero > 0)
	{
		cout << "\nO NUMERO " <<numero << " EH POSITIVO";
		
    }
    else
    {
    	if (numero < 0)
    	{
    		cout << "\nO NUMERO " <<numero << " EH NEGATIVO";
    	}
	else
	{
		cout << "\nO NUMERO 0 EH NEUTRO";
	}
}
	cout << "\n" << endl;
	system ("pause");
}
