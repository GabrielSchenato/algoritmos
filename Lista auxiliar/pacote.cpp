#include <iostream>
#include <stdlib.h>
using namespace std;
main ()
{
	float largura, altura, comprimento, quantidade, amarra1 , amarra2, amarra3;
	
	cout << "                            OLA, SEJA BEM-VINDO";
	cout << "\n\nPor favor, digite a largura do pacote: ";
	cin >> largura;
	cout << "\nPor favor, digite a altura do pacote: ";
	cin >> altura;
	cout << "\nPor favor, digite o comprimento do pacote: ";
	cin >> comprimento;
	
	amarra1 = 2*(altura+largura)+10;
	amarra2 = 2*(altura+comprimento)+10;
	amarra3 = 2*(largura+comprimento)+10;
	
	quantidade = amarra1+amarra2+amarra3;
	
	cout <<"\nA quantidade de barbante necessaria para empacotar eh de: " <<quantidade <<"CM" <<endl;
	system ("pause");
	
}
