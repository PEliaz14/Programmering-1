#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int Valt = 0, total = 0; 
	int tal[5];
	
	tal[0] = 68;
	tal[1] = 92;
	tal[2] = 13;
	tal[3] = 24;
	tal[4] = 53;
	
	for(int i = 0; i < 5; i++){
		cout << "Skriv in ett heltal som du tror jag har valt" << endl;
		cin >> Valt;
		
		if(Valt == tal[i]){
			cout << "Grattis du har vunnit en programerad aprikos";
			return 0;
			}
		}
	
	

	return 0;
}
