#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int a, b, c;

	cout <<"Skriv in ett heltal"<<endl;
	cin >>a;
	cout <<"Skriv in ditt andra heltal hara"<<endl;
	cin >>b;
	
	c=a; 
	a=b; 
	b=c; 
	
	
	
	cout << a << " " << b << endl;
	cout << b << " " << a << endl;

	
	return 0;
}
