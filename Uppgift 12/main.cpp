#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int Svar, tal, tal2, tal3, total;
	
	Svar = 4560;
	
	cout << "Skriv fyrsiffrigt tal för inlogning till bank kort" << endl;
	cin >> tal;
	
	if (tal == Svar) {
		cout << "Grattis, du får nu ta ut pengar!" << endl;
		return 0;
	}
	
	cout << "Fel kod försök igen" << endl;
	cin >> tal2;
	
	if (tal2 == Svar) {
		cout << "Grattis, du får nu ta ut pengar!" << endl;
		return 0;
	}
	
	cout << "Sista försöket" << endl;
	cin >> tal3;
	
	
	if (tal3 == Svar) {
		cout << "Grattis, du får nu ta ut pengar!" << endl;
		return 0;
	}
	
	cout << "Ditt kort är nu spärrat!" << endl;
	
	return 0;
}
