//1. Faça um algoritmo que leia um vetor de 12 elementos com o nome dos meses por extenso. Depois solicite ao usuário o número do mês e o algoritmo deverá escrever 
//na tela o nome do mês. 
#include <iostream>
using namespace std;
main()
{
	string mes[13];
	int numero;
	
	for(int x=1; x<=12 ; x++)
	{
		
		cout << "\nInforme o mes: ";
		cin >> mes[x];
		
	}
	cout << "Informe o numero do mes: ";
	cin >> numero;
	
	cout << "O mes eh " << mes[numero];
	
}
