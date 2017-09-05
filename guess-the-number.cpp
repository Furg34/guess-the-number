// guess-the-number.cpp : Defines the entry point for the console application.
//
#ifndef LINUX
#include "stdafx.h"
#endif

#ifdef LINUX
#include <stdlib.h>
#endif

#include <iostream>
#include <string>
using namespace std;

/*
This is a 2 player game where the goal is to guess a number between 1 and 100.

You can choose the number and have the computer guess or you can choose the number.

You may also play against another human if you choose.

The computer can be set to "Hard, Normal, or Easy"

Compete in a best of 5 series.

Toss a coin to see who goes first.
*/


int main()
{

	//Game Set-up

	string player1;
	string player2;
	int aiHum;

	cout << "Hello and welcome to another edition of Guess-THE-Number \n \n";
	cout << "Enter your name\n";
	cin >> player1;										//Player 1 Name
	cout << "Thank you " << player1 << ". Let's get started!\n \n";

	cout << "The game is simple. Select if you'd like to play against the computer or another human. \n 1 - Computer \n 2 - Human \n";
	cin >> aiHum;										//Play against computer(1) or human(2)

	if (aiHum == 1)										//If playing against computer
	{
		cout << "You have chosen to test yourself against artificial intelligence.\n";
		int difficulty;
		cout << "Select computer difficulty.\n 1 = Easy \n 2 = Normal \n 3 = Hard \n";
		cin >> difficulty;

		switch (difficulty)
		{
		case 1: cout << "Computer set to Easy\n";
			break;
		case 2: cout << "Computer set to Normal\n";
			break;
		case 3: cout << "Computer set to Hard\n";
			break;
		default: cout << "Computer difficulty not selected\n";
			break;
		}
	}
	else if (aiHum == 2)								//If playing against human
	{
		cout << "You've brought a friend!  What is their name?\n";
		cin >> player2;
		cout << "Let's welcome " << player2 << " to the game!\n";
	}
	else
	{
		cout << "You have not made a valid selection\n";
	}

	//The Game

	int selectedNumber;
	int guessedNumber;

	//Computer Generated Number
	
	//Player selects number to be guessed
	cout << "Please select a number";
	cin >> selectedNumber;



	system("pause");
    return 0;
}

