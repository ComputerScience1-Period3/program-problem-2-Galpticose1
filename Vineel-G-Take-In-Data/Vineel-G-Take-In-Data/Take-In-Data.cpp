/*
Vineel Gajjala 9/27/2017 3rd Period
Take_In_Data
In this assignment we will utilize the _kbhit and _getch to take in infortmation and then give it back to the user
*/

#include <iostream>
#include <conio.h> 

using namespace std;

void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

//MAIN
void main() {
	int Number_clases;
	char Favorite_Letter;
	int Bottles_Flipped_In_A_Row;
	bool Fidget_Spinner;
	double Time_Mile_Run_Seconds;
	
	int Calc_1, Calc_2, Calc_3, Calc_4, Calc_5;

	//User Queries
	cout << "How many Classes are you in (Within Your School)";
		cin >> Number_clases;
	cout << "What is Your Favorite Letter (Of the English Alphabet)";
		cin >> Favorite_Letter;
	cout << "How any times have you flipped a water bottle and had it land in a row (As a Whole Number)";
		cin >> Bottles_Flipped_In_A_Row;
	cout << " Do you own a Fidget Spinner? (1 is True 0 Is False)";
		cin >> Fidget_Spinner;
	cout << "How long does it take you to run a mile ( In Minutes)";
		cin >> Time_Mile_Run_Seconds;


	cout << "Enter a whole number"  ;
		cin >> Calc_1;
	cout << "Enter a whole number"  ;
		cin >> Calc_2;
	cout << "Enter a whole number"  ;
		cin >> Calc_3;
	cout << "Enter a whole number"  ;
		cin >> Calc_4;
	cout << "Enter a whole number"  ;
		cin >> Calc_5;

	//Give Back Information
		cout << "You are in " << Number_clases << " classes" << endl;
		cout << " Your favorite Letter is " << Favorite_Letter << endl;
		cout << "You have Flipped a Water Bottle " << Bottles_Flipped_In_A_Row << " times in a row" << endl;
		cout << boolalpha << " It is " << Fidget_Spinner << " that you own a fidget spinner" << endl;
		cout << "It takes you " << Time_Mile_Run_Seconds << " minutes to run a mile" << endl;
		pause();

}
