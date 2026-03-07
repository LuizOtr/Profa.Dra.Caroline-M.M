/* Faça um programa que leia uma média e imprima a mensagem “Aprovado”
se a média for maior ou igual a 70; caso contrário, imprima a mensagem
“Reprovado”. */

#include <iostream>

using namespace std;

int main(){
	
	float n1,n2,n3,media;
	
	
	cout << "Coloque tres notas:"; 
	cin >> n1 >> n2 >> n3; /* Lembrar de usar setinhas >> ou << */
	
	media = (n1+n2+n3)/3;
	
	if(media >= 70){
		cout << "Aprovado com a media: " << media <<endl;
	}
	else{
		cout << "Reprovado com a nota: " << media << endl;
	}
	
}
