//O programador responsável pelo sistema do UNIPLAC resolveu fazer um programa para processar os dados dos alunos de Sistemas de Informação.
//Cada ficha contém o nome, sexo, idade, turno (1 para manhã, 2 para noite) e o semestre do aluno. Para encerrar, basta que usuário informe 0 (zero) para o turno.
//Construa um algoritmo que leia os dados dos 200 alunos e calcule e imprima:
//a) O número de alunos matriculados em cada turno. 
//b) A faixa etária dos alunos calouros (1º e 2º semestre).  
//c) O número de mulheres que estudam pela manhã. 
//d) Qual sexo possui mais alunos no curso. 
#include <iostream>
using namespace std;
main()
{
	string nome;
	int sexo, idade, turno=10, semestre, cont_manha=0, cont_noite=0, soma_idade=0, cont_faixa=0, cont_femmanha=0, cont_masculino=0, cont_feminino=0;
	
	while (turno !=0)
	{
		cout << "\nPor favor, informe o nome do aluno: ";
		cin >> nome;
		
		cout << "\nPor favor, informe o sexo do aluno (1-Masculino, 2-Feminino): ";
		cin >> sexo;
		
		cout << "\nPor favor, informe a idade do aluno: ";
		cin >> idade;
		
		cout << "\nPor favor, informe o turno do aluno (1-Manha, 2-Noite): ";
		cin >> turno;
		
		cout << "\nPor favor, informe o semestre do aluno (1-Primeiro, 2-Segundo): ";
		cin >> semestre;
		
		if (turno == 1)
		{
			cont_manha++;
		}
		if (turno == 2)
		{
			cont_noite++;
		}
		if (semestre == 1 || semestre == 2)
		{
			soma_idade = soma_idade + idade;
			cont_faixa++;
		}
		if (sexo == 2 && turno == 1)
		{
			cont_femmanha++;
		}
		
		if (sexo == 1)
		{
			cont_masculino++;
		}
		if (sexo == 2)
		{
			cont_feminino++;
		}
		
	}
	
	cout << "\nO numero de alunos matriculados no turno da manha eh: " <<cont_manha;
	cout << "\nO numero de alunos matriculados no turno da noite eh: " <<cont_noite;
	
	soma_idade = soma_idade/cont_faixa;
	
	cout << "\n A faixa etaria dos alunos calouros eh: " <<soma_idade;
	
	cout << "\nO numero de mulheres que estudam no periodo da manha eh: " <<cont_femmanha;
	
	if (cont_masculino > cont_feminino)
	{
		cout << "\nO sexo masculino possui mais alunos no curso "<<cont_masculino <<" alunos";
	}
	if (cont_feminino>cont_masculino)
	{
		cout << "\nO sexo feminino possui mais alunas no curso "<<cont_feminino <<" alunas";
	}
	
	
}
