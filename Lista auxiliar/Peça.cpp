#include <iostream>
using namespace std;
main ()
{
	string nome;
	float preco, qtde, valor_total;
	cout << "\nOla, seja bem vindo";
	while (1){
	cout << "\n\nPor favor, digite o nome da pessoa: ";
	cin >> nome;
	cout << "\nPor favor, digite o preco da peca: ";
	cin >> preco;
	cout << "\nPor favor, digite a quantidade de peca: ";
	cin >> qtde;
	valor_total = preco * qtde;
	valor_total = valor_total * 0.05;
	cout << "\n\nA comissao do vendedor " <<nome <<" eh de: " << valor_total;  
}
return 0;
}
