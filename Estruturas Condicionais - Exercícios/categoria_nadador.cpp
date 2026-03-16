/*

Faça um programa que leia idade de um nadador e mostre a sua categoria, de
acordo com a tabela abaixo.
Categoria Idade
Infantil A 5 - 7 anos
Infantil B 8 - 10 anos
Juvenil A 11 - 13 anos
Juvenil B 14 - 17 anos
Adulto maiores de 18 anos

*/

#include <iostream>
using namespace std;

int main() {
    int idade;

    cout << "Informe a idade do nadador: ";
    cin >> idade;

    if (idade >= 5 && idade <= 7) {
        cout << "Categoria: Infantil A" << endl;
    }
    if (idade >= 8 && idade <= 10) {
        cout << "Categoria: Infantil B" << endl;
    }
    if (idade >= 11 && idade <= 13) {
        cout << "Categoria: Juvenil A" << endl;
    }
    if (idade >= 14 && idade <= 17) {
        cout << "Categoria: Juvenil B" << endl;
    }
    if (idade >= 18) {
        cout << "Categoria: Adulto" << endl;
    }

}
