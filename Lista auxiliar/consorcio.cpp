#include <iostream>
#include <stdlib.h>
using namespace std;
main()
{
	float numero_prestacoes, prestacoes_pagas, valor_prestacoes, qtde_paga, saldo_devedor;
	
	cout << "Ola, seja bem vindo";
	cout <<"\n\nPor favor, digite o numero de prestacoes: ";
	cin >> numero_prestacoes;
	cout << "\nPor favor, digite quantas prestacoes foram pagas: ";
	cin >> prestacoes_pagas;
	cout << "\nPor favor, digite o valor das prestacoes: ";
	cin >> valor_prestacoes;
	
	qtde_paga = prestacoes_pagas * valor_prestacoes;
	saldo_devedor = valor_prestacoes * (numero_prestacoes - prestacoes_pagas);
	cout << "\nO VALOR TOTAL PAGO EH: " <<"R$" << qtde_paga ;
	cout << "\n\nO VALOR A SER PAGO EH: " <<"R$" << saldo_devedor; 
    cout <<endl;
    system ("pause");
 } 
