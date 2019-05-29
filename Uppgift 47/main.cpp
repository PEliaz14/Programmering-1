#include <iostream>
#include <cstring>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

struct Boll{
	int radie;
	string farg;
	int vikt;
};

Boll convert(Boll x){
	
	x.radie = x.radie*2;
	x.vikt = x.vikt+8;
	
	
	return x;
}



int main(int argc, char** argv) {
	int radie;
	string farg;
	int vikt;

	cout <<"Skriv vad for boll du ville ha borja med radien sedan fargen pa bollen och sist vikten i respektive ordning" <<endl;
	cin >> radie >> farg >> vikt;
	

	Boll andra = {radie, farg, vikt};
	andra = convert(andra);
	
	cout <<endl<< "Boll tva ar "<<endl;
	cout <<"Radien ar " <<andra.radie <<" /Fargen ar "<< farg <<" /Vikten ar "<< andra.vikt<<endl;

	
	return 0;
}
