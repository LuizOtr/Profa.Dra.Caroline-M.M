/*Faça um programa que leia uma temperatura em Fahrenheit (F), converta
e mostre a temperatura equivalente em Celsius (C).
Considere a fórmula: C=( F-32)÷1,8 */

#include <iostream>

using namespace std;

int main() {
	float n1,n2,n3,cal,result;
	
	cout << "qual a temperatura em Fahrenheit: ";
	cin >> n1;
	result = (n1-32)/1.8;
	cout << "A temperatura e: " << result;
	
}
