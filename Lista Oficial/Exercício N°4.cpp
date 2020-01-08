#include <iostream>
#include <stdlib.h>
using namespace std;
main ()
{
	string marca;
	float consumo_veiculo, km_por_litro;
	int km_inicial, km_final , km_rodado;
	
	cout << "                              OLA, SEJA BEM-VINDO";
	cout << "\n\nPor favor, insira a marca de seu veiculo: ";
	cin >> marca;
	cout << "\nPor favor, insira a quilometragem inicial de seu veiculo: ";
	cin >> km_inicial;
	cout << "\nPor favor, insira a quilometragem final de seu veiculo: ";
	cin >> km_final;
	cout << "\nPor favor, insira quantos litros de combustivel foram consumidos: ";
	cin >> consumo_veiculo;
	km_rodado = km_final - km_inicial;
	km_por_litro = km_rodado/consumo_veiculo;
	
	cout << "\n\nA MARCA DE SEU VEICULO EH: " <<marca;
	cout << "\n\nA QUILOMETRAGEM INICIAL EH DE: " <<km_inicial <<"KM";
	cout << "\n\nA QUILOMETRAGEM FINAL EH DE: " <<km_final <<"KM";
	cout << "\n\nO SEU VEICULO RODOU: " <<km_rodado <<"KM";
	cout << "\n\nO CONSUMO DO SEU VEICULO EM KM/LITROS EH DE: " <<km_por_litro <<endl;
	cout << "\n";
	system ("pause");
}
