#include <iostream>
#include <cstring>
#include <string>
#include <stdlib.h>>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

struct Boll{
	int x_position;
	int y_position;
};

Boll newCoordinates(Boll oldBoll) {
	cout <<"Skriv in ny x koordinat (0 -10))"<<endl;
	cin>> oldBoll.x_position;
	cout <<"Skriv in ny y koordinat (0-10)"<<endl;
	cin>> oldBoll.y_position;
	
	return oldBoll;
}

void spelplan(Boll boll) {
	system("CLS");
	for(int y =0; y<boll.y_position; y++) {
		cout<<endl;
	}
	for(int x =0; x<boll.x_position; x++) {
		cout<<" ";
	}
	cout<<"O"<<endl<<endl;
}

int main(int argc, char** argv) {
	bool game = true;
	string fortsatt;
	Boll boll = {0,0};
	while(game) {
		boll = newCoordinates(boll);
	
		spelplan(boll);
		cout << "Vill du forsätta mata in nya koordinater (yes/no)"<<endl;
		cin>> fortsatt;
		if(fortsatt == "no") {
			game = false;
		}
	}
	return 0;
}
