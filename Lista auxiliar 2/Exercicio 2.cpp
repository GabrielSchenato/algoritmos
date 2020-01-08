#include <iostream>
#include <stdlib.h>
using namespace std ;
main ()
{
	float vendas, salario;
	
	cout << "POR FAVOR, DIGITE O VALOR DE VENDAS: R$";
	cin >> vendas;
	
	if (vendas >= 20000)
	{
		salario = vendas *0.1;
		cout << "\nSEU SALARIO EH DE: R$" << salario;
		
	}
	else
	{
		salario = vendas *0.075;
		cout << "\nSEU SALARIO EH DE: R$" << salario;
	}
	cout << "\n\n" <<endl;
	system ("pause");
}
