#include <iostream>
using namespace std;
main()
{
	float base,altura,area;
	cout<<"\n\nOla, seja bem vindo";
	while (1){
	cout<<"\n\n\nPor favor, digite o valor da base: ";
	cin>>base;
	cout<<"\n\nPor favor, digite o valor da altura: ";
	cin>>altura;
	area=(base*altura)/2;
	cout<<"\n\nOperacao realizada com sucesso!""\n\nO valor eh: ";
	cout<<area;
}
return 0;
}
