/*Faça um programa que leia as 3 notas de um aluno e calcule a média final
deste aluno. Considerar que a média é ponderada e que o peso das notas
é, respectivamente, 2, 3 e 5.*/

#include <iostream>

using namespace std;

int main(){
	
	float n1,n2,n3,cal,media;
	
	
	cout << "Coloque tres notas:"; 
	cin >> n1 >> n2 >> n3; /* Lembrar de usar concatena */
	
	media = (n1*2+n2*3+n3*5)/10;
	
	cout << "A media ponderada e: " << media << endl;
}



