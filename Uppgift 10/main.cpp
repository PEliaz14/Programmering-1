#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int tim, over, total, total2;
	
	cout << "Arbetstimmar" << endl;
	cin >> tim;
	
	cout << "Overtid" << endl;
	cin >> over;
	
	if (tim < 160) {
		cout << "Ingen overtid" << endl;
		total2 = tim *100;
		cout << "Kr tjanat" << total2 << endl;
		return 0;
	}
	else{
		total = tim * 100 + over * 150;
		
	}

	
	cout << "Kr tjanat " << total << endl;
	
	return 0;
}
