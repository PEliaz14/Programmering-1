#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {


	int ar, modellar, total;
	
	cout << "Ar idag" << endl;
	cin >> ar;
	
	cout << "Bilens armodell" << endl;
	cin >> modellar;
	
	total = ar - modellar;


	if (total <= 5) {
	cout <<"helforsakring";
	}
		
	else if (total <= 25 ) {
	 cout <<"halvforsakring";
	}
	

	
	else {
	cout << "veteranbilsforsakring";
	}
	
	
	
	
	
	
	return 0;
}
