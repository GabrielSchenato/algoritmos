//Construir um algoritmo que determine o maior elemento num conjunto de 10 valores. 
#include <iostream>
using namespace std;
main()
{
	int x=1;
	float numero, maior=-9999;
	
	while(x<=10)
	{
		cout <<"Por favor, informe o valor: ";
		cin >> numero;
		
		if (numero>maior)
		{
			maior=numero;
		}
		x++;
	}
	cout << "O maior elemento eh: " <<maior;
	
}
