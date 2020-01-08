#include <iostream>
#include <stdlib.h>
using namespace std;
main()
{
	float preco1dia, preco2dia, valor1, valor2, valor_sem_porcetagem, valor_final;
	
	cout <<"\nOla, seja bem vindo";
	cout <<"\nPor favor, digite o valor do produto no dia 17/03/2016: ";
	cin >> valor1;
	cout << "\nPor favor, digite o valor do produto no dia 18/03/2016: ";
	cin >> valor2;
	//valor_sem_porcetagem = valor1 - valor2;
	//valor_final = (valor_sem_porcetagem*100)/valor1; colocava *-1
	valor_final = (valor2*100/valor1)-100;
	if(valor_final < 0)
	{
		cout << "\nO valor da deflacao eh: ";
		cout << valor_final << "%";
		cout <<endl;
	}
	else
	{
		cout <<"\nO valor de inflacao eh: ";
		cout << valor_final <<"%";
		cout <<endl ;
	}
system("pause");
}
