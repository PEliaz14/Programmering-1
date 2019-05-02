#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

	string ABBAFunction(string x, string y){
	string result;
		
	result = x+ y+ y+ x;
		
	return result;
		
	}

int main(int argc, char** argv) {
	string A, B;
	
	
	cout <<"Write two letters"<<endl;
	cin >>A >> B;
	
	string answer;
	
	answer = ABBAFunction(A, B);
	
	cout << answer;
	
	return 0;
}
