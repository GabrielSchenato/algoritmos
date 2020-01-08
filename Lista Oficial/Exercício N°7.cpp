#include <iostream>
#include <stdlib.h>
using namespace std;
main()
{
	int ano, dias;
	
	cout << "                             OLA, SEJA BEM-VINDO";
	cout << "\n\nPor favor, insira o ano de seu nascimento: ";
	cin >> ano;
	
	dias = (2016 - ano)*360;
	
	cout <<"\n\nPARABENS VOCE JA VIVEU " <<dias <<" DIAS" <<endl;
	cout << "\n";
	system ("pause");
}
