#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int skriv, skriv2, total;
	
	cout << "Skriv ett tal" << endl;
	cin >> skriv;
	
	cout << "Skriv ett tal igen" << endl;
	cin >> skriv2;
	
	int diff;
	diff = skriv - skriv2;
	
	if (diff < 0) {
	diff =diff *-1;}
	
	if(diff < 10 and diff > 0) {
		cout << "Close but no Cigar" << endl;
	}
	
	
	else if (skriv == skriv2 ){
		cout << "Grattis" << endl;
	
	}

	
	else {
			cout << "Not even close" << endl;
	}	
	
	
	
	return 0;
}
