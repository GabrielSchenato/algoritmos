#include <iostream>
using namespace std;
main ()
{
	int z[5];
	
	for(int x=1; x<6 ; x++)
	{
		
		cout << "Informe o valor: ";
		cin >> z[x];
		
		if (z[x] < 0)
		{
			z[x] = 0; 
		}
		
	}
	for (int x=1; x<6 ; x++)
	{
		cout << "\n Vetor N[" <<x <<"]" <<z[x];
	}
	
	
}
