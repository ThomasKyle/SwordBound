#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	char name[50];
	cout << "Hello Adventurer! What Is your name?" << endl;
	cin.getline(name, 50);
	cout << "you better move fast, " << name << ". The city is under seige!" << endl;

	return 0; 
}