//Escreva algoritmo que, para uma conta banc�ria, leia o seu n�mero, o saldo, o tipo de
//opera��o a ser realizada (dep�sito ou retirada) e o valor da opera��o. Ap�s, determine e
//mostre o novo saldo. Se o novo saldo ficar negativo, deve ser mostrada, tamb�m, a
//mensagem �conta estourada�. 


#include <iostream>
#include <stdlib.h>
using namespace std;
main ()
{
	float numero_conta, saldo, operacao, valor_operacao;
	
	cout << "POR FAVOR, INFORME O NUMERO DE SUA CONTA: ";
	cin >> numero_conta;
	
	cout << "\nPOR FAVOR, INFORME O SALDO DA CONTA: R$";
	cin >> saldo;
	
	cout << "\nPOR FAVOR, INFORME O TIPO DE OPERACAO (1-DEPOSITO, 2-RETIRADA): ";
	cin >> operacao;
	
	if (operacao == 1)
	{
		cout << "\nNUMERO DA CONTA: " <<numero_conta;
		cout << "\nPOR FAVOR, INFORME O VALOR DO DEPOSITO: R$";
		cin >> valor_operacao;
		
		saldo = saldo + valor_operacao;
		
		cout << "\nO SALDO DE SUA CONTA AGORA EH: R$" <<saldo;
	}
	else
	{
		cout << "\nNUMERO DA CONTA: " <<numero_conta;
		cout << "\nPOR FAVOR, INFORME O VALOR DA RETIRADA: R$";
		cin >> valor_operacao;
		
		saldo = saldo - valor_operacao;
		
		cout << "\nO SALDO DE SUA AGORA EH: R$" <<saldo; 
	}
	if (saldo <0)
	{
		cout <<"\n\nALERTA SUA CONTA ESTA ESTOURADA!!!";
	}
	
	
	
}
