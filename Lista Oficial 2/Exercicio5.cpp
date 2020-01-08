#include <iostream>
#include <stdlib.h>
using namespace std;
main ()
{
	float numero_reserva, numero_massagens, valor_diarias, qtde_hospedes, adicional_pessoas, qtde_diarias; 
	float valor_massagem, valor_frigobar, valor_bar, iss, valor_final, garcom;
	string nome_responsavel, tipo_quarto;
	
	cout << "\n----------------------------------------------";
	cout << "\n                 HOTEL SONO BOM               ";
	cout << "\n----------------------------------------------";
	
	cout << "\n\nPOR FAVOR, INFORME O NUMERO DA RESERVA: ";
	cin >> numero_reserva;
	
	cout << "\nPOR FAVOR, INFORME O NOME DO RESPONSAVEL: ";
	cin >> nome_responsavel;
	
	cout << "\nPOR FAVOR, INFORME O TIPO DE QUARTO: ";
	cin >> tipo_quarto;
	
	cout << "\nPOR FAVOR, INFORME A QUANTIDADE DE HOSPEDES: ";
	cin >> qtde_hospedes;
	
	cout << "\nPOR FAVOR, INFORME A QUANTIDADE DE DIARIAS: ";
	cin >> qtde_diarias;
	
	cout << "\nPOR FAVOR, INFORME O VALOR CONSUMIDO NO FRIGOBAR: R$" ;
	cin >> valor_frigobar;
	
	cout << "\nPOR FAVOR, INFORME O NUMERO DE MASSAGENS UTILIZADAS PELO CLIENTE: ";
	cin >> numero_massagens;
	
	cout << "\nPOR FAVOR, INFORME O VALOR CONSUMIDO NO BAR: R$" ;
	cin >> valor_bar; 
	
	if(tipo_quarto == "standard")
	{
		valor_diarias = 50*qtde_diarias;
	}
	else
	{
		if (tipo_quarto == "luxo")
		{
			valor_diarias = 80*qtde_diarias;
		}
		else
		{
			valor_diarias = 150*qtde_diarias;
		}
	}
	if (numero_massagens >3)
	{
		valor_massagem = 65*numero_massagens;
	}
	else
	{
		valor_massagem = 80*numero_massagens;
	}
	if (qtde_hospedes == 3 || qtde_hospedes == 4)
	{
		adicional_pessoas = 20*qtde_diarias;
	}
	else
	{
		if (qtde_hospedes >5)
		{
			adicional_pessoas = 40*qtde_diarias;
		}
		else
		{
			adicional_pessoas = 0;
		}
	}
	if (valor_frigobar >0)
	{
		valor_frigobar = valor_frigobar +12;
	}
	
	if (valor_bar >0)
	{
		garcom = valor_bar * 0.10;
		valor_bar = valor_bar + garcom;
	}
	valor_final = valor_diarias + valor_massagem + adicional_pessoas + valor_frigobar + valor_bar;
	
	if (qtde_diarias >10)
	{
		iss = valor_final*0.01;
	}
	else
	{
		if (qtde_diarias >5)
		{
			iss = valor_final*0.03;
		}
		else
		{
			iss = valor_final*0.05;
		}
	}
	
	valor_final = valor_final + iss;
	
	cout << "\n-------------------------------------------------------------------";
	cout << "\n                             CONTA FINAL                           ";
	cout << "\n-------------------------------------------------------------------";
	cout << "\n\nO NUMERO DA RESERVA EH: " <<numero_reserva;
	
	cout << "\nO NOME DO RESPONSAVEL PELA RESERVA EH: " <<nome_responsavel;
	
	cout << "\nTIPO DE QUARTO: "<<tipo_quarto;
	
	cout << "\nNUMERO DE DIAS: " <<qtde_diarias;
	
	cout << "\nVALOR DAS DIARIAS: R$" <<valor_diarias;
	
	cout << "\nVALOR TOTAL DO SERVICO MASSAGEM: " <<valor_massagem;
	
	cout << "\nVALOR TOTAL DO SERVICO DE FRIGOBAR: R$" <<valor_frigobar;
	
	cout << "\nVALOR TOTAL DO SERVICO DE BAR: R$" << valor_bar;
	
	cout << "\nVALOR DE IMPOSTO (ISS): R$" <<iss;
	
	cout << "\nVALOR DA CONTA TOTAL: R$" <<valor_final;
	 	 
	
}
