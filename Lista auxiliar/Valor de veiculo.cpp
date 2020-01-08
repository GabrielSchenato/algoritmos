#include <iostream>
using namespace std;
main()
{
	float valor_final, custo_fabrica, comissao, imposto;
	cout << "\nOla, seja bem vindo";
	while (1){
	cout << "\n\nPor favor, digite o valor do custo de fabrica: ";
	cin >> custo_fabrica;
	comissao = custo_fabrica * 0.1;
	imposto = custo_fabrica * 0.45;
	valor_final = custo_fabrica + comissao + imposto;
	cout << "\nO valor final do veiculo eh: ";
	cout << valor_final;
}
return 0;
}
