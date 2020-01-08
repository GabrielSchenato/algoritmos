#include <iostream>
#include <stdlib.h>
using namespace std;
main ()
{
	float X, Y, Z;
	
	cout << "POR FAVOR, INFORME O (X): ";
	cin >> X;
	
	cout << "POR FAVOR, INFORME O (Y): ";
	cin >> Y;
	
	cout << "POR FAVOR, INFORME O (Z): ";
	cin >> Z;
	
	if ((X >= Y + Z) || (Y >= X + Z) || (Z >= X + Y) || (X = 0) || (Y = 0) || (Z = 0))
	{
		cout << "NAO FORMAM UM TRIANGULO!!!";
	}
	else
	{
		if ((X = Y) && (Y = Z))
		{
			cout << "EH UM TRIANGULO EQUILATERO!!!";
		}
		else
		{
			if ((X = Y) || (Y = Z) || (X = Z))
			{
				cout << "EH UM TRIANGULO ISOSCELES!!!";
			}
			else
			{
				cout << "EH UM TRIANGULO ESCALENO!!!";
			}
		}
	}
	
	
	
	
	
}
