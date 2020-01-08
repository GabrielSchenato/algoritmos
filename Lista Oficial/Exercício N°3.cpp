#include <iostream>
#include <stdlib.h>
using namespace std;
main ()
{
	string nome;
	float salario, salario_final, comissao, qtde_carros, percentual_vendas, valor_total;
	
	cout << "                               OLA, SEJA BEM-VINDO";
	cout << "\n\nPor favor, insira o nome do vendedor: ";
	cin >> nome;
	cout << "\nPor favor, insira a quantidade de carros vendidos: ";
	cin >> qtde_carros;
	cout << "\nPor favor, insira o valor total de vendas: ";
	cin >> valor_total;
	salario = 350;
	comissao = 50;
	
	salario_final = 350 + 50 + (valor_total*0.05);
	
	cout << "\n\nO NOME DO VENDEDOR EH: " <<nome;
	cout << "\n\nA QUANTIDADE DE CARROS VENDIDOS POR ELE EH: " <<qtde_carros;
	cout << "\n\nO VALOR TOTAL DE SUAS VENDAS EH: " <<valor_total;
	cout << "\n\nO SEU SALARIO EH DE: R$" <<salario_final <<endl;
	cout << "\n";
	system ("pause");
}
