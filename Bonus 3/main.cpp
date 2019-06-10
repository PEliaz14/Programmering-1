#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int tim, tim2, min, min2, sek, sek2, tim3, min3, sek3, total;
	cout << "Skriv in tiden for varv ett i formatet TT MM SS" << endl;
	cin >> tim>> min>> sek;
	
	cout << "Skriv in tiden for varv tva i formatet TT MM SS" << endl;
	cin >> tim2>> min2 >>sek2;
	
	
	tim3 = tim + tim2;
	min3 = min + min2;
	sek3 = sek + sek2;
	
	while (sek3 >= 60){
	min3 = min3 +1;
	sek3 = sek3 - 60;
	}
	
	while (min3 >= 60){
	tim3 = tim3 + 1;
	min3 = min3 - 60;
	}

	
	

	

	
	cout <<"Slut tid" << tim3 << ":" << min3 << ":" << sek3 << endl;
	
	return 0;
}
