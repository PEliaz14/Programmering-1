#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int total = 0;
	int tal[7];
	
	cin >> tal[0];
	cin >> tal[1];
	cin >> tal[2];
	cin >> tal[3];
	cin >> tal[4];
	cin >> tal[5];
	cin >> tal[6];
	
	
	
	for(int i = 0;  i < 7; i++){
	total = total + tal[i];}

		if(total > 50){
		cout << total << " Storre an 50";}
		else{
		cout << total << " Mindre an 50";}
	
	return 0;
}
