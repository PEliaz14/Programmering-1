#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;
int main(int argc, char** argv) {
	
	string namn;
	char first;
	
	cout << "Skriv ett namn" <<endl;
	cin >> namn;
	
	namn[0] = 'Z';
	
	
		
	cout  << namn;
	
	return 0;
}
