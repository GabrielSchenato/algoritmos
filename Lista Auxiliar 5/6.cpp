//O vôo de uma empresa aérea possui escalas em três cidades, digamos A, B e C. Considerando que para cada passageiro, tem-se o seu nome, a cidade de origem e a 
//cidade destino. Escreva um algoritmo que escreva o nome de todos os passageiros que vão para a cidade A; depois todos que vão para a cidade B; e por fim, todos 
//que vão para a cidade C.
#include <iostream>
using namespace std;
main ()
{
	string nomes_a[100], nomes_b[100], nomes_c[100];
	int cidade, x=0;
	
	cout << "Informe a cidade (1-A, 2-B, 3-C e 0 para encerrar): ";
	cin >> cidade;
	
	while(cidade != 0)
	{
		if(cidade == 1)
		{
			cout << "Informe o nome do passageiro: ";
			cin >> nomes_a[x];
		}
		if(cidade == 2)
		{
			cout << "Informe o nome do passageiro: ";
			cin >> nomes_b[x];
			
		}
		if(cidade == 3)
		{
			cout << "Informe o nome do passageiro: ";
			cin >> nomes_c[x];
			
		}
		x++;
		cout << "Informe a cidade (1-A, 2-B, 3-C e 0 para encerrar): ";
		cin >> cidade;
	}	
	
	for(int z=0; z<x ; z++)
	{
		if	(nomes_a[z] != "")
		{
			cout << "\nPassageiros que vao para cidade A:\n"<<nomes_a[z];
		}
		if (nomes_b[z] != "")
		{
			cout << "\nPassageiros que vao para cidade B:\n"<<nomes_b[z];
		}
		if (nomes_c[z] != "")
		{
			cout << "\nPassageiros que vao para cidade C:\n"<<nomes_c[z];
		}
		
		
		
	}
	
}
