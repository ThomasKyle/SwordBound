#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std; 

int main()
{
	int choiceOne_Path;
	 system("color 1"); 
	 
	char name[50];
	cout << "What is your name Adveturer?" << endl;
	cin.getline(name, 50);
	cout << "You better move fast, " << name << ". The city is under siege!" << endl;
	cout << "\n----------------------------Press any key to continue----------------" << endl;
	_getch(); 

	system("cls");
	cout << "What do you do?" << endl;
	cout << "\t >> Enter '1' to help the Guards." << endl;
	cout << "\t >> Enter '2' to run out of the city." << endl;
retry:
	cout << "\nEnter your choice:" << endl;
	cin >> choiceOne_Path;

	if (choiceOne_Path == 1)
	{
		cout << "\n ------------------- Chapter One: Escape -------------" << endl;
		cout << "You run to the guards." << endl;
		cout << "You: I'm here to help!" << endl;
		cout << " Guard Captin: Your name is " << name << ", Corret?" << endl;

	
	}
	else if (choiceOne_Path == 2)
	{
		system("cls");
		cout << "\n ------------------- Chapter One: Escape -------------" << endl;
		cout << "You run through the city and see the enemy soldiers kicking stalls down, killing the guards." << endl;

		goto run; 
	}

	else
	{
		cout << "You're doing this wrong!" << name << " Please choose eihter '1' or '2'." << endl;
		goto retry;
	}
	
	cout << "\n----------------------------Press any key to continue----------------" << endl;

	_getch();

	system("cls");
	cout << "You help the Guards create a defense ring around the castle." << endl;
	cout << "Guard Captain: You should go in the castle, " << name << endl;
	cout << "What do you do?" << endl;
	cout << ">> '1' Go in the castle" << endl;
	cout << ">> '2' Run out of the city" << endl;
retry1: 
	cout << "\nEnter your choice" << endl;
		cin >> choiceOne_Path;

		if (choiceOne_Path == 1)
		{
			system("cls");
			cout << "You run into the castle to hide with some other citizens" << endl;
			cout << "The battle ends and the guards enter" << endl;
			cout << "The Guard Captain finds you" << endl;
			cout << "Thank you " << name << "! You helped the city!" << endl;
			cout << "\n----------------------------The End~----------------" << endl;
			cout << "\n" << endl;
			cout << ">> '1' Credits" << endl; 
			cout << ">> '2' End Game" << endl;
		retry12:
			cout << "What do you do?" << endl;
			cin >> choiceOne_Path; 

			if (choiceOne_Path == 1)
			{
				goto credits;
			}

			else if (choiceOne_Path == 2)
			{
				cout << "Too bad you go to credits" << endl; 
				goto credits;
			}

			else
			{
				cout << "You're doing this wrong " << name << "! Choose either '1' or '2'" << endl;
				goto retry12; 
			}

			_getch();
			return 0;
		}

		else if (choiceOne_Path == 2)
		{
			goto run;
		}

		else
		{
			cout << "You're doing this wrong " << name << "! Choose either '1' or '2'" << endl;
				goto retry1;
		}

		_getch();

run:
	system("cls");
	cout << "You made it to the gate. You look around and see a woman being attacked. She screams for your help." << endl;
	cout << "What do you do?" << endl;
	cout << ">> '1' Help the woman" << endl;
	cout << ">> '2' Run through the gate" << endl;
	retry2:
	cout << "\nEnter your choice:" << endl;
	cin >> choiceOne_Path;

	if (choiceOne_Path == 1)
	{
		system("cls"); 
		cout << "You help the woman and kill the enemy soldier" << endl;
		cout << "Woman: Oh thank you kind Hero! What is your name?" << endl;
		cout << "You: I'm " << name << ". Pleased to meet you!" << endl;
		cout << " Woman: Please help me Escape!" << endl;
		cout << " What do you do?" << endl;
		cout << ">> '1' Help the woman" << endl;
		cout << ">> '2' Leave her" << endl;
		retry3: 
		cout << ">> Enter your choice:" << endl; 
	
		cin >> choiceOne_Path;
		
		if (choiceOne_Path == 1)
		{
			goto chapter2; 
		}
		
		else if (choiceOne_Path == 2)
		{
			goto left; 
		}

		else
		{
			cout << "You're doing this wrong " << name << "! Choose either '1' or '2'" << endl;
			goto retry3;
		}
	}


	else if (choiceOne_Path == 2)
	{
	
		left: 

		system("cls");
		cout << "You run through the gate leaveing the woman to die" << endl;
		cout << "You can hear the woman's screams as she is killed" << endl;
		cout << "\n----------------------------Press any key to continue----------------" << endl;

		_getch();

		goto chapter2alone; 
	}

	else
	{
		cout << "You're doing this wrong " << name << "! Choose either '1' or '2'" << endl;
		goto retry3; 
	}

chapter2:
	
	system("cls");
		cout << "\n ------------------- Chapter Two: Run to safety -------------" << endl;
		cout << "Woman: My name is Arya. thank you for saving me " << name << "!" << endl;
		cout << "You: No problem!" << endl;
		cout << "Woman: Where should we go? To the nearby villiage or the Capital" << endl;
		cout << ">> 1 Nearby villiage" << endl;
		cout << ">> 2 The Captial" << endl;
		cout << " What do you do?" << endl;
	retry4: 
		cout << ">> Enter your choice:" << endl;
		cin >> choiceOne_Path;

		_getch();

		if (choiceOne_Path == 1)
		{
			system("cls");
			cout << "You: Let's head to the villiage!" << endl;
			cout << "Woman: Okay, I'll lead th way!" << endl;
			goto village;
		}

		else if (choiceOne_Path == 2)
		{
			system("cls");
			cout << "Let's goto the Capital!" << endl;
			cout << "Woman: Okay, lead the way!" << endl;
			goto captial;
		}
	
		else
		{
			cout << "You're doing this wrong" << name << "! Choose either '1' or '2'" << endl;
			goto retry4;
		}


		{
		chapter2alone:
			system("cls");
			cout << "\n ------------------- Chapter Two: Run -------------" << endl;
			cout << "You're alone on the road. With nobody to guide you, you get lost" << endl;
			cout << "with out a guide you are killed " << endl;
			cout << "\n ------------------- The End~ -------------" << endl;
			cout << "\n" << endl;
			cout << ">> '1' Credits" << endl;
			cout << ">> '2' End Game" << endl;
		retry13:
			cout << "What do you do?" << endl;
			cin >> choiceOne_Path;

				if (choiceOne_Path == 1)
				{
					goto credits;
				}

				else if (choiceOne_Path == 2)
				{
					cout << "Too bad you goto Credits!" << endl;
				}

				else
				{
					cout << "You're doing this wrong " << name << "! Choose either '1' or '2'" << endl;
					goto retry13;
				}
					
			_getch();

			return 0;
		} 

		{
		village:

			system("cls");
			cout << "\n ------------------- Chapter Three: Village -------------" << endl;
			cout << "Arya: We made it to the Nearby villiage! Riverun!" << endl;
			cout << "You: Thank you for your help!" << endl;
			cout << "Arya: Should we stay and rest or continue on to the capital?" << endl;
			cout << ">> 1 Stay the night" << endl;
			cout << ">> 2 Goto the Captial" << endl;
			cout << "What do you do?" << endl;
		retry5: 
			cout << "Enter your choice" << endl;
			cin >> choiceOne_Path; 

			if (choiceOne_Path == 1)
			{
				system("cls"); 
				cout << "You: Let's stay the night." << endl;
				cout << "Arya: Okay, There's a taven we can stay at called the Winking Skeever." << endl;
				cout << "You: and Arya Stay the night at the tavern." << endl;
				cout << "You: wake up in the middle of the night, hearing fighting." << endl;
				cout << "It's the barbarians that attacked the previous city." << endl;
				cout << "You: wake up Arya." << endl; 
				cout << "Arya: Should we hide or run?" << endl;
				cout << "What do you do?" << endl;
				cout << ">> 1 Hide" << endl;
				cout << ">> 2 Run" << endl;
				retry6:
				cout << "Enter your choice" << endl;
				cin >> choiceOne_Path;

				if (choiceOne_Path == 1)
				{
					system("cls");
					cout << "You and Arya hide in the basement of the tavern" << endl;
					cout << "behind some barrels. You hear foot steps come down into the basement." << endl;
					cout << "Bandit 1: I thought I saw two people dart down here!" << endl;
					cout << "Bandit 2: That barmaid must've hit you pretty hard!" << endl;
					cout << "Bandit 2: anyway let's go we have to find, " << name << " or the boss will have our hides!" << endl;
					cout << "You and Arya wait for what seems like enternity." << endl;
					cout << "Arya: Should we continue to wait?" << endl;
					cout << "What do you do?" << endl;
					cout << ">> '1' Wait longer" << endl;
					cout << ">> '2' Get out of your hiding spot" << endl;
				retry7:
					cout << "Enter your choice:" << endl;
					cin >> choiceOne_Path;

					if (choiceOne_Path == 1)
					{
						system("cls");
						cout << "You and Arya wait even longer" << endl;
						cout << "You hear people come down to the basement." << endl;
						cout << "Guard: This is the captial Guard is any surviors here?" << endl;
						cout << "You peek out and see the Guard" << endl;
						cout << "Arya: We're here!" << endl;
						cout << "You and Arya tell your story and they take you and the remaing surviors to" << endl;
						cout << "the Captial" << endl;
						goto captial;
					}

					else if (choiceOne_Path == 2)
					{
						system("cls");
						cout << "You: Lets get out." << endl;
						cout << "Arya: Okay." << endl;
						cout << "You and Arya get out of your hiding spot and see the town in ruins" << endl;
						cout << "The guards round you and the remaing surviors and goto the Capital" << endl;
						goto captial; 
					}

					else
					{
						cout << "You're doing this wrong" << name << "! Choose either '1' or '2'" << endl;
						goto retry7; 
					}
				}

				else if (choiceOne_Path == 2)
				{
					goto run2;
				}
			}

			else if (choiceOne_Path == 2)
			{
				goto captial; 
			}

			else
			{
				cout << "You're doing this wrong" << name << "! Choose either '1' or '2'" << endl; 
				goto retry6; 
			}
		}

		{
		captial:

			system("cls");
			cout << "Woman: We made it to the captial! We're safe!" << endl;
			cout << "You: Thank you for your help!" << endl;
			cout << "You made it safely to the capital and live the rest of you life in peace." << endl;
			cout << "\n ------------------- The End~ -------------" << endl;
			cout << "/n" << endl;
			cout << ">> '1' Credits" << endl;
			cout << ">> '2' End game" << endl;
			retry20:
			cout << "Enter your choice" << endl;
			cin >> choiceOne_Path;

			if (choiceOne_Path == 1)
			{
				goto credits; 
			}

			else if (choiceOne_Path == 2)
			{
				cout << "Too bad! you look at credits!" << endl;
				goto credits; 
			}

			else
			{
				cout << "You're doing this wrong " << name << "! Choose either '1' or '2'" << endl;
				goto retry20;
			}

			_getch();

			return 0;
		}

	run2:
		{
			system("cls");
			cout << "You: lets run!" << endl;
			cout << "Arya: Okay!" << endl;
			cout << "You and Arya run" << endl;
			cout << "Bandit 1: Hey! it's " << name << ", Get him!" << endl;
			cout << "A few bandits chase you and Arya" << endl;
			cout << "You see a two spots of escape Hide in a group of rocks or the river" << endl;
			cout << "What do you do?" << endl;
			cout << ">> '1' Hide in the rocks" << endl;
			cout << ">> '2' Jump in the river" << endl;
		retry8:
			cout << "Enter your choice" << endl;
			cin >> choiceOne_Path;

			if (choiceOne_Path == 1)
			{
				system("cls");
				cout << "You and Arya hide in the group of rocks" << endl;
				cout << "The bandits find you and kill you both" << endl;
				cout << "\n ------------------- The End~ -------------" << endl;
				cout << "\n" << endl;
				cout << ">> '1' Credits" << endl;
				cout << ">> '2' End Game" << endl;
				retry11:
				cout << "What do you?" << endl;
				cin >> choiceOne_Path;

				if (choiceOne_Path == 1)
				{
					goto credits;
				}

				else if (choiceOne_Path == 2)
				{
					cout << "Too bad! you goto Credits" << endl;
					goto credits;
				}

				else
				{
					cout << "You're doing this wrong " << name << "! Choose either '1' or '2'" << endl;
					goto retry11;
				}

				_getch();
				return 0;
			}

			else if (choiceOne_Path == 2)
			{
				system("cls");
				cout << "You and Arya jump in the fast moving river" << endl;
				cout << "Bandit 2: Should we go after them?" << endl;
				cout << "Bandit 1: No, the river's rapids will kill them" << endl;
				cout << "You and Arya are pushed downstream barely making it to the shore" << endl;
				cout << "Arya: There's a trail; do we follow it?" << endl;
				cout << "What do you do?" << endl;
				cout << ">> '1' Follow the trail" << endl;
				cout << ">> '2' Go off the trail" << endl;
			retry9:
				cout << "Enter your choice:" << endl;
				cin >> choiceOne_Path;

				if (choiceOne_Path == 1)
				{
					goto trail;
				}

				else if (choiceOne_Path == 2)
				{
					goto offtrail;
				}

				else
				{
					cout << "You're doing this wrong" << name << "! Choose either '1' or '2'" << endl;
					goto retry9; 
				}
			}

			else
			{
				cout << "You're doing this wrong" << name << "! Choose either '1' or '2'" << endl;
				goto retry8; 
			}

			{
			trail:
				
				system("cls");
				cout << "You and Arya walk on the trail, finding a road sign showing you which direction the Capital is" << endl;
				cout << "Arya: Off the Captial we go!" << endl;

				goto captial2;
			}

			{
			offtrail:

				system("cls");
				cout << "You and Ayra go off the trail. You both end up killed by wolves." << endl;
				cout << "\n ------------------- The End~ -------------" << endl;

				_getch();
				return 0; 
			}

			{
			captial2:
				
				system("cls");
				cout << "\n ------------------- Chapter Four: Rest of your life -------------" << endl;
				cout << "You and Arya walk to the Captial" << endl;
				cout << "Arya: We've been through alot haven't we?" << endl;
				cout << "You: Yes we have." << endl;
				cout << "Arya: I like you, do you like me?" << endl;
				cout << "What do you say?" << endl;
				cout << ">> '1' Yes I do!" << endl;
				cout << ">> '2' No, sorry." << endl;
			retry10:
				cout << "Enter your choice:" << endl;
				cin >> choiceOne_Path;

				if (choiceOne_Path == 1)
				{
					system("cls");
					cout << "You: Yes I do!" << endl;
					cout << "-Arya smiles, hugging you- Arya: Oh I love you" << name << "!" << endl;
					cout << "You and Arya live happily ever after" << endl;
					cout << "\n ------------------- The End~ -------------" << endl;
					cout << "\n" << endl;
					cout << ">> '1' Credits" << endl;
					cout << ">> '2' End Game" << endl;
				retry14:
					cout << "What do you do?" << endl;
					cin >> choiceOne_Path;

					if (choiceOne_Path == 1)
					{
						goto credits;
					}

					else if (choiceOne_Path == 2)
					{
						cout << "Too bad you goto Credits" << endl;
						goto credits;
					}

					else
					{
						cout << "You're doing this wrong " << name << "! Choose either '1' or '2'" << endl;
						goto retry14;
					}

					_getch();
					return 0;
				}

				else if (choiceOne_Path == 2)
				{
					system("cls");
					cout << "You: No, sorry." << endl;
					cout << "Arya: Okay, I'm sorry." << endl;
					cout << "You live the rest of your life a sad old man" << endl;
					cout << "\n ------------------- The End~ -------------" << endl;
					cout << "\n" << endl;
					cout << ">> '1' Credits" << endl;
					cout << ">> '2' End Game" << endl;
				retry22:
					cout << "What do you do?" << endl;
					cin >> choiceOne_Path;

					if (choiceOne_Path == 1)
					{
						goto credits; 
					}

					else if (choiceOne_Path == 2)
					{
						cout << "Too bad you goto credits" << endl;
						goto credits; 
					}

					else
					{
						cout << "You're doing this wrong " << name << "! Choose either '1' or '2'" << endl;
						goto retry22; 

					}



					_getch();
					return 0;
				}

				else
				{
					cout << "You're doing this wrong " << name << "! Choose either '1' or '2'" << endl;
					goto retry10; 
				}
			}

			{
			credits:
				system("cls");
				cout << "Lead Designer: Thomas Kyle" << endl;
				cout << "Lead Developer: Thomas Kyle" << endl;
				cout << "Lead Storyboard Artist: Thomas Kyle" << endl;
				cout << "Lead Writer: Thomas Kyle" << endl;
				cout << "Lead Excutive Producer: Thomas Kyle" << endl;
				cout << "Cheif Excutive Officer: Thomas Kyle" << endl;
				cout << "President: Thomas Kyle" << endl;
				cout << "Copy righted by ThomasKyle.co" << endl;
				cout << "\n----------------------------Press any key to Close game----------------" << endl;

				_getch();
				return 0; 
			}


		}
	return 0;
}
