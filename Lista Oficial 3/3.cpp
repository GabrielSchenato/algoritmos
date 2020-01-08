//Construa um algoritmo que leia o nome, a idade e a altura de 20 pessoas e ao final apresente: 
//a) A média de idade das pessoas com mais de 1,80 de altura
//b) O total de pessoas com mais de 35 anos 
//c) O nome do mais alto 
//d) O nome do mais novo
#include <iostream>
using namespace std;
main ()
{
	string nome, nome_maior, nome_novo;
	int idade, cont_idade_180=0, cont_idade_35=0;
	float altura, soma_idade_180=0, maior = -9999, novo = 9999, media;
	
	for(int x=0 ; x<3 ; x++)
	{
		cout << "\nPor favor, informe o nome: ";
		cin >> nome;
		
		cout << "\nPor favor, informe a idade: ";
		cin >> idade;
		
		cout << "\nPor favor, informe a altura: ";
		cin >> altura;
		
		if (altura >1.80)
		{
			soma_idade_180 = soma_idade_180 + idade;
			cont_idade_180++;
		}
		if (idade > 35)
		{
			cont_idade_35++;
		}
		if (altura > maior)
		{
			maior = altura;
			nome_maior=nome;
		}
		if (idade < novo)
		{
			novo = idade;
			nome_novo=nome;
		}
		
	}	
	
	media = soma_idade_180/cont_idade_180;
	
	cout << "\n\nA media de idade das pessoas com mais de 1.80 de altura eh: " <<media;
	
	cout << "\n\nO total de pessoas com mais de 35 anos eh: " <<cont_idade_35;
	
	cout << "\n\nO nome do mais alto eh: " <<nome_maior;
	
	cout << "\n\nO nome do mais novo eh: " <<nome_novo;
	
	
} 
