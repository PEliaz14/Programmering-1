#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int IncreaseFunction(int Resultat){


	Resultat = Resultat + 2;
	cout <<Resultat;
	}

int main() {
	int Number;
	
	cout <<"Write a number" <<endl;
	cin >> Number;
	
	IncreaseFunction(Number);
	
	
	return 0;
}
