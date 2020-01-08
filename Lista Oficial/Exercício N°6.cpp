#include <iostream>
#include <stdlib.h>
using namespace std;
main()
{
	float pi, raio, volume;
	
	cout <<"                             OLA, SEJA BEM-VINDO";
	cout <<"\n\nPor favor, insira o valor do raio: ";
	cin >> raio;
	pi = 3.14159265359;
	
	volume = (4*pi*raio*raio*raio)/3;
	
	cout << "\n\nO VOLUME DA ESFERA SERA DE: ";
	cout <<volume <<endl;
	cout <<"\n";
	system ("pause");
}
