//Um hotel cobra R$ 60.00 a di�ria e mais uma taxa de servi�os. Construa um algoritmo que
//mostre o nome e a conta de um cliente, tendo como base as seguintes taxas de servi�os �:
//R$ 5.50 por di�ria, se o n�mero de di�rias for maior que 5;
//R$ 7.00 por di�ria, se o n�mero de di�rias for igual a 5;
//R$ 9.00 por di�ria, se o n�mero de di�rias for menor que 5. 


#include <iostream>
#include <stdlib.h>
using namespace std;
main()
{
	string nome;
	int numero_diaria;
	float precodiaria, precodiaria1, precodiaria2, precodiaria3, valorfinal;
	
	cout << "POR FAVOR, INFORME O NOME DO CLIENTE: ";
	cin >> nome;
	
	cout << "POR FAVOR, INFORME O NUMERO DE DIARIA: ";
	cin >> numero_diaria;
	
	precodiaria = 60;
	precodiaria1 = 5.50;
	precodiaria2 = 7;
	precodiaria3 = 9;
	
	if (numero_diaria >5)  
	{
		valorfinal = (precodiaria*numero_diaria) + (numero_diaria*precodiaria1);
		
		cout << "O VALOR DA CONTA DO CLIENTE " <<nome <<" EH DE R$: " <<valorfinal;
		
	}
	else
	{
		if (numero_diaria == 5)
		{
			valorfinal = (precodiaria*numero_diaria) + (numero_diaria*precodiaria2);
			
			cout << "O VALOR DA CONTA DO CLIENTE " <<nome <<" EH DE R$: " <<valorfinal;
		}
		else
		{
			valorfinal = (precodiaria*numero_diaria) + (numero_diaria*precodiaria3);
			
			cout << "O VALOR DA CONTA DO CLIENTE " <<nome <<" EH DE R$: " <<valorfinal;
		}
	}
	
	
	
}
