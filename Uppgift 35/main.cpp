#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int IncreaseFunction(int x, int y){

	int Result;
	
	Result = x + y;


	return Result;

}



int main(int argc, char** argv) {
	int Number1, Number2;
	cout <<"Write tow Numbers here and then another"<<endl;
	cin >>Number1 >> Number2;
	
	int answer;
	
	answer = IncreaseFunction(Number1, Number2);
	
	cout << answer;
	return 0;
}
