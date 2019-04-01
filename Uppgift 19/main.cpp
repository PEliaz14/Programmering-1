#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int kontroll;
	bool is_ten;
	
	cout << "Skriv ett heltal" << endl;
	cin >> kontroll;
	
	if (kontroll == 10){
	 is_ten = true;
	cout << "Du skrev 10";}
	else {
		 is_ten = false;
		cout <<  "Du skrev ej 10";
	}
	
	
	return 0;
}
