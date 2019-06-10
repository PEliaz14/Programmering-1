#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {

	int totalt, tal ;


	totalt = 0;
	cout << "Tal 1" << endl;
	cin >> tal;
	totalt = totalt + tal;
	cout << "Tal 2" << endl;
	cin >> tal;
	totalt = totalt + tal;
	cout << "Tal 3" << endl;
	cin >> tal;
	totalt = totalt + tal;
	cout << "Tal 4" << endl;
	cin >> tal;
	totalt = totalt + tal;
	cout << "Tal 5" << endl;
	cin >> tal;
	totalt = totalt + tal;
	
	totalt = totalt/5;
	
	cout << " " << totalt;
	return 0;
}
