#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int Svar, tal, tal2, tal3, total;
	
	Svar = 4560;
	
	cout << "Skriv fyrsiffrigt tal f�r inlogning till bank kort" << endl;
	cin >> tal;
	
	if (tal == Svar) {
		cout << "Grattis, du f�r nu ta ut pengar!" << endl;
		return 0;
	}
	
	cout << "Fel kod f�rs�k igen" << endl;
	cin >> tal2;
	
	if (tal2 == Svar) {
		cout << "Grattis, du f�r nu ta ut pengar!" << endl;
		return 0;
	}
	
	cout << "Sista f�rs�ket" << endl;
	cin >> tal3;
	
	
	if (tal3 == Svar) {
		cout << "Grattis, du f�r nu ta ut pengar!" << endl;
		return 0;
	}
	
	cout << "Ditt kort �r nu sp�rrat!" << endl;
	
	return 0;
}
