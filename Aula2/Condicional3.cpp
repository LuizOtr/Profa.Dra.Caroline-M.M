#include <iostream>

using namespace std;

int main() {
	
	float a,b,resut;
	
	cout << "Entre com dois numeros: ";
	cin >> a >> b;
	
	if(a > b){
		cout << "A e Maior: "<< a <<endl;
		cout << "B e Menor: "<< b <<endl;
	}
	if(b > a){
		cout << "B e Maior: "<< a <<endl;
		cout << "A e Menor: "<< b <<endl;
	}
	if(a == b){
		cout << "A e B Sao iguais" <<endl;
	}
	
}
