#include <iostream>
#include <stdlib.h>
using namespace std;
main ()
{
	float sorvete1, sorvete2, sorvete3, qtde1, qtde2, qtde3, qtde_final, valor_arrecadado;
	
	cout << "                           OLA, SEJA BEM-VINDO";
	cout << "\n\nPor favor, insira a quantidade do tipo 1 de sorvete vendido: ";
	cin >> qtde1;
	cout << "\nPor favor, insira a quantidade do tipo 2 de sorvete vendido: ";
	cin >> qtde2;
	cout << "\nPor favor, insira a quantidade do tipo 3 de sorvete vendido: ";
	cin >> qtde3;
	
	sorvete1 = 0.50;
	sorvete2 = 0.60;
	sorvete3 = 0.75;
	
	qtde_final = qtde1 + qtde2 + qtde3;
	valor_arrecadado = (qtde1*sorvete1) + (qtde2*sorvete2) + (qtde3*sorvete3);
	cout <<"\nA quantidade de sorvetes vendidos foram de " <<qtde_final <<" unidades.";
	cout <<"\n\nO valor arrecadado foi de: " <<"R$" <<valor_arrecadado <<endl;
	cout <<"\n";
	system("pause");
	
}
