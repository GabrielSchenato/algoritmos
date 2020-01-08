#include <iostream>
#include <stdlib.h>
using namespace std;
main ()
{
	int nota;
	
	cout <<"POR FAVOR DIGITE SUA NOTA: ";
	cin >> nota;
	
	if (nota >=90 && nota <=100)
	{
		cout << "SUA NOTA EH: " <<nota << " E SEU CONCEITO EH (A)";
	}
	else
	{
		if (nota >=76 )
		{
			cout << "SUA NOTA EH: " <<nota << " E SEU CONCEITO EH (B)";
		}
		else
		{
			if (nota >=60)
			{
				cout << "SUA NOTA EH: " <<nota << " E SEU CONCEITO EH (C)";
			}
			else
			{
				if (nota >=40)
				{
					cout << "SUA NOTA EH: " <<nota << " E SEU CONCEITO EH (D)";
				}
				else
				{
					if (nota >=0)
					{
						cout << "SUA NOTA EH: " <<nota << " E SEU CONCEITO EH (E)";
					}
					else
					{
						cout << "NOTA INVALIDA!!!";
					}
				}
			}
		}
	}
	
	
}
