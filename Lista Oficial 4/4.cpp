//Elabore um algoritmo que leia o nome, o pre�o unit�rio e a quantidade vendida de v�rios produtos, que ser�o informados pelo usu�rio.
//Obs.: como a quantidade de produtos � indeterminada, para que o processo de leitura dos dados termine, o usu�rio deve digitar �fim� quando for ler a vari�vel 
//que armazena o nome do produto. Ao final, o algoritmo dever� apresentar:
//a) O nome e o valor do produto mais barato; 
//b) O nome e a quantidade do produto mais vendido; 
//c) A m�dia de pre�o dos produtos.   
#include <iostream>
using namespace std;
main ()
{
	string nome, nome_barato, nome_maior;
	float preco_produto, qtde_vendida, menor=9999, maior=-9999, cont_produto=0, media=0;
	
	cout << "\nPor favor, informe o nome do produto: ";
	cin >> nome;
	
	while (nome != "fim" && nome != "Fim")
	{
		
		cout << "\nPor favor, informe o preco unitario(UTILIZE . PARA SEPARAR CASAS) R$";
		cin >> preco_produto;
		
		cout << "\nPor favor, informe a quantidade vendida: ";
		cin >> qtde_vendida;
		
		if (preco_produto < menor)
		{
			
			menor = preco_produto;
			nome_barato = nome;
			
		}
		if (qtde_vendida > maior)
		{
			maior = qtde_vendida;
			nome_maior = nome;
		}
		cont_produto++;
		media = media + preco_produto;
		
		cout << "\nPor favor, informe o nome do produto: ";
		cin >> nome;
		
	}
	media = media/cont_produto;
	
	cout << "\nO nome do produto mais barato eh "<<nome_barato <<" e seu valor eh: R$" <<menor;
	cout << "\nO nome do produto mais vendido eh "<<nome_maior <<" e sua quantidade foi "<<maior;
	cout << "\nA media de precos dos produtos eh: R$"<<media;
	
}
