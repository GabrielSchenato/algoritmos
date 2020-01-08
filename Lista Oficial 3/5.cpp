//Faça um algoritmo que simule um sistema de eleição para 20 eleitores. Nesse sistema existem 3 candidatos que são votados através de seus códigos.
//São eles: 1 = Candidato 1; 2 = Candidato 2; 3 = Candidato 3; 5 = Voto nulo; 6 = Voto em branco;  
//Elabore um algoritmo que calcule e escreva o total de votos e o percentual de votos para cada candidato, para os votos brancos e para os nulos.
//Ao final, Algoritmo também deverá escrever na tela o nome do vencedor da eleição. 
#include <iostream>
using namespace std;
main ()
{
	int candidato, cont_total_votos=0, cont_1=0, cont_2=0, cont_3=0, cont_nulo=0, cont_branco=0;
	
	float percentual_1, percentual_2, percentual_3, percentual_nulo, percentual_branco;
	
	for (int x=0 ; x<10 ; x++)
	{
		cout << "\n\nInforme o candidato a ser votado da seguinte forma:";
		cout << "\n 1 = Candidato 1\n 2 = Candidato 2\n 3 = Candidato 3\n 5 = Voto nulo\n 6 = Voto em branco \n" <<endl;
		cin >> candidato;
		
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
		else if (candidato == 5)
		{
			cont_nulo++;
		}
		else if (candidato == 6)
		{
			cont_branco++;
		}
		else
		{
		cont_total_votos--;
		cout << "Numero Invalido!!!";
		}
		
		
		cont_total_votos++;
		
	}
		percentual_1 = (cont_1*100)/cont_total_votos;
		
		percentual_2 = (cont_2*100)/cont_total_votos;
		
		percentual_3 = (cont_3*100)/cont_total_votos;
		
		percentual_nulo = (cont_nulo*100)/cont_total_votos;
		
		percentual_branco = (cont_branco*100)/cont_total_votos;
		
		cout << "\nO candidato 1 recebeu " <<cont_1 <<" votos com um percentual de " <<percentual_1 <<"%";
		
		cout << "\nO candidato 2 recebeu " <<cont_2 <<" votos com um percentual de " <<percentual_2 <<"%";
		
		cout << "\nO candidato 3 recebeu " <<cont_3 <<" votos com um percentual de " <<percentual_3 <<"%";
		
		cout << "\nVotos nulos totalizaram " <<cont_nulo <<" com um percentual de " <<percentual_nulo <<"%";
		
		cout << "\nVotos brancos totalizaram " <<cont_branco <<" com um percentual de " <<percentual_branco <<"%";
		
		if (cont_1 > cont_2 && cont_1 > cont_3)
		{
			cout << "\nO CANDIDATO 1 EH O VENCEDOR!!!";
		}
		if (cont_2 > cont_1 && cont_2 > cont_3)
		{
			cout << "\nO CANDIDATO 2 EH O VENCEDOR!!!";
		}
		if (cont_3 > cont_1 && cont_3 > cont_2)
		{
			cout << "\nO CANDIDATO 3 EH O VENCEDOR!!!";
		}		
	
	
	
}
