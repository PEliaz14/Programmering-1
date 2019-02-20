#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {

	float kilo, kilop, kilo2, kilop2, totalt;
	
	cout << "Kilo" << endl;
	cin >> kilo;
	cout <<"Kilopris" << endl;
	cin >> kilop;
	
	cout << "Kilo2" << endl;
	cin >> kilo2;
	cout << "Kilopris2" << endl;
	cin >> kilop2;
	
	totalt = kilo * kilop + kilo2 * kilop2 * 1.12;
	cout << "Total priset med moms " << totalt;
	
	return 0;
}
