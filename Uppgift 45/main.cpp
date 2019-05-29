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
	
	srand(time(0));


	for(int i = 0;i <5; i++){

		tarnning[i] = randomiser(1,6);
		cout << tarnning[i] <<" ";}


	cout <<endl <<"Do you want to reroll a dice Yes/No" <<endl;
	cin >> answer;
	
	
	if(answer == "No" or answer == "no"){
		return 0;}
	cout <<"Which dice do you want to change 1-5"<<endl;
	cin >> dicenumber;
	
	
	

	
	if(dicenumber == 1){
		/*reroll the firstnumber */
		tarnning[0] = randomiser(1,6);}
		
	if(dicenumber == 2){
		/*reroll the secondnumber*/
		tarnning[1] = randomiser(1,6);}
		
	if(dicenumber == 3){
		/*reroll the thridnumber*/
		tarnning[2] = randomiser (1,6);}
		
	if(dicenumber == 4){
		/*reroll the fourthnumber*/
		tarnning[3] = randomiser (1,6);}
	
	if(dicenumber == 5){
		/*reroll the fifthumber*/
		tarnning[4] = randomiser (1,6);}	
	
		
	for(int i = 0; i < 5;i++){
	
	cout << tarnning[i];}





	return 0;
}
