//Desenvolva um programa para calcular o preço final de um carro. Tendo como base o valor
//inicial do carro, informado pelo usuário, questione o proprietário se o veículo possui alguns
//opcionais, conforme o esquema abaixo.

//Vidro elétrico = adiciona R$ 500,00
//Ar condicionado = adiciona R$ 2000,00
//Trava central e Alarme = adiciona R$ 500,00
//Pintura Metálica = adiciona R$ 1000,00
//Direção Hidráulica = adiciona R$ 2500,00

//Obs.: Caso o proprietário opte por pagamento à vista, calcule um desconto de 5% 

#include <iostream>
#include <stdlib.h>
using namespace std;
main ()
{
	float valor_inicial, valor_final, desconto, opcional1, opcional2, opcional3, opcional4, opcional5;
	int  opcional1valor, opcional2valor, opcional3valor, opcional4valor, opcional5valor, pagamento;
	
	cout << "POR FAVOR, INFORME O PRECO INICIAL DO VEICULO: ";
	cin >> valor_inicial;
	
	cout << "\n\nPOR FAVOR, INFORME A FORMA DE PAGAMENTO (1-A VISTA, 2-A PRAZO)";
	cin >> pagamento;
	
	cout << "\n\nPOR FAVOR, INFORME SE POSSUE VIDRO ELETRICO (1-SIM, 0=NAO): ";
	cin >> opcional1valor;
	
	cout << "\n\nPOR FAVOR, INFORME SE POSSUE AR CONDICIONADO (1-SIM, 0=NAO): ";
	cin >> opcional2valor;
	
	cout << "\n\nPOR FAVOR, INFORME SE POSSUE TRAVA CENTRAL E ALARME (1-SIM, 0=NAO): ";
	cin >> opcional3valor;
	
	cout << "\n\nPOR FAVOR, INFORME SE POSSUE PINTURA METALICA (1-SIM, 0=NAO): ";
	cin >> opcional4valor;
	
	cout << "\n\nPOR FAVOR, INFORME SE POSSUE DIRECAO HIDRAULICA (1-SIM, 0=NAO): ";
	cin >> opcional5valor;
	
	opcional1 = 500;
	opcional2 = 2000;
	opcional3 = 500;
	opcional4 = 1000;
	opcional5 = 2500;
	
	opcional1 = opcional1*opcional1valor;
	opcional2 = opcional2*opcional2valor;
	opcional3 = opcional3*opcional3valor;
	opcional4 = opcional4*opcional4valor;
	opcional5 = opcional5*opcional5valor;
	
	if (pagamento == 1)
	{
		valor_final = valor_inicial + opcional1 + opcional2 + opcional3 + opcional4 + opcional5;
		desconto = valor_final*0.05;
		valor_final = valor_final- desconto;
		
		cout << "\n\nO VALOR FINAL DO VEICULO COM 5% DE DESCONTO EH: R$" <<valor_final;
		
	}
	else
	{
		valor_final = valor_inicial + opcional1 + opcional2 + opcional3 + opcional4 + opcional5;
	
		cout << "\n\nO VALOR FINAL DO VEICULO A PRAZO EH: R$" <<valor_final;
	}
	
}
