#include <iostream>
#include <stdlib.h>
using namespace std;
main()
{
	float cotacao_dolar, valor_em_dolares, valor_final;
	
	cout <<"                              OLA, SEJA BEM-VINDO";
	cout << "\n\n\nPor favor, insira a cotacao do dolar (Usando ponto): ";
	
	cin >> cotacao_dolar;
	
	cout << "\nPor favor, insira o valor em dolares a ser convertido: ";
	
	cin >> valor_em_dolares;
	
	valor_final = cotacao_dolar*valor_em_dolares;
	
	cout << "\nO valor convertido para reais eh: " << "R$" <<valor_final <<endl;
	cout <<"\n";
	system ("pause");
}
