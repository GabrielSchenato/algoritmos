//Construa um algoritmo que leia o nome e a nota de 20 alunos e ao final informe a média da turma e se existe algum aluno com nota igual a 0 (zero). 
#include <iostream>
using namespace std;
main ()
{
	string nome, alunos;
	float nota, soma_nota=0, media, cont=0;
	
	for (int x=0 ; x<20 ; x++)   
	{
		cout << "Por favor, informe o nome do aluno (com uma virgula no final): ";
		cin >> nome;
		
		cout << "Por favor, informe a nota do aluno: ";
		cin >> nota;
		
		if(nota == 0)
		{
			alunos = alunos+nome;
			cont++;
			
		}
		soma_nota=soma_nota+nota;
		
		
		
	}
	media = soma_nota/20;
	
	cout << "\n\nA media da turma eh: "<<media;
	
 	cout << "\n\nO numero de alunos com nota zero eh: " <<cont;
	cout << "\n\nOs nomes dos alunos com zero eh: " <<alunos;
	
}
