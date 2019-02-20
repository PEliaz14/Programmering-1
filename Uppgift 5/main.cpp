#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int Skriv;
	
	
	cout << "Skriv ett tal mellan 0-100" << endl;
	cin >> Skriv;

	if( Skriv > 44 && Skriv < 64 )
	{
	cout << "GRATTIS! DU VANN! BRA JOBBAT!" << endl;}
	
	else{
	
	cout << "GAME OVER" << endl;}
	
	
	
	return 0;
}



