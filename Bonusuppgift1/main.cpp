#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	float katet1, katet2, Jazz, Banan;
	
	cout << "Katet1" << endl;
	cin >> katet1;
	cout << "Katet 2" << endl;
	cin >> katet2;
	
	Jazz = katet1 * katet1 + katet2 * katet2;
	Banan = sqrt(Jazz);
	cout <<"hypotenusan " <<Banan;	
	
	return 0;
}
