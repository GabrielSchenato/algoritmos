#include <iostream>
using namespace std;
main()
{
	float celsius, fahrenheit;
	cout << "\nOla, seja bem vindo";
	while (1) {
	cout << "\n\nPor favor, digite o valor em celsius: ";
	cin >> celsius;
	fahrenheit = celsius * 1.8 + 32;
	cout << "O valor em fahrenheit eh: ";
	cout << fahrenheit;
}
return 0;
}

