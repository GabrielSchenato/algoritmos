#include <iostream>
using namespace std;
main()
{
	int ano_nascimento, idade;
	cout<<"\nOla, seja bem vindo";
	while (1){
	cout<<"\n\nPor favor, digite a data de nascimento: ";
	cin>>ano_nascimento;
	idade=2016-ano_nascimento;
	cout<<"\n\nA idade eh: ";
	cout<<idade;
}
return 0;
}
