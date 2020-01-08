#include <iostream>
using namespace std;
main ()
{
	string nomes[5], nome_jovem, nome_velho;
	int idades[5], sexos[5];
	float media=0, jovem=100, velho=0;
	
	for (int x=0; x<5; x++)
	{
		
		cout << "Informe o nome: ";
		cin >> nomes[x];
		
		cout << "Informe a idade: ";
		cin >> idades [x];
		
		cout << "Informe o sexo (1-Masculino, 2-Feminino): ";
		cin >> sexos[x];
		
		media = media + idades[x];
		
		if (idades[x] < jovem)
		{
			jovem = idades[x];
			nome_jovem = nomes[x];
		}
		if(sexos[x] == 1)
		{
			if(idades[x] > velho)
			{
				velho = idades[x];
				nome_velho = nomes[x];
			}
		}
		
	}
	
	media = media/5;
	
	cout << "\n A media de idades eh: " <<media;
	
	cout << "\n O nome da pessoa mais jovem eh: " <<nome_jovem;
	
	cout << "\n O nome do homem mais velho eh: " <<nome_velho;
	
}
