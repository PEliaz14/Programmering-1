#include <iostream>
#include <cstdlib>
#include <ctime>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int randomiser(int min, int max){
	
		srand(time(0));
		int slump = rand()%(max - min + 1) + min;
	
	return slump;
	
}



int main(int argc, char** argv) {
	int lowest, higest, answer;
	
	
	cout <<"Write the lowest and higest number you want in order on the aoutomatic randonmiser for a number between the both of them"<<endl;
	cin >> lowest >> higest;
	

	
	answer = randomiser(lowest, higest);
	
	
	cout << answer;

	
	return 0;
}
