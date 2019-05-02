#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

double calculator(double C){
	double math1, math2;
	
	math1 = C - 32;
	
	math2 = math1 / 1.8;
	
	return math2;
	
}


string temp(){
	double Temprature_f;	
	
	cout <<"Write tempratur in farenhight"<<endl;
	cin >> Temprature_f;
	
	double answer;
	
	answer = calculator(Temprature_f);
	
	cout << answer;
}




int main(int argc, char** argv) {
	
	temp();
	
	return 0;
}
