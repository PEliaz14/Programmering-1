#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int randomiser(int min, int max){
	
		int slump = rand()%(max - min + 1) + min;
	
	return slump;
	
}


int main(int argc, char** argv) {
	int tarnning[5];
	string answer;
	int dicenumber;
	string dicenumbers;
	
	srand(time(0));


	for(int i = 0;i <5; i++){

		tarnning[i] = randomiser(1,6);
		cout << tarnning[i] <<" ";}


	cout <<endl <<"Do you want to reroll a dice Yes/No" <<endl;
	cin >> answer;
	
	
	if(answer == "No" or answer == "no"){
		return 0;}
	cout <<"Which dices do you want to change 1-5"<<endl;
	cin >> dicenumbers;
	
	for(int i=0;i<dicenumbers.size(); i++) {
		int diceplace = dicenumbers[i] -'0' - 1;
		tarnning[diceplace] = randomiser(1,6);
	}
	
	for(int i = 0; i < 5;i++){
	
	cout << tarnning[i];}
	return 0;
}
