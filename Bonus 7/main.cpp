#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int tal, rad, stj;
	
	cout << "Valj stjarnpostiotion 1-10" << endl;
	cin >> tal;
	tal = tal - 1;	
	
	cout <<"Valj hur manga rader med stjärnor" << endl;
	cin >> rad;
	
	cout << "Valj hur manga sjtarnor det skall vara" << endl;
	cin >> stj;
	
	for (int i = 0; i < rad; i++){
		tal = tal % stj;
		for (int k = 0; k < stj; k++){
			if (tal == k){
				cout << "_";
			}
			else {
				cout << "*";
			}	
		}
		cout << endl;
		tal++;
		
	}
	
	
	
	return 0;
}
