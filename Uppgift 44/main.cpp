#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int randomiser(int min, int max){
	
		int slump = rand()%(max - min + 1) + min;
	
	return slump;
	
}


int main(int argc, char** argv) {
	int tarnning[5];
	
	srand(time(0));


	for(int i = 0;i <5; i++){

		tarnning[i] =  randomiser(1,6);
		cout << tarnning[i];
}
	
	return 0;
}
