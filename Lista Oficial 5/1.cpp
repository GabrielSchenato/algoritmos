//1. Fa�a um algoritmo que leia um vetor de 12 elementos com o nome dos meses por extenso. Depois solicite ao usu�rio o n�mero do m�s e o algoritmo dever� escrever 
//na tela o nome do m�s. 
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
