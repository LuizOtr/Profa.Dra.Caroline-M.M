/*

Uma empresa concederá um aumento de salário aos seus funcionários de
acordo com o cargo, conforme a tabela abaixo. Faça um programa que leia o
código do cargo do funcionário e o seu salário, e calcule e imprima o seu
novo salário.

*/

#include <iostream>

using namespace std;

int main() {
	float cod, salario,novo_salario,cal,result;
	
	cout << "Informe seu cod de matricula e salario" << endl;
	cin >> cod >> salario;
	
	if (cod == 100){
		novo_salario = salario + salario * 0.1;
		cout << "O seu novo salario de gerete e de R$" << novo_salario << endl;
	}
	if (cod == 101){
		novo_salario = salario + salario * 0.2;
		cout << "O seu novo salario de gerete e de R$" << novo_salario << endl;
	}
	if (cod == 102){
		novo_salario = salario + salario * 0.3;
		cout << "O seu novo salario de gerete e de R$" << novo_salario << endl;
	}

}
