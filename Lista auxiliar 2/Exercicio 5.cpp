#include <iostream>
#include <stdlib.h>
using namespace std;
main ()
{
	float media;
	
	cout << "POR FAVOR, DIGITE SUA NOTA: ";
	cin >> media;
	
	if (media >10 || media <0)
	{
		cout << "NOTA INVALIDA!!!";
	}
	if (media >=7 && media <=10 )
	{
		cout << "PARABENS VOCE FOI APROVADO!!!";
	}
	else 
	{
		if (media >=5 && media <=6.9)
	{
		cout << "VOCE ESTA EM RECUPERACAO!";
	}
	else
	{
		if(media <5 && media<10)
		{
		cout << "INFELIZMENTE VOCE ESTA REPROVADO!";	
		}
	}
}
}
