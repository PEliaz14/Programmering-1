#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	bool increase = true;
	int i;
	
	i = 0;
	while(increase == true ){
	cout << i<< " ";
	i++;
	
	if(i >= 7){
		increase = false;
		cout << i << " ";	
	}
	}
	
	while(increase == false){
		i--;
		cout<< i << " ";
		if (i == 0){
			return 0;
		}
		
	}
	
	return 0;
}
