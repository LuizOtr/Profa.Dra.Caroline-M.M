/*Faça um programa que leia o peso (quilos) e a altura (metros) de uma
pessoa, calcule e mostre o Índice de Massa Corporal (IMC).
Considere a fórmula: IMC= peso ÷ altura2 */
#include <iostream>

using namespace std;

int main() {
	float n1,n2,n3,cal,result;
	
	cout << "Informe o seu peso e altura" << endl;
	cin >> n1 >> n2;
	result = n1/(n2*n2);
	cout << "Seu IMC e: " << result << endl;

}
