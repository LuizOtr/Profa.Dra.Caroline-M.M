/*Faça um programa que leia a medida do lado de um quadrado, calcule e
mostre o perímetro e a área desse quadrado*/

#include <iostream>

using namespace std;

int main(){
	
	float n1,n2,area,resul;
	
	cout << "Digite um valor: ";
	cin >> n1;
	resul = n1 * 4;
	area = n1 * n1; /*Como no c++ nao tem ** user o valor vezes o valor*/
	cout << "perimetro: " << resul << " Area: " << area << endl;
	
}
