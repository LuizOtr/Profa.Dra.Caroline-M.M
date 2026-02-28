#include <iostream>

using namespace std;

int main() {
    int totaldias, anos, meses, dias, restoanos;
    
    cout << "Infomer sua idade em dias: ";
    cin >> totaldias;
    anos = totaldias/365;
    
    restoanos = totaldias % 365;
    
	meses = restoanos/30;
    dias = restoanos%30;
    
    
    cout << anos << "Ano" << meses << "Meses" << dias << "Dias" << endl;
}
