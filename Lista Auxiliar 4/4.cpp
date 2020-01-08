//A Escolinha de Futebol Bom de Bola solicitou que você construa um algoritmo que leia o nome e a idade de vários inscritos na escolinha.
//De acordo com a idade do jogador, classifique-os:
//6 a 11 anos Mirim
//12 a 17 anos Juvenil
//18 em diante Adulto  
//No final, o programa deverá informar o total de inscritos em cada categoria. Obs: Como o número de inscritos é indeterminado, 
//para encerrar a etapa de leitura, o usuário deverá informar 0 (zero) para a idade.   
#include <iostream>
using namespace std;
main()
{
	int idade, cont_mirim=0, cont_juvenil=0, cont_adulto=0;
	string nome;	
	
	while (idade != 0)
	{
		cout << "\nPor favor, informe o nome: " ;
		cin >> nome;
		cout << "\nPor favor, informe a idade: ";
		cin >> idade;
		
		if (idade >=6 && idade <=11)
		{
			cont_mirim++;
		}
		if (idade >=12 && idade <=17)
		{
			cont_juvenil++;
		}
		if (idade >=18)
		{
			cont_adulto++;
		}
	}
	
	cout << "\n\nO numero de jogadores mirins eh: " <<cont_mirim;
	cout << "\n\nO numero de jogadores juvenil eh: " <<cont_juvenil;
	cout << "\n\nO numero de jogadores adultos eh: " <<cont_adulto;
	
}
