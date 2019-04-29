#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;
int main(int argc, char** argv) {
	
	string ord, Z;
	char fel;
	Z = 'Z';
	
	cout << "Skriv ett ord" <<endl;
	cin >> ord;


	while(ord == Z){

	}
	
	
	for(int i = 0; i < '/0'; i++){
		if(ord[i] == 'Z'){
			fel = 'a';
			ord[i] = fel;
		}
	}

	cout <<	ord;
	
	return 0;
}
