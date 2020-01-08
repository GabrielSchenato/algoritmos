//Construa um algoritmo que leia a idade e altura de 20 alunos e ao final apresente a média
//de idade dos alunos acima de 1,75 de altura e quantos alunos maiores 25 anos existe na
//turma.
#include <iostream>
using namespace std;
main ()
{
	int idade;
	float altura , media = 0 , cont_idade = 0, cont_altura = 0 , valor_final;
	
	for (int x = 1 ; x <=20 ; x++)
	{
		
		cout << "\n\nPor favor, informe a idade: ";
		cin >> idade;
		
		cout << "\n\nPor favor, informe a altura: ";
		cin >> altura;
		
		if (altura > 1.75)
		{
			media = media + idade;
			cont_altura++;
		}
		if (idade >25)
		{
			cont_idade++;
		}
		
	}
	
	valor_final = media/cont_altura;
	
	cout << "\nA media de idade dos alunos acima de 1.75 de altura eh: " << valor_final;
	
	cout << "\nO numero de alunos maiores de 25 anos eh: " <<cont_idade;
	
}
