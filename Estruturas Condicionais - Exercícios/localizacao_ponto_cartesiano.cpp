/*

Faça um um programa que leia as coordenadas reais X e Y de um ponto
no sistema cartesiano e imprime o quadrante ao qual o ponto pertence.
Caso o ponto não pertença a nenhum quadrante, escrever se ele está
sobre o eixo X, eixo Y ou na origem.

*/

#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "Informe o valor de X e Y para saber a sua localizacao: "<<endl;
    cin >> x >> y;

    if (x == 0.0 && y == 0.0) {
        cout << "Origem"<<endl;
    }
    if (x == 0.0 && y != 0.0) {
        cout << "Eixo Y"<<endl;
    }
    if (y == 0.0 && x != 0.0) {
        cout << "Eixo X"<<endl;
    }
    if (x > 0.0 && y > 0.0) {
        cout << "Voce esta no primeiro Quadrante"<<endl;
    }
    if (x < 0.0 && y > 0.0) {
        cout << "Voce esta no segundo Quadrante"<<endl;
    }
    if (x < 0.0 && y < 0.0) {
        cout << "Voce esta no terceiro Quadrante"<<endl;
    }
    if (x > 0.0 && y < 0.0) {
        cout << "Voce	 esta no quarto Quadrante"<<endl;
    };
}
