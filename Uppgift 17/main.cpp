#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


int main(int argc, char** argv) {
	

	
	for(int i = 0; i < 10; i++){
		for(int k = 0; k < i + 1; k++){
			if (k == 0){
				cout << "Baa";
			}
			else{
				cout << ", Baa" ;
			}
						
		}
		cout << endl;
	}
	
	
	
	
	
	return 0;
}
