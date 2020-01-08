//Construa um algoritmo que leia o nome e a idade de vários alunos de uma turma e ao final apresente na tela o nome e a idade do aluno mais velho.
//Como o número de alunos é indeterminado, faça com que para parar a leitura dos nomes e idades, o usuário tenha que digitar 0 (zero) para a idade. 
#include <iostream>
using namespace std;
main ()
{
	string nome, nome_velho;
	int idade, maior=-9999;
	
	cout << "\nPor favor, informe a idade do aluno: ";
	cin >> idade;
	
	while (idade != 0)
	{
		
		cout << "\nPor favor, informe o nome do aluno: ";
		cin >> nome;
		
		if (idade > maior)
		{
			maior = idade;
			nome_velho = nome;
		}
		
		cout << "\nPor favor, informe a idade do aluno: ";
		cin >> idade;
		
	}
	
	cout << "\nO aluno mais velho eh o "<<nome_velho << " e a idade eh "<<maior;
	
}
