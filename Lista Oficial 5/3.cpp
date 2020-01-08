#include <iostream>
using namespace std;
main()
{
	string nomes[500], nome_barato, nome_caro, nome_recente;
	float precos[500], media_precos=0, barato=999, caro=0, valor_recente;
	int anos[500], tipos[500], x=0, l=0, r=0, tipo_barato, ano_barato, tipo_caro, ano_caro, media_livro=0, media_revistas=0, ano, recente=999, tipo_recente;
	
	cout << "Informe o nome do item: ";
	cin >> nomes[x];
	
	while(nomes[x] != "FIM" && nomes[x] != "Fim" && nomes[x] != "f")
	{
		
		cout << "\nInforme o ano de publicacao: ";
		cin >> ano;
		anos[x] = 2016-ano;
		
		cout << "\nInforme o valor do item: R$";
		cin >> precos[x];
		
		cout << "\nInforme o tipo do documento (1-livro ou 2-revista):";
		cin >> tipos[x];
		
		x++;
		
		cout << "\nInforme o nome do item: ";
		cin >> nomes[x];
	}
	
	for(int y=0; y<x; y++)
	{
		
		media_precos = media_precos + precos[y];
		
	}
	media_precos = media_precos / x;
	
	cout << "\nA media dos precos eh: R$" <<media_precos;
	
	for(int y=0; y<x; y++)
	{
		
		if(nomes[y] == "Algoritmos para Experts")
		{
			cout <<"\n Alerta!!!! Possui um livro de algoritos, pegue ele!!!!";
		}
		
	}
	
		for(int y=0; y<x; y++)
	{
		
		if (tipos[y] == 1)
		{
			
			media_livro = media_livro + anos[y];
			l++;
		}
		if (tipos[y] == 2)
		{
			
			media_revistas = media_revistas + anos[y];
			r++;
		}
		
	}
	media_livro = media_livro/l;
	media_revistas = media_revistas/r;
	
	if(media_livro > media_revistas)
	{
		
		cout << "\nOs livros possuem a maior media com de idade "<<media_livro;
		
	}
	if(media_revistas > media_livro)
	{
		
		cout << "\nAs revistas possuem a maior media com de idade "<<media_revistas;
		
	}
	for(int y=0; y<x ; y++)
	{
		if(precos[y] < barato)
		{
			nome_barato = nomes[y];
			barato = precos[y];
			tipo_barato = tipos[y];
			ano_barato = anos[y];
		}
			if(precos[y] > caro)
		{
			nome_caro = nomes[y];
			caro = precos[y];
			tipo_caro = tipos[y];
			ano_caro = anos[y];
		}
		
		
	}
	
	cout << "\nO item mais barato eh ";if(tipo_barato == 1){cout <<"o Livro ";}else cout <<"a Revista "; cout <<"cujo o nome eh " <<nome_barato <<" com o preco R$" <<barato <<" e com "<<ano_barato<<" anos";
	
	cout << "\nO item mais caro eh ";if(tipo_caro == 1){cout <<"o Livro ";}else cout <<"a Revista "; cout <<"cujo o nome eh " <<nome_caro <<" com o preco R$" <<caro <<" e com "<<ano_caro <<" anos";
	
	for(int y=0; y<x; y++)
	{
		
		if(anos[x] < recente)
		{
			
			tipo_recente = tipos[y];
			nome_recente = nomes[y];
			valor_recente = precos[y];
			
		}
		
	}	
	cout << "\nO nome e valor do item mais recente eh " <<nome_recente <<" com o preco R$" <<valor_recente ;if(tipo_recente == 1){cout <<" e do tipo Livro ";}else cout <<"e do tipo Revista ";


}

