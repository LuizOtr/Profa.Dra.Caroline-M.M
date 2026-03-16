/*
Faça um programa que leia o código de um item da lanchonete, a quantidade
deste item e calcule o valor total a ser pago.
*/


#include <iostream>

using namespace std;

int main() {
	int cod, qtd;
	float total_pagar,cal,result;
	
	cout << "Informe seu cod e a quantidade" << endl;
	cin >> cod >> qtd;
	
	if (cod >= 100 && cod <= 103){
		if (cod == 100){
			total_pagar = qtd*1.5;
			cout << "O valor total do cachorro quente e R$" << total_pagar << endl;
		}
		if (cod == 101){
			total_pagar = qtd*1.4;
			cout << "O valor total do Coxinha e R$" << total_pagar << endl;
		}
		if (cod == 102){
			total_pagar = qtd*1.3;
			cout << "O valor total do Pastel e R$" << total_pagar << endl;
		}
		if (cod == 103){
			total_pagar = qtd*1;
			cout << "O valor total do Refrigerante e R$" << total_pagar << endl;
		}
	}else{
		cout << "coloque um numero de 100 a 103";
	};
}
