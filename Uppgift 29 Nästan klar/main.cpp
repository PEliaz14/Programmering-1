#include <iostream>
#include <cstring>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	string thing, dryck, mat, land, stad, hogtid, fnamn, enamn, numb, farg;
	
	cout <<"Skriv ett foremal" <> endl;
	cin >> thing;
	
	cout <<"Skriv en dryck" << endl;
	cin >> dryck;
	
	cout <<"Matratt" << endl;
	cin >> mat;
	
	cout <<"Land" << endl;
	cin >> land;
	
	cout <<"Stad" << endl;
	cin >> stad;

	cout <<"Hogtid" << endl;
	cin >> hogtid;
	
	cout <<"Skriv ditt forsta namn" <<endl;
	cin >> fnamn;
	
	cout <<"Skriv ditt efternamn" <<endl;
	cin >> enamn;
	
	cout <<"Skriv ett nummer" <<endl;
	cin >> numb;

	cout <<"Skriv en farg" <<endl;
	cin >>farg;
	
	cout << fnamn << " "  << enamn << " vaknar upp på en strand nara havet." <<endl << "Hen kollar runt om kring och ser en stad med namnet " << stad << "d"
	


	return 0;
}
