//Uma loja deseja fazer o balancete do mês baseando-se no valor das notas fiscais de mercadorias vendidas. 
//Faça um algoritmo para ler um conjunto indeterminado de fichas contendo, cada uma, o valor da nota fiscal.
//Para encerrar digite 0 (zero) no valor da NF. Calcule e imprima:  
//a) O número de NFs abaixo de R$ 1.000,00 
//b) O número de NFs entre R$ 1.000,00 e R$ 5.000,00 
//c) O número de NFs acima de R$ 5.000,00 
//d) O número total de Notas Fiscais 
//e) O valor total de vendas no mês 
#include <iostream>
using namespace std;
main()
{
	float valor_nf, cont_menor=0, cont_media=0, cont_maior=0, total_mes=0, total_nf=0;
	
	cout << "\nPor favor, informe o valor da nota fiscal: R$";
	cin >> valor_nf;
	while (valor_nf != 0)
	{
		
		if (valor_nf < 1000)
		{
			cont_menor++;
		}
		if (valor_nf >= 1000 && valor_nf <=5000)
		{
			cont_media++;
		}
		if (valor_nf > 5000)
		{
			cont_maior++;
		}
		total_mes = total_mes + valor_nf;
		cout << "\nPor favor, informe o valor da nota fiscal: R$";
		cin >> valor_nf;
	}
	
	total_nf = cont_menor + cont_media + cont_maior;
	
	cout << "\nO numero de NFs abaixo de R$ 1000 eh: "<<cont_menor;
	cout << "\nO numero de NFs entre R$ 1000 e R$ 5000 eh: "<<cont_media;
	cout << "\nO numero de NFs acima de R$ 5000 eh: "<<cont_maior;
	cout << "\nO numero total de Notas Fiscais eh: "<<total_nf;
	cout << "\nO valor total de vendas no mes eh R$"<<total_mes;   
	
}
