//Construa um algoritmo que leia o nome e a nota de 15 alunos na prova de algoritmos e ao final apresente a média das notas da turma.
//Se o usuário desejar encerrar a leitura antes dos 15 alunos, o mesmo deve digitar “fim” para o nome. 
#include <iostream>
using namespace std;
main ()
{
	
	string nome;
	float nota, media=0, cont_alunos=0;
	
	cout << "\nPor favor, informe o nome do aluno: ";
	cin >> nome;
	
	while (nome != "fim" && nome != "Fim" && nome != "f" )
	{
		
		cout << "\nPor favor, informe a nota do aluno: ";
		cin >> nota;
		
		if (nota >=0 && nota <=10)
		{
			cont_alunos++;
			media = media + nota;
		}
		else
		{
			cout << "NOTA INVALIDA!!!";
		}
		
		
		cout << "\nPor favor, informe o nome do aluno: ";
		cin >> nome;
	}
	
	media = media/cont_alunos;
	
	cout << "\nA media da turmo eh: "<<media;
	
}
