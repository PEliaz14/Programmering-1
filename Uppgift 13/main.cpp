#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int tal, tal2, tal3, total;
	
	cout << "skriv ett tal mellan 10-20" << endl;
	cin >> tal;
	
	cout << "Skriv sänkningen av talet" << endl;
	cin >> tal2;
	
	cout << "Skriv lägsta talet men med samma multiplikationslinje" << endl;
	cin >> tal3;
	
 	cout << tal << endl;
 	
	while (tal >= tal3){
	tal = tal - tal2;
	cout << tal << endl;
	}
	
	return 0;
}
