#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int tal, tal2, mult, total;
	
	cout << "Skriv nagot tal for att se dens multiplikations tabbel" << endl;
	cin >> tal;

	

	
	mult = -1;
	
	while (mult <= 11){
		mult = mult + 1;
		total = mult * tal;
	cout << mult << " X " << tal << " = "<< total << endl;
}
	
	return 0;
}
