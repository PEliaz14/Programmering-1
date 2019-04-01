#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int tal[10];
	
	cin >> tal[0];
	cin >> tal[1];
	cin >> tal[2];
	cin >> tal[3];
	cin >> tal[4];
	cin >> tal[5];
	cin >> tal[6];
	cin >> tal[7];
	cin >> tal[8];
	cin >> tal[9];
	
	
	for (int i = 9; i >= 0; i--){
	cout << tal [i] << " ";
	
	}

	
	
	return 0;
}
