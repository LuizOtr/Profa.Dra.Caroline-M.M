#include <iostream>

using namespace std;

int main() {
	
	float a,b,resut;
	
	cout << "Entre com dois numeros: ";
	cin >> a >> b;
	
	if(a>b){
		cout << "A e Maior: "<< a <<endl;
		cout << "B e Menor: "<< b <<endl;
	}
	else{
		cout << "B e Maior: "<< b <<endl;
		cout << "A e Menor: "<< a <<endl;
	}
	
}
