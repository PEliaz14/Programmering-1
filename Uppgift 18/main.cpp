#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


int main(int argc, char** argv) {
	
	int tal;

	cout <<"Skriv Baa loopar max 15" << endl;
	cin >> tal;
	
	if (tal >= 16){
		tal = 15;
	}
	for(int i = 0; i < tal; i++){
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
