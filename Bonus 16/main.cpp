#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int WhileMax(int kontrollera){
	int inskrivet;
	
	
	cout <<"Skriv in ett heltal"<<endl;
	cin >> inskrivet;
	cout <<"Om detta heltal ar mindre an ett annat redan inskrivet tal sa kommer programmet att avslutas"<<endl;
	
	while(inskrivet > kontrollera){
		cout <<"Skriv in ett nytt heltal som ar mindre an det foregaende" << endl;
		cin >> inskrivet;
		
	}
	return inskrivet;
	
		
}


int main(int argc, char** argv) {
	int bortskickt;
	
	bortskickt = WhileMax(7);
	
	cout << bortskickt;
	
	
	return 0;
}
