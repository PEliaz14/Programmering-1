#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	bool is_same = false;
	int tal[5];

	
	cin >> tal[0];
	cin >> tal[1];
	cin >> tal[2];
	cin >> tal[3];
	cin >> tal[4];
	
	for(int i = 0; i < 5; i++){
		
	
		for(int k = 0; k < 5;k++){
		
			if(tal[i] == tal[k] and i !=k){
				is_same = true;}
					
			}
	}

	if (is_same == false){
		cout << "Inga av talen ar lika"<<endl;
	}	
	else{
		cout << "Finns minst ett tal som ar lika"<< endl;
	}
	return 0;
}
