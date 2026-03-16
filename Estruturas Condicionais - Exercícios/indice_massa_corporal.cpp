/*
Faça um programa que leia o peso (quilos) e a altura (metros) de uma pessoa,
calcule e mostre o Índice de Massa Corporal (IMC).
Além do IMC, o programa deverá mostrar a classificação da pessoa:
IMC= peso÷altura2
IMC < 18.5 Abaixo do peso
18.5 <= IMC < 25 Peso ideal
25 <= IMC < 30 Sobrepeso
IMC >= 30 Obesidade
*/

#include <iostream>
using namespace std;

int main() {
    double peso, altura, imc;

    cout << "Informe o peso (em quilos Ex: 60.4): ";
    cin >> peso;
    cout << "Informe a altura (em metros Ex: 1.67): ";
    cin >> altura;
    imc = peso / (altura * altura);
    cout << "Seu IMC e: " << imc << endl;
    
    if (imc < 18.5) {
        cout << "Classificacao: Abaixo do peso" << endl;
    }
    if (imc >= 18.5 && imc < 25.0) {
        cout << "Classificacao: Peso ideal" << endl;
    }
    if (imc >= 25.0 && imc < 30.0) {
        cout << "Classificacao: Sobrepeso" << endl;
    }
    if (imc >= 30.0) {
        cout << "Classificacao: Obesidade" << endl;
    }
}
