#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int tal;
	
	cout << "Välj stjarnpostiotion 1-10" << endl;
	cin >> tal;
	tal = tal - 1;	
	
	for (int i = 0; i < 6; i++){
		tal = tal % 10;
		for (int k = 0; k < 10; k++){
			if (tal == k){
				cout << "_";
			}
			else {
				cout << "*";
			}	
		}
		cout << endl;
		tal++;
		
	}
	
	
	
	return 0;
}
