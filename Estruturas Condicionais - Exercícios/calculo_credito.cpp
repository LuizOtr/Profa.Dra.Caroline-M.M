/*

Um banco concederá um crédito especial aos seus clientes, de acordo com o
saldo médio no último ano. Faça um programa que leia o saldo médio de um
cliente, calcule e mostre o valor do crédito de acordo com a tabela abaixo.

*/

#include <iostream>
using namespace std;

int main() {
    double saldo_medio,credito;

    cout << "Informe o saldo medio do ultimo ano: " << endl;
    cin >> saldo_medio;

    if (saldo_medio >= 0 && saldo_medio <= 200) {
        credito = 0; 
    }
    if (saldo_medio > 200 && saldo_medio <= 400) {
        credito = saldo_medio * 0.20; 
    }
    if (saldo_medio > 400 && saldo_medio <= 600) {
        credito = saldo_medio * 0.30; 
    }
	if (saldo_medio > 600) {
        credito = saldo_medio * 0.30; 
    }

    cout << "Saldo Medio: R$ " << saldo_medio << endl;
    cout << "Valor do Credito: R$ " << credito << endl;

}
