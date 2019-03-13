#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int tal, tal2, tal3, total;
	
	cout << "skriv ett tal mellan 10-20" << endl;
	cin >> tal;
	
	cout << "Skriv sankningen av talet" << endl;
	cin >> tal2;
	
	cout << "Skriv lagsta talet men med samma multiplikationslinje" << endl;
	cin >> tal3;
 	
 	
 	
	for (int i = tal; i >= tal3; i--){

	cout << i << endl;
	i = i- 2;
	}
	
	return 0;
}
