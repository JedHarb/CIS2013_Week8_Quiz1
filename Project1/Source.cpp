#include<iostream>
using namespace std;

void getQuarters(int i)
{
	int numberOfQuarters = i / 25;
	cout << numberOfQuarters << " quarters, ";
}

void getDimes(int i)
{
	int numberOfQuarters = i / 10;
	cout << numberOfQuarters << " dimes, ";
}

void getNickels(int i)
{
	int numberOfQuarters = i / 5;
	cout << numberOfQuarters << " nickles, and ";
}

void getPennies(int i)
{
	int numberOfQuarters = i;
	cout << numberOfQuarters << " pennies.";
}

int main(){

	char play_again = 'y';
	while (play_again == 'y')
	{

		int numberOfCents = 0;
		int quartersMod = 0;
		int dimesMod = 0;
		int nickelsMod = 0;


		cout << "How many cents are we talking?" << endl;
		cin >> numberOfCents;
		cout << "The minimum amount of change needed to have " << numberOfCents << " cents is ";
		getQuarters(numberOfCents);
		quartersMod = numberOfCents % 25;
		getDimes(quartersMod);
		dimesMod = quartersMod % 10;
		getNickels(dimesMod);
		nickelsMod = dimesMod % 5;
		getPennies(nickelsMod);


		// ask to restart
		cout << endl << "Play again? (Type y for yes.) ";
		cin >> play_again;
		cout << endl;
	}

	return 0;
}