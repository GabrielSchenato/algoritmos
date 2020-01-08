#include <iostream>
using namespace std;
main ()
{
	string nomes[20];
	float media=0;
	int notas[20];
	
	for (int x=0; x<20; x++)
	{
		
		cout << "Informe o nome do aluno: ";
		cin >> nomes[x];
		
		cout << "Informe a nota do aluno: ";
		cin >> notas[x];
		
		media = media + notas[x];
		
	}
	media = media/20;
	for (int x=0; x<20; x++)
	{
		
		if(notas[x] > media)
		{
			
			cout << "\n O aluno "<<nomes[x] <<" esta acima da media com a nota "<<notas[x];
			
		}
		
	}
	
	
}
