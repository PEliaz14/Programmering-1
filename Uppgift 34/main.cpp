#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int IncreaseFunction(int Resultat){


	Resultat = Resultat + 2;
	
	return Resultat;}

int main() {
	int Number, Svaret;
	
	cout <<"Write a number" <<endl;
	cin >> Number;
	
	Svaret = IncreaseFunction(Number);
	
	cout <<Svaret;
	
	return 0;
}
