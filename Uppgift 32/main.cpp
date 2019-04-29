#include <iostream>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;
int main(int argc, char** argv) {
	
	string meng;
	
	
	
	cout <<"Skriv en mening" <<endl;
	getline(cin, meng);
	
	
	bool T, A, M;	
	
	for(int i = 0; i < meng.size(); i++){
		
		if(meng[i] == 'M' || meng[i] == 'm'){
			M = true;
		}
			
		if(meng[i] == 'A' || meng[i] == 'a'){
			A = true;
		}
				
		if(meng[i] == 'T' || meng[i] == 't'){
			T = true;
		}
	}

	
	
	if(M && A && T){
		cout << "Mat";
	}
	
	return 0;
}
