#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

char Calculator(int x, int y, char maths){
	
	int Result;
	
	if(maths == '+') { 
	Result = x + y;
	}
	
	else if(maths == '-') {
	Result = x - y;
	}
	
	else if(maths == '/') {
	Result = x / y;
	}
	
	else if(maths == '*')
	{Result = x * y;
	}
	
	
	
	return Result;
	
	
}

int main(int argc, char** argv) {
	int A, B;
	char maths;
	
	cout << "Write a calculation here, Number maths Number" <<endl;
	cin >>A >> maths >>B;
	
	int answer;
	
	answer = Calculator(A, B ,maths);
	
	cout << answer;
	
	return 0;
}
