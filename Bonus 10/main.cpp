#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int tal1 = 0, tal2 = 1, total, summa;
	
	summa = 0;
	for(int i = 0; i < 18; i++){

		if(i == 0 ){
			cout << tal1 <<endl;
					
		}
		if(i == 1){
			cout << tal2 <<endl;
			
		}
	total = tal1 + tal2;
	tal1 = tal2;
	tal2 = total;
	summa = summa + total;
	cout << total << endl;
	
	}
	cout << summa<< endl;
	return 0;
}
