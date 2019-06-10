#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int fakultet(int multi){
	if(multi == 1) {
		return 1;	
	}
	return multi * fakultet(multi -1);
}

int main(int argc, char** argv) {
	int heltal;
	int svaret;
	cout <<"Skriv in ett heltal som multipliceras"<<endl;
	cin >> heltal;
	
	svaret = fakultet(heltal);
	
	cout << svaret;
		
	return 0;
}
