#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

bool testGuess(int guess, int slump) {
	if(guess < slump ){
		cout <<"The guess was below the number"<<endl;
		return false;
	}
	if(guess > slump){
		cout <<"The guess was above the number"<<endl;
		return false;
	}
	cout <<"The guess was right"<<endl;
	return true;
}

int main(int argc, char** argv) {
	bool game = true;
	int guessing;
	string answer;
	int lowest =1;
	int highest =100;
	
	while(game == true)	{

		cout <<"You shall now try to guess a number between 1-100 you get 5 tries to guess it otherwise game over"<<endl;
	
		srand(time(0));
	
		int slump = rand()%100+1;
		bool correctGuessed = false;
	
		for(int i = 0; i <5; i++){

			cin >> guessing;
			correctGuessed = testGuess(guessing, slump);
			if(correctGuessed) {
				cout <<"You win"<<endl;
				break;
			}
		
			if (guessing < slump and guessing > lowest){
				lowest = guessing;
			}
			if (guessing > slump and guessing < highest){
				highest = guessing;
			}
		
			int datorGuess= rand()%(highest -lowest +1) + lowest;
			cout << "Computer guesses " << datorGuess<< endl; /* Fixa s att det vissar om det är större mindre eller lika mycket */
			correctGuessed = testGuess(datorGuess, slump);
			if(correctGuessed) {
				cout <<"Computer wins"<<endl;
				break;
			}
			if (datorGuess < slump and datorGuess > lowest){
				lowest = datorGuess;
			}
			if (datorGuess > slump and datorGuess < highest){
				highest = datorGuess;
			}
		}
		
		if(correctGuessed == false) {
			cout <<"You Loose!" <<endl;
		}
		
		cout <<"Do you want to start again? Yes/No" <<endl;
		cin >>answer;
			
		if (answer == "Yes" or answer=="yes"){
			game = true;
		} 
		else {
			game = false;
		}
	}
	
	return 0;
}
