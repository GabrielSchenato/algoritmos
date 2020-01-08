#include <iostream>
#include <stdlib.h>
using namespace std;
main ()
{
	float metros_cubicos, residencial, comercial, industrial, pis, cofins, valor_final, saneamento, restante, valor_final_conta;
	
	cout << "POR FAVOR, INFORME O VALOR CONSUMIDO EM METROS CUBICOS: ";
	cin >> metros_cubicos;
	cout << "POR FAVOR, INFORME O TIPO DE SANEAMENTO BASICO (1-RESIDENCIAL,2-COMERCIAL e 3-INDUSTRIAL): ";
	cin >> saneamento;
	
	residencial = 5;
	comercial = 10;
	industrial = 15;
	
	if (metros_cubicos <=10)
	{
		valor_final = 2.99 ;
	}
	else
	{
		if (metros_cubicos <=25)
		{
			restante = metros_cubicos - 10;
			restante = 5.48*restante;
			valor_final = (10*2.99) + restante;
		}
		else
		{
			if (metros_cubicos <=50)
			{
				restante = metros_cubicos - 25;
				restante = 7.69* restante;
				valor_final = (10*2.99) + (5.48*15) + restante;
			}
			else
			{
				restante = metros_cubicos - 50;
				restante = 9.22 * restante;
				valor_final = (10*2.990) + (5.48*15) + (25*7.69) + restante;
			}
		}
	}
	if (saneamento == 1)
	{
		valor_final_conta = 5 + valor_final;
		pis = valor_final_conta*0.065;
		cofins = valor_final_conta * 0.03;
		valor_final_conta = valor_final_conta + pis + cofins;
		
		cout << "\nO VALOR DO SANEAMENTO BASICO EH: R$" <<residencial;
		cout << "\nO VALOR DO PIS EH: R$" <<pis;
		cout << "\nO VALOR DO COFINS EH: R$" <<cofins;
		cout << "\nO VALOR TOTAL DE SUA CONTA EH: R$" <<valor_final_conta;
	}
	else
	{
		if (saneamento == 2)
		{
	    valor_final_conta = 10 + valor_final;
		pis = valor_final_conta*0.065;
		cofins = valor_final_conta * 0.03;
		valor_final_conta = valor_final_conta + pis + cofins;
		
		cout << "\nO VALOR DO SANEAMENTO BASICO EH: R$" <<comercial;
		cout << "\nO VALOR DO PIS EH: R$" <<pis;
		cout << "\nO VALOR DO COFINS EH: R$" <<cofins;
		cout << "\nO VALOR TOTAL DE SUA CONTA EH: R$" <<valor_final_conta;
		}
		else
		{
	    valor_final_conta = 15 + valor_final;
		pis = valor_final_conta*0.065;
		cofins = valor_final_conta * 0.03;
		valor_final_conta = valor_final_conta + pis + cofins;
		
		cout << "\nO VALOR DO SANEAMENTO BASICO EH: R$" <<industrial;
		cout << "\nO VALOR DO PIS EH: R$" <<pis;
		cout << "\nO VALOR DO COFINS EH: R$" <<cofins;
		cout << "\nO VALOR TOTAL DE SUA CONTA EH: R$" <<valor_final_conta;
		}
	}
	
}
