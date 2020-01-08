//Faça um algoritmo que leia o nome e o sexo de 10 pessoas e ao final apresente o total de homens e o total de mulheres. 
#include <iostream>
using namespace std;
main ()
{
	string nome;
	int idade, cont_homem=0, cont_mulher=0, sexo;

	for (int x=0 ; x<10 ; x++)
	{
		cout << "\nPor favor informe o nome: ";
		cin >> nome;
		
		cout << "\n\nInforme o sexo (1-Homem e 2-Mulher): ";
		cin >> sexo;
		
		if(sexo == 1)
		{
			cont_homem++;
		}
		else if(sexo == 2)
		{
			cont_mulher++;
		}
		else
		
		cout << "NUMERO INVALIDO!!!";
		
	}
	
	cout << "\n\nO numero de mulheres eh: " <<cont_mulher;
	cout << "\n\nO numero de homens eh: " <<cont_homem;
	
}
