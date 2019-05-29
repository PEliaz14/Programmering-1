#include <iostream>
#include <cstdlib>
#include <ctime>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int lowest, higest;
	
	
	cout <<"Write the lowest and higest number you want in order on the aoutomatic randonmiser for a number between the both of them"<<endl;
	cin >> lowest >> higest;
	
	
	srand(time(0));
	int slump = rand()%(higest - lowest + 1) + lowest;
	

	
	cout << slump;

	
	return 0;
}
