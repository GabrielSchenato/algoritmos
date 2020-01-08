#include <iostream>
#include <stdlib.h>
using namespace std ;
main()
{
	float valor_final, imposto, residencial, comercial, pulso_excedente, valor_interurbanos;
	int numero_telefone, pulsos_registrados, total_interurbanos, tipo_telefone;
	string nome;
	
	cout << "POR FAVOR, DIGITE O TIPO DE TELEFONE (1-RESIDENCIAL, 2-COMERCIAL): ";
	cin >> tipo_telefone;
	
	cout << "POR FAVOR, DIGITE O NUMERO DO TELEFONE: ";
	cin >> numero_telefone;
	
	cout << "POR FAVOR, DIGITE O NOME DO CONSUMIDOR: ";
	cin >> nome;
	
	cout << "POR FAVOR, DIGITE O NUMERO DE PULSOS REGISTRADOS: ";
	cin >> pulsos_registrados;
	
	cout << "POR FAVOR, DIGITE O TOTAL DE MINUTOS INTERURBANOS: ";
	cin >> total_interurbanos;
	
	residencial = 17.20;
	comercial = 25.80;
	cout <<"\n\n                           ||||||||||||||||||||||||||              ";
	if (tipo_telefone == 1 && pulsos_registrados >90)
	{
	
		pulso_excedente = (pulsos_registrados - 90) * 0.07;
		valor_interurbanos = total_interurbanos * 0.50;
								
		valor_final = 17.20 + pulso_excedente + valor_interurbanos;
		imposto = valor_final * 0.12;
		
		cout << "\n\n\nNOME DO CLIENTE: " <<nome;
		cout << "\nNUMERO DO TELEFONE: " <<numero_telefone;
		cout << "\nTARIFA BASICA: R$" <<residencial;
		cout << "\nVALOR EXCEDENTE POR PULSO: R$" <<pulso_excedente;
		cout << "\nVALOR DOS INTERURBANOS: R$" <<valor_interurbanos;
		cout << "\nVALOR DOS IMPOSTOS PARA O GOVERNO (12%): R$" <<imposto;
		cout << "\nVALOR DA CONTA: R$" <<valor_final <<endl;
		
	}
	else
	{
		if(tipo_telefone == 1)
		{
			valor_interurbanos = total_interurbanos * 0.50;
			valor_final = 17.20 + valor_interurbanos;
			imposto = valor_final * 0.12;
			
			cout << "\n\n\nNOME DO CLIENTE: " <<nome;
		    cout << "\nNUMERO DO TELEFONE: " <<numero_telefone;
		    cout << "\nTARIFA BASICA: R$" <<residencial;
		    cout << "\nVALOR DOS INTERURBANOS: R$" <<valor_interurbanos;
		    cout << "\nVALOR DOS IMPOSTOS PARA O GOVERNO (12%): R$" <<imposto;
		    cout << "\nVALOR DA CONTA: R$" <<valor_final <<endl;
			
			
		}
		else
		{
			if (tipo_telefone == 2 && pulsos_registrados >90)
			{
				pulso_excedente = (pulsos_registrados - 90) * 0.07;
		        valor_interurbanos = total_interurbanos * 0.50;
								
		        valor_final = 25.80 + pulso_excedente + valor_interurbanos;
		        imposto = valor_final * 0.12;
				
			    cout << "\n\n\nNOME DO CLIENTE: " <<nome;
	         	cout << "\nNUMERO DO TELEFONE: " <<numero_telefone;
	        	cout << "\nTARIFA BASICA: R$" <<comercial;
	        	cout << "\nVALOR EXCEDENTE POR PULSO: R$" <<pulso_excedente;
	        	cout << "\nVALOR DOS INTERURBANOS: R$" <<valor_interurbanos;
	        	cout << "\nVALOR DOS IMPOSTOS PARA O GOVERNO (12%): R$" <<imposto;
		        cout << "\nVALOR DA CONTA: R$" <<valor_final <<endl;
			}
			else
			{
				valor_interurbanos = total_interurbanos * 0.50;
				valor_final = 25.80 + valor_interurbanos;
				imposto = valor_final * 0.12;
				
				cout << "\n\n\nNOME DO CLIENTE: " <<nome;
		        cout << "\nNUMERO DO TELEFONE: " <<numero_telefone;
		        cout << "\nTARIFA BASICA: R$" <<comercial;
		        cout << "\nVALOR DOS INTERURBANOS: R$" <<valor_interurbanos;
		        cout << "\nVALOR DOS IMPOSTOS PARA O GOVERNO (12%): R$" <<imposto;
		        cout << "\nVALOR DA CONTA: R$" <<valor_final <<endl;
			}
		}
	}
	cout << "\n";
	system ("pause");
}
	
	
	
