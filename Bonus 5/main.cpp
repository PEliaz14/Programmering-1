#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int total, total2, tio, fem, enk, tju, bet, hand, femt, tus, femh, hun;
	 
	cout << "Person handlar for max 10 000" << endl;
	cin >> hand;
	
	cout << "Personen betalar i kontant" << endl;
	cin >> bet;
	
	total = hand - bet;
	
	total2= total;
	
	femt = 0;
	
	if (total >= 1000){
		total % 1000;
		floor (total/1000);
	}
	if (total >= 500){
		femh = femh +1;
		total = total - 500;
	}
	if (total >= 100){
		hun = hun + 1;
		total = total - 100;
	}
	if (total >= 50 ){
		femt = femt +1;
		total = total - 50;
	}
	if (total >= 20){
		tju = tju + 1;
		total = total - 20;
	}
	if (total >= 10){
		tio = tio + 1;
		total = total - 10;
	}
	if (total >= 5){
		fem = fem +1;
		total =total -5;
	}
	if (total >= 1){
		enk = enk + 1;
		total = total - 1;
	}

	cout <<"Totalt " << total2 << "Kr" << endl;
	cout << tus << endl;
	cout << femh << endl;
	cout << hun << endl;
	cout << femt << endl;
	cout << tju << endl;
	cout << tio << endl;
	cout << fem << endl;
	cout << enk <<endl;
	return 0;
}
