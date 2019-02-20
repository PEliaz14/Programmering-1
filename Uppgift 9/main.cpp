#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int tal1, tal2, tal3;
	
	cout <<"Skriv ett positivt hel tal" << endl;
	cin >> tal1;
	
	cout <<"Skriv ett positivt hel tal" << endl; 
	cin >> tal2;
	
	cout <<"Skriv ett positivt hel tal" << endl;
	cin >> tal3;
	
	if (tal1 >= tal2 and tal1 >= tal3) {
		cout <<"Storsta tallet " << tal1 << endl;		
	}
	
	else if (tal2 >= tal1 and tal2 >= tal3) {
		cout <<"Storsta tallet " << tal2 << endl;
	}
	
	else if (tal3 >= tal1 and tal3 >= tal2) {
		cout <<"Storsta tallet " << tal3 << endl;
	}
	
	
	return 0;
}
