#include <iostream>
#include <stdlib.h>
using namespace std;
main()
{
	string nome_artigo1, nome_artigo2, nome_artigo3;
	float preco_artigo1, preco_artigo2, preco_artigo3, desconto_artigo1, desconto_artigo2, desconto_artigo3, valor_final1, valor_final2, valor_final3, valor_total1 , valor_total2;
	
	cout << "Ola, seja bem vindo \n";
	cout << "\nPor favor, digite o nome do primero artigo: ";
	cin >> nome_artigo1;
	cout <<"\nPor favor, digite o preco do artigo: ";
	cin >> preco_artigo1;
	cout << "\nPor favor, digite o valor de desconto que voce deseja entre (1 a 100%): ";
	cin >> desconto_artigo1;
	valor_final1 = preco_artigo1 * (desconto_artigo1/100);
	cout <<"\nO preco do primeiro artigo, " <<nome_artigo1 <<" sem desconto eh: "<<preco_artigo1 <<" e com desconto eh: " << valor_final1 ;
	
	cout <<"\n\nPor favor, digite o nome do segundo artigo: ";
	cin >> nome_artigo2;
	cout << "\nPor favor, digite o preco do artigo: ";
	cin >> preco_artigo2;
	cout << "\nPor favor, digite o valor de desconto que voce deseja entre (1 a 100%): ";
	cin >> desconto_artigo2 ;
	valor_final2 = preco_artigo2 * (desconto_artigo2/100);
	cout <<"\nO preco do segundo artigo, " <<nome_artigo2 <<" sem desconto eh: " <<preco_artigo2 << " e com desconto eh: " << valor_final2 ;
	
	cout <<"\n\nPor favor, digite o nome do terceiro artigo: ";
	cin >> nome_artigo3;
	cout << "\nPor favor, digite o preco do artigo: ";
	cin >> preco_artigo3;
	cout << "\nPor favor, digite o valor de desconto que voce deseja entre (1 a 100%): ";
	cin >> desconto_artigo3;
	valor_final3 = preco_artigo3 * (desconto_artigo3/100);
	cout <<"\nO preco do terceiro artigo, " <<nome_artigo3 <<" sem desconto eh: " <<preco_artigo3 <<" e com desconto eh: " << valor_final3 ;
	
	valor_total1 = preco_artigo1 + preco_artigo2 + preco_artigo3 ;
	valor_total2 = valor_final1 + valor_final2 + valor_final3 ;
	
	cout <<"\n\nO VALOR FINAL SEM DESCONTO EH: " << valor_total1;
	cout <<"\n\nO VALOR FINAL COM DESCONTO EH:" << valor_total2;
    cout <<endl ;
    system ("pause");	
}
