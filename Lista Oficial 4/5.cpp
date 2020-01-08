//Construa um algoritmo que leia o nome, o sexo e o salário de vários funcionários de uma empresa.
//Ao final, o algoritmo deve apresentar qual sexo possui a maior média salarial. Para definir o sexo utilize a legenda: ‘M’ para masculino, ‘F’ para feminino e ‘X’ 
//para encerrar a leitura dos dados.   
#include <iostream>
using namespace std;
main ()
{
	string nome, sexo;
	float salario, media, cont_masc=0, salario_masc=0, cont_fem=0, salario_fem=0; 
	
	cout <<"\nPor favor, informe o sexo (M) para masculino, (F) para feminino e (X) para encerrar a leitura dos dados: ";
	cin >> sexo;
	
	while (sexo != "X" && sexo != "x")
	{
		
		cout << "\nPor favor, informe o nome do funcionario: ";
		cin >> nome;
		
		cout << "\nPor favor, informe o salario do funcionario: R$";
		cin >> salario;
		
		if (sexo == "M" || sexo == "m")
		{
			cont_masc++;
			salario_masc = salario_masc + salario;
		}
		if (sexo == "F" || sexo == "f")
		{
			cont_fem++;
			salario_fem = salario_fem + salario;
		}
		
		cout <<"\nPor favor, informe o sexo (M) para masculino, (F) para feminino e (X) para encerrar a leitura dos dados: ";
		cin >> sexo;
	
	}
	salario_masc = salario_masc / cont_masc;
	salario_fem = salario_fem / cont_fem;
	
	if(salario_masc > salario_fem)
	{
		cout << "\nA maior media salarial eh do sexo Masculino com R$"<<salario_masc;
	}
	if (salario_fem > salario_masc)
	{
		cout << "\nA maior media salarial eh do sexo Feminino com R$"<<salario_masc;
	}
	
}
