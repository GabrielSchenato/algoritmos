#include <iostream>
using namespace std;
main ()
{
	
	float X[5], Y[5], A[5];
	
	for (int z=1; z<6 ; z++)
	{
		
		cout << "Informe o valor X: ";
		cin >> X[z];
		cout << "Informe o valor Y: ";
		cin >> Y[z];
		
		A[z] = X[z] + Y[z];
		
	}
	for(int z=1; z<6; z++)
	{
		cout << "\n Elemento\n A[" <<z <<"]" <<A[z];
	}
	
}
