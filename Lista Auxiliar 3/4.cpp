//4. Para N n�meros, mostre quantos deles s�o negativos atrav�s de um algoritmo.
#include <iostream>
#include <stdlib.h>
using namespace std;
main ()
{
	 int n, i, contador;
	 float numero;
	 contador = 0;
	 cout << "Quantos numeros serao inseridos? ";
	 cin >> n;
	 for (i=1; i<=n; i++)
	 {        
	    cout << "Informe um numero:";
		cin >> numero;
		if (numero < 0)
		{          
		    contador++;   
		}     
		
   	}
	     cout << "\nTotal de negativos: " << contador; 
		 
		cout << "\n";
		 system ("PAUSE"); 
	
}
