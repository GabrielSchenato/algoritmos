#include <iostream>
#include <stdlib.h>
using namespace std;
main ()
{
	string sexo;
	float altura, peso_ideal;
	
	cout << "POR FAVOR, DIGITE SEU SEXO DA SEGUINTE FORMA (M - Masculino, F - Feminino): ";
	cin >> sexo; 
	
	cout << "\nPOR FAVOR, DIGITE SUA ALTURA: ";
	cin >> altura;
	
	if(sexo == "M")
	{
		peso_ideal = (72.7*altura)-58;
		cout << "\nSEU PESO IDEAL EH: " <<peso_ideal;
	}
	else
	{
		peso_ideal = (62.1*altura)-44.7;
		cout << "\nSEU PESO IDEAL EH: " <<peso_ideal;
	}
	cout << "\n" <<endl;
	system ("pause");
	
}
