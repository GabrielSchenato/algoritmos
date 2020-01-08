#include <iostream>
#include <stdlib.h>
using namespace std;
main()
{
	string nome;
	float  salario_bruto, salario_liquido, previdencia, imposto_renda;
	
	cout << "                            OLA, SEJA BEM-VINDO";
	cout << "\n\nPor favor, insira o nome do funcionario: ";
	cin >> nome;
	cout << "\nPor favor, insira o salario bruto do funcionario " <<nome <<": ";
	cin >> salario_bruto;
	
	previdencia = salario_bruto*0.10;
	imposto_renda = (salario_bruto - previdencia)*0.25; 
	salario_liquido = salario_bruto - imposto_renda;
	
	cout << "\n\nO FUNCIONARIO " <<nome; 
	cout << "\n\nCOM SALARIO BRUTO DE: R$" <<salario_bruto; 
	cout << "\n\nCOM DESCONTO DE 10% PARA PREVIDENCIA NO VALOR DE: R$" <<previdencia; 
	cout << "\n\nSOBRE O RESTANTE COM DESCONTO DESTINADO A IMPOSTO DE RENDA NO VALOR DE: R$" <<imposto_renda; 
	cout << "\n\nASSIM POSSUINDO UM SALARIO LIQUIDO DE: R$" <<salario_liquido <<endl;
	cout <<"\n";
	system ("pause");  
	
}
