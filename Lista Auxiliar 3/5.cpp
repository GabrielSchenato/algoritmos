//Construa um algoritmo que leia 20 números inteiros e apresente a soma dos números
//positivos e quantos números negativos foram digitados.
#include <iostream>
using namespace std;
main ()
{
	int valor, negativos = 0 , positivos = 0;
	
	for (int x = 1 ; x <=20 ; x++)
	{
		cout << "\nPor favor, informe 20 valores: ";
		cin >> valor;
		
		if (valor >0)
		{
			positivos++;
		}
		else
		negativos++;
	}
	
	cout << "\nO numero de positivos eh: " <<positivos;
	cout << "\n\nO numero de negativos eh: " <<negativos;
}
