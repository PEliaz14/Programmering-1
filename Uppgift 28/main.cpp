#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) { 

char Skriv1;
int  heltal1, heltal2, total;
	
	cout <<"Heltal, Vad for raknesatt, Heltal " << endl;
	cin >> heltal1 >> Skriv1 >> heltal2;
	
	/*cout <<" +, -, /, * " << endl;
	cin >> Skriv1;
	
	cout <<"Hel tal " << endl;
	cin >> heltal2; */

	
	if(Skriv1 == '+') { 
	
	total = heltal1 + heltal2;
	}
	
	else if(Skriv1 == '-') {
	total = heltal1 - heltal2;
	}
	
	else if(Skriv1 == '/') {
	total = heltal1 / heltal2;
	}
	
	else if(Skriv1 == '*')
	{total = heltal1 * heltal2;
	}
	
	
	cout << "Svar " << total;
	

	return 0;
}
