#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	bool game = true;
	int guessing;
	string answer;
	
	while(game == true)	{

	cout <<"You shall now try to guess a number between 1-100 you get 5 tries to guess it otherwise game over"<<endl;
	
	
	srand(time(0));
	
	
	
	int slump = rand()%100+1;
	
		for(int i = 0; i <=5; i++){

		cin >> guessing;
		
			if(guessing < slump ){
			cout <<"Your guess was below the number"<<endl;
			}
			if(guessing > slump){
			cout <<"Your guess was above the number"<<endl;
			}
			if(guessing == slump){
			cout <<"You win"<<endl;
			cout <<"Do you want to start again? Yes/No" <<endl;
			cin >>answer;
			
				if (answer == "No"){
					game = false;
				}
				else if (answer == "Yes"){
					game = true;
					return 1;
			}
			}
		}
	}

		if(game == false){
		cout << "You lost, Game over man game over";
		return 0;}
		
		cout <<"Do you want to start again? Yes/No" <<endl;
		cin >>answer;
	
		if (answer == "No"){
			game = false;
		}
		else if(answer == "Yes"){
			game = true;
		}
		

	
	return 0;
}
