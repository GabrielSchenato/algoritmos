//Uma empresa de fornecimento de energia elétrica faz a leitura mensal dos medidores de consumo. Para cada consumidor são digitados os seguintes dados:
//número do consumidor, quantidade de kwh consumidos durante o mês e o tipo (código) do consumidor (1residencial, 2-comercial, 3-industrial) 
//Residencial - preço em reais por kwh = 0,3 Comercial   - preço em reais por kwh = 0,5 Industrial  - preço em reais por kWh = 0,7  
//Os dados devem ser lidos até que seja encontrado um consumidor com número 0 (zero). Calcular e imprimir:
//d) O custo total para cada consumidor e) O total de consumo para os três tipos de consumidor f) Qual categoria consome mais? 
#include <iostream>
using namespace std;
main ()
{
	int numero_consumidor, kwh_mes, tipo_consumidor;
	float total_residencial=0, total_comercial=0, total_industrial=0, total_tres;
	
	cout << "\nPor favor, informe o numero do consumidor: ";
	cin >> numero_consumidor;
	
	while (numero_consumidor != 0)
	{
		
		cout << "\nQuantidade de Kwh/mes consumido? ";
		cin >> kwh_mes;
		
		cout << "\nTipo de consumidor (1-residencial, 2-comercial, 3-industrial): ";
		cin >> tipo_consumidor;
		
		if (tipo_consumidor == 1)
		{
			total_residencial = total_residencial + (kwh_mes * 0.3); 
		}
		if (tipo_consumidor == 2)
		{
			total_comercial = total_comercial + (kwh_mes * 0.5);
		}
		if (tipo_consumidor == 3)
		{
			total_industrial = total_industrial + (kwh_mes * 0.7);
		}
		
		cout << "\nPor favor, informe o numero do consumidor: ";
		cin >> numero_consumidor;
	}
	
	total_tres = total_residencial + total_comercial + total_industrial;
	
	cout << "\nO custo total para cada consumidor eh: " <<endl;
	cout << "\n\nRESIDENCIAL: R$"<<total_residencial;
	cout << "\n\nCOMERCIAL: R$"<<total_comercial;
	cout << "\n\nINDUSTRIAL: R$"<<total_industrial;
	
	cout << "\n\nO total de consumo para os tres tipos de consumidor eh: R$"<<total_tres;
	
	if (total_residencial > total_comercial && total_residencial > total_industrial)
	{
		cout << "\n\nResidencial eh a categoria que consome mais!";
	}
	if (total_comercial > total_residencial && total_comercial > total_industrial)
	{
		cout << "\n\nComercial eh a categoria que consome mais!";
	}
	if (total_industrial > total_residencial && total_industrial > total_comercial )
	{
		cout << "\n\nIndustrial eh a categoria que consome mais!";
	}
}
