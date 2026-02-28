#include <iostream>

using namespace std;

int main(){
	
	float n1,n2,n3,media;
	
	
	cout << "Coloque tres notas:";
	cin >> n1, n2, n3;
	
	media = (n1*2) + (n2*3) + (n3*5)/10;
	
	cout << "A media ponderada e: " << media;
}
