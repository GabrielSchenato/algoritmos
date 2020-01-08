//2. Faça um algoritmo que calcula a faixa etária de uma turma de 20 alunos.
#include <iostream>
using namespace std;
main ()
{
	int idade;
	float media, soma;
	
	for (int x=0 ; x<20 ; x++ )
	{
		cout << "Por favor, informe a idade: ";
		cin >> idade;
		soma = soma + idade;
	}
	media = soma / 20;
	cout << "A media de idade eh: " << media;
}
