#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int pythogras(string valetsidan, int input, int input2){
	double sicktback, inp, inp2;
	
	if (valetsidan == "hypotenusa" or valetsidan == "Hypotenusa"){
		inp = input * input;
		inp2 = input2 * input2;
		inp = inp - inp2;
		sicktback = sqrt(inp);
		
	}
	else{
		inp = input * input;
		inp2 = input2 * input2;
		inp = inp + inp2;
		sicktback = sqrt(inp);
	}
	
	
	
	return sicktback;
	
}



int main(int argc, char** argv) {
	string valet;
	int hypotenusa, katet, katet2;
	double tredjesidan;
	
	cout <<"Skriv om du vill har en hypotenusa eller kateter"<<endl;
	cin >> valet;
	
	if(valet == "Hypotenusa" or valet == "hypotenusa"){
		cout <<"Skriv hur stor hypotensuan skall vara"<<endl;
		cin >> hypotenusa;
		cout <<"Skriv hur stor kateten skall vara"<<endl;
		cin >>katet;
		tredjesidan = pythogras(valet, hypotenusa, katet);
	}
	else{
		cout <<"Skriv dina kateter har"<<endl;
		cin >>katet, katet2;
		tredjesidan = pythogras(valet, katet, katet2);
	}

	cout <<tredjesidan;	
	return 0;
}
