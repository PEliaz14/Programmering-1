#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int total = 0, total2,  tio = 0, fem = 0, enk = 0, tju = 0, bet = 0, hand = 0, femt = 0, tus = 0, fe = 0, hun = 0;
	 
	cout << "Person handlar for max 10 000" << endl;
	cin >> hand;
	
	cout << "Personen betalar i kontant" << endl;
	cin >> bet;
	
	//total = hand - bet;
	total = bet - hand;
	
	total2 = total;

	
	while(total > 0){
	
		if (total >= 1000){
			tus++;
			total = total - 1000;}
		
		if (total >= 500 and total < 1000){
			fe++;
			total = total - 500;
		}
		if (total >= 100 and total < 500){
			hun++;
			total = total - 100;
		}
		if (total >= 50 and total < 100){
			femt++;
			total = total - 50;
		}
		if (total >= 20 and total < 50){
			tju++;
			total = total - 20;
		}
		if (total >= 10 and total < 20){
			tio++;
			total = total - 10;
		}
		if (total >= 5 and total < 10){
			fem++;
			total =total -5;
		}
		if (total >= 1 and total < 10){
			enk++;
			total = total - 1;
		}
	
	}
	cout <<"Totalt " << total2 << "Kr" << endl;
	cout << tus <<" Tusenkronor sedlar" << endl;
	cout << fe <<" Femhundrakronor sedlar" << endl;
	cout << hun <<" Hundrakronor sedlar" << endl;
	cout << femt <<" Femtiokronor sedlar" << endl;
	cout << tju <<" tjugokronor sedlar" << endl;
	cout << tio <<" Tiokronor mynt" << endl;
	cout << fem <<" Femkronor mynt" << endl;
	cout << enk <<" Enkronor mynt" << endl;
	return 0;
}
