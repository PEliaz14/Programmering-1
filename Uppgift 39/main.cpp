#include <iostream>
#include <cstdlib>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;



int main(int argc, char** argv) {
	
	srand(1);
	

	
	int slumptal = rand()%10+1;
	int slumptal2 = rand()%10+1;
	
	
	if (slumptal2 >= slumptal){
		cout << slumptal<<endl << slumptal2;
	}
	
	return 0;
}
