#include <iostream>
using namespace std;
main ()
{
    float valor1,valor2,valor3,media;
	cout<<"Ola, Seja bem vindo";
	while (1){
	cout<<"\n\n\nPor favor, digite o primeiro valor: ";
	cin>>valor1;
	cout<<"\n\nPor favor, digite o segundo valor: ";
	cin>>valor2;
	cout<<"\n\nPor favor, digite o terceiro valor: ";
	cin>>valor3;
	media=(valor1+valor2+valor3)/3;
	cout<<"\n\nOperacao realizada com sucesso!" "\n\nO valor da media eh: ";
	cout<<media;
}
return 0;
}
