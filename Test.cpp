#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{

	int choiceOne_Path;
	system("color 1");


	menu: 

	system("cls");
	cout << "welcome to SwordBound!tm" << endl;
	cout << ">> 1 Play game" << endl;
	cout << ">> 2 Credits" << endl;
retry0:
	cout << "\nEnter your choice" << endl;
	cin >> choiceOne_Path;

	if (choiceOne_Path == 1)
	{
		goto game;
	}

	else if (choiceOne_Path == 2)
	{
		system("cls");
		cout << "Lead Developer: Thomas Kyle" << endl;
		cout << "Lead Programmer: Thomas Kyle" << endl;
		cout << "Lead Storyboard Artist: Thomas Kyle" << endl;
		cout << "Lead Designer: Thomas Kyle" << endl;
		cout << "All rights are Copied righted by ThomasKyle.co" << endl;
		cout << "All rights are Trade Marked by ThomasKyle.co" << endl;
		cout << "\n----------------------------Press any key to continue----------------" << endl;
	}

	else
	{
		cout << "You're doing this wrong! Choose either '1' or '2'" << endl;
		goto retry0; 
	}

	_getch();
	goto menu;

game:
	return 0;

}