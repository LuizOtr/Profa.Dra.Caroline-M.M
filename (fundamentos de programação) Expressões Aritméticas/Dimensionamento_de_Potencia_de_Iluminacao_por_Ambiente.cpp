/*

Sabe-se que para iluminar de maneira correta os cômodos de uma casa,
para cada m², deve-se usar 18W de potência.
Faça um programa que recebe as duas dimensões de um cômodo (em
metros), calcule e mostre a sua área (em m²) e a potência de iluminação
em watts que deverá ser usada.
*/

#include <iostream>

using namespace std;

int main() {
	float n1,n2,power,area;
	
	cout << "Informe os dois valores em metros largura x comprimento" << endl;
	cin >> n1 >> n2;
	area = n1*n2;
	power = area*18;
	cout << "A potencia total e de: " << power <<" m2"<< endl;
	cout << "A quantidade de lampas sao : " << area << " Uni" << endl;

}
