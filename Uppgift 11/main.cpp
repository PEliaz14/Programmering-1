#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int total, tal;
	
	cout << "skriv ett heltal" << endl;
	cin >> tal;
	cout << tal << " " ;
	
	while (tal > 0 ) {
	tal = tal-1;
	cout << tal << " " ;
	}


	return 0;
}
