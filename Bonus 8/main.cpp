#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	for(int i = 0; i < 10; i++){
		for(int k =0; k<10; k++) {
			cout <<k;		
		}
		cout << endl;
	}
	cout << endl;
	
	for(int i = 0; i < 10; i++){
		for(int k =0; k<=i; k++) {
			cout <<k;		
		}
		cout << endl;
	}
	cout << endl;
	
	for(int i = 0; i < 10; i++){
		for(int k =0; k<10-i; k++) {
			cout <<k;		
		}
		cout << endl;
		for(int j=0;j<=i;j++) {
			cout << " ";
		}
	}
	
	return 0;
}
