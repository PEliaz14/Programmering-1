#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	bool run = true;
	char input;
	
	while(run == true){
		cout << "Vill du avsluta proggramet y/n " << endl;
		cin >> input;
		if(input =='y')
		{run = false;
		}
	}
	
	
	return 0;
}
