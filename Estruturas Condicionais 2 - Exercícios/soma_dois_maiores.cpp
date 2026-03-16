#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    float result;
    
    cout << "Informe tres numeros: " << endl;
    cin >> n1 >> n2 >> n3;
    // Aqui esta validando se n1 é o menor de todos
    if(n1 <= n2 && n1 <= n3) {
        result = n2 + n3;
    }
    // ja nesse outro n2 é o menor com isso garantimos que ele é menor  que o n1 para não repetir
    if(n2 < n1 && n2 <= n3) {
        result = n1 + n3;
    }
    // Por ultimo n3 é o menor? e garantimos que ele é menor que n1 e n2
    if(n3 < n1 && n3 < n2) {
        result = n1 + n2;
    }

    cout << "res: " << result << endl;
}

/* invertido esta voltando zerado!
fix: esta com erro na logica dos operadores
*/
