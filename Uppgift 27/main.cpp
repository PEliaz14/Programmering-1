#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
string tal, tal1;
int heltal1, heltal2, total;
bool run = true;

	cout << "Varning skriv exakt star med raknesatten annars fungerar det icke";


	while(run == true){
	
	cout << "Valj ditt raknesatt. Addition, Subtraktion, Multiplikation, Division" <<endl;	
	cin >> tal1;
	cout << "Valj Heltal1 har" <<endl;
	cin >> heltal1;
	cout << "Valj ditt andra heltal har" << endl;
	cin >> heltal2;

	
	if(tal1 == "Addition"){
	total = heltal1 + heltal2;
	}
	
	else if(tal1 == "Subtraktion") {
	total = heltal1 - heltal2;
	}
	
	else if(tal1 == "Division" ) {
	total = heltal1 / heltal2;
	}
	
	else if(tal1 == "Multiplikation")
	{total = heltal1 * heltal2;
	}
	
	cout << "Svaret ar har " << total;
	
	cout << " Vill du starta miniräknaren? Ja/Nej" <<endl;
	cin >> tal;
	
	if(tal == "Nej"){
		cout << "Hej da";
		return 0;
	}
	else if(tal == "Ja"){
		run = true;
		
	}
}
	
	
	return 0;
}
