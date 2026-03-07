/*Faça um programa que leia as 3 notas de um aluno e calcule a média final
deste aluno. Considere que a média é ponderada e que o peso das notas
é, respectivamente, 2, 3 e 5.
O programa deve mostrar a média e imprimir a mensagem “Aprovado” se
a média for maior ou igual a 70; caso contrário, deve imprimir a mensagem
“Reprovado”.*/



#include <iostream>

using namespace std;

int main(){
	
	float n1,n2,n3,media;
	
	
	cout << "Coloque tres notas:"; 
	cin >> n1 >> n2 >> n3; /* Lembrar de usar setinhas >> ou << */
	
	media = (n1*2+n2*3+n3*5)/10;
	
	if(media >= 70){
		cout << "Aprovado com a media: " << media <<endl;
	}
	else{
		cout << "Reprovado com a nota: " << media << endl;
	}
	
}
