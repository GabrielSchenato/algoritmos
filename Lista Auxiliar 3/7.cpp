//Construa um algoritmo que leia o nome e a nota de 20 alunos e se o aluno tiver uma nota
//igual ou superior a 7, informe que este aluno está aprovado, caso contrário, apresente que
//o mesmo está reprovado.
#include <iostream>
using namespace std;
main ()
{
	string nome;
	int nota;
	
	for (int x = 1 ; x <=20 ; x++)
	{
		cout << "\n\nPor favor, informe o nome do aluno: ";
		cin >> nome;
		cout << "\n\nPor favor, informe a nota do aluno: ";
		cin >> nota;
		
		if (nota >=7 && nota <=10)
		{
			cout << "\n\nO aluno "<<nome << " esta aprovado com a nota " <<nota;
		}
		else
		
		if (nota <7 && nota >=0) 
		{
		cout << "\n\nO aluno "<<nome << " esta reprovado com a nota " <<nota;
	    }  
		else
		cout << "\n\nNOTA INVALIDA!!!"; 
	}
}
