#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int Skriv1, heltal1, heltal2, total;
	
	cout <<"Hel tal " << endl;
	cin >> heltal1;
	
	
	
	cout <<"Hel tal " << endl;
	cin >> heltal2;
	
	cout <<"1 + 2 - 3 / 4 * " << endl;
	cin >> Skriv1;
	
	if(Skriv1 == 1) { 
	
	total = heltal1 + heltal2;
	}
	
	else if(Skriv1 == 2) {
	total = heltal1 - heltal2;
	}
	
	else if(Skriv1 == 3) {
	total = heltal1 / heltal2;
	}
	
	else if(Skriv1 == 4)
	{total = heltal1 * heltal2;
	}
	
	
	cout << "Svar" << total;
	
	
	
	return 0;
}
