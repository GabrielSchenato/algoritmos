//Construa um algoritmo que simule uma eleição. Essa eleição possui 3 candidatos.
//O algoritmo deve ler o voto de um número indeterminado de eleitores e apresentar na tela o percentual de cada candidato.
//Para votar no candidato 1 utilize a entrada ‘1’ Para votar no candidato 2 utilize a entrada ‘2’ Para votar no candidato 3 utilize a entrada ‘3’ 
//Para encerrar a leitura dos votos utilize a entrada ‘0’ 
#include <iostream>
using namespace std;
main ()
{
	int candidato, cont_1=0, cont_2=0, cont_3=0, cont_total_votos=0 ;
	
	float percentual_1, percentual_2, percentual_3;
	
		cout << "\n\nInforme o candidato a ser votado da seguinte forma:";
		cout << "\n 1 = Candidato 1\n 2 = Candidato 2\n 3 = Candidato 3" <<endl;
		cin >> candidato;
	
	while (candidato !=0)
	{
		
		
		
		if (candidato == 1)
		{
			cont_1++;
		}
		else if (candidato == 2)
		{
			cont_2++;
		}
		else if (candidato == 3)
		{
			cont_3++;
		}
		else
		{
			cout << "Numero Invalido!!!";
		}
		
		
		cont_total_votos++;
		
		cout << "\n\nInforme o candidato a ser votado da seguinte forma:";
		cout << "\n 1 = Candidato 1\n 2 = Candidato 2\n 3 = Candidato 3" <<endl;
		cin >> candidato;
		
	}
	
		percentual_1 = (cont_1*100)/cont_total_votos;
		
		percentual_2 = (cont_2*100)/cont_total_votos;
		
		percentual_3 = (cont_3*100)/cont_total_votos;
		
			cout << "\nO candidato 1 recebeu " <<cont_1 <<" votos com um percentual de " <<percentual_1 <<"%";
		
			cout << "\nO candidato 2 recebeu " <<cont_2 <<" votos com um percentual de " <<percentual_2 <<"%";
		
			cout << "\nO candidato 3 recebeu " <<cont_3 <<" votos com um percentual de " <<percentual_3 <<"%";
	
}
