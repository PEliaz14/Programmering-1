#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int addera(int nummer){

	if(nummer > 1){
		return nummer+addera(nummer-1);}

	else{
		return nummer;
	}
	
}



int main(int argc, char** argv) {
	int heltal;
	
	
	cout << "Skriv ett heltal"<<endl;
	cin >> heltal;
	
	
	int svaret;
	svaret = addera(heltal);
	
	cout << heltal << " = " << svaret;
	
	return 0;
}
