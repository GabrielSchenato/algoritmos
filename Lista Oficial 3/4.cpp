//Construa um algoritmo que calcule e apresente na tela a tabuada completa do número 1 ao 10.
#include <iostream>
using namespace std ;
main ()
{
	int n, x;
	
	for (n=1; n<=10; n++)
	{
		cout <<"\n";
		cout << "\nTabuada do "<<n;
		
		for (x=1; x<=10; x++)
		{
			cout << "\n";
			cout << n <<" x " <<x <<" = " <<(n*x);
		}
		
	 
	}
	
	
} 
