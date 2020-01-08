#include <iostream>
using namespace std;
main()
{
	string nomes[500], nome_novo, nome_velho, nome_melhor;
	int idades[500], sexos[500], x=0, h=0, m=0, novo=99, velho=0, sexo_novo, sexo_velho, nota_melhor=0, sexo_melhor;
	float notas[500],faixa=0, media_homens=0, media_mulheres=0, nota_novo, nota_velho;
	
	cout << "Informe o nome: ";
	cin >> nomes[x];
	
	while(nomes[x] != "FIM" && nomes[x] != "Fim" && nomes[x] != "f")
	{
		if(nomes[x] == "ze")
		{
			
			cout << "Abraco ze!";
			
		}
		cout << "\nInforme a idade: ";
		cin >> idades[x];
		
		cout << "\nInforme o sexo (1-Masculino, 2-Feminino): ";
		cin >> sexos[x];
		
		cout << "\nInforme a nota: ";
		cin >> notas[x];
		
		x++;
		
		cout << "\nInforme o nome: ";
		cin >> nomes[x];
		
	}
	
	for(int y=0; y<x; y++)
	{
		
		faixa = faixa + idades[y];
		
	}
	faixa = faixa / x;
	
	cout << "A faixa etaria eh: " <<faixa;
	
	for(int y=0; y<x; y++)
	{
		
		if (sexos[y] == 1)
		{
			
			media_homens = media_homens + notas[y];
			h++;
		}
		if (sexos[y] == 2)
		{
			
			media_mulheres = media_mulheres + notas[y];
			m++;
		}
		
	}
	media_homens = media_homens/h;
	media_mulheres = media_mulheres/m;
	
	if(media_homens > media_mulheres)
	{
		
		cout << "\nO sexo masculino possui a maior media com "<<media_homens;
		
	}
	if(media_mulheres > media_homens)
	{
		
		cout << "\nO sexo feminino possui a maior media com "<<media_mulheres;
		
	}
	
	for(int y=0; y<x ; y++)
	{
		if(idades[y] < novo)
		{
			nome_novo = nomes[y];
			novo = idades[y];
			nota_novo = notas[y];
			sexo_novo = sexos[y];
		}
			if(idades[y] > velho)
		{
			nome_velho = nomes[y];
			velho = idades[y];
			nota_velho = notas[y];
			sexo_velho = sexos[y];
		}
		
		
	}
	
	cout << "\nO aluno mais novo eh do sexo ";if(sexo_novo == 1){cout <<" Masculino ";}else cout <<" Feminino "; cout <<"cujo o nome eh " <<nome_novo <<"com " <<novo <<" anos e com a nota "<<nota_novo;
	
	cout << "\nO aluno mais velho eh do sexo ";if(sexo_velho == 1){cout <<" Masculino ";}else cout <<" Feminino "; cout <<"cujo o nome eh " <<nome_velho <<"com " <<velho <<" anos e com a nota "<<nota_velho;
	
	for(int y=0; y<x; y++)
	{
		
		if(notas[y] > nota_melhor)
		{
			
			nota_melhor = notas[y];
			sexo_melhor = sexos[y];
			nome_melhor = nomes[y];
			
		}
		
		
	}
	
	cout << "\nO melhor aluno eh "<<nome_melhor <<" com a nota "<<nota_melhor <<" do sexo"; if(sexo_melhor == 1){cout <<" Masculino";}else cout <<" Feminino";
	
	
	
	
}
