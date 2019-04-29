#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	bool is_same = false;
	int tal[5] = {1,2,3,4,5};
	int number, antal = 0;
	

		cin >> number;
		for(int i = 0; i < 5; i++){
		
		
			if(tal[i] == number){
			is_same = true;
			antal++;			
			}
		}
		if(is_same == true){
			cout << "Finns ett tal som ar lika Grattis"<< endl;
		}
		cout << "Antal " << antal;
	
	return 0;
}
