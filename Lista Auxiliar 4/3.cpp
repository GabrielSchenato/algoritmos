//Construa um algoritmo que leia o nome e a idade de vários alunos de uma turma e ao final apresente na tela a idade do aluno mais velho.
//Como o número de alunos é indeterminado, faça com que para parar a leitura dos nomes e idades, o usuário tenha que digitar a palavra “fim” no nome.
#include <iostream>
using namespace std;
main()
{
	int idade=0, maior=-9999;
	string nome;
		
	while (nome != "fim")
	{
		cout << "\nPor favor, informe o nome do aluno: " ;
		cin >> nome;
		if (nome != "fim")
		{
		
			cout << "\nPor favor, informe a idade do aluno: ";
			cin >> idade;
		}
		
		if (idade > maior)
		{
			maior = idade;
		}
	}
	if (idade > 0)
	{
	
		cout << "\nA idade do aluno mais velho eh: " <<maior;
    }
} 
