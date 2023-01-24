#pragma once
#include<iostream>
#include<string.h>
#include<cctype>

using namespace std;

void static schedule(string day) {
	string curday = day;
	int daynum = 0;

	//Iterates through each letter converting it into uppercase.
	for (int i = 0; i < curday.length(); i++)
	{
		curday[i] = toupper(curday[i]);
	}

	cout << "today is " << curday << "." << endl;

	if (curday == "MONDAY" || curday == "TUESDAY" || curday == "WEDNESDAY" || curday == "THURSDAY" || curday == "FRIDAY")
	{
		daynum = 1;
	}
	else if (curday == "SATURDAY" || curday == "SUNDAY")
	{
		daynum = 6;
	}
	else
	{
		cout << "Whatever \"" << curday << "\" is, is not a weekday.\n TERMINATING PROGRAM.\n";
		daynum = 0;
	
	}

	switch (daynum)
	{
	case 1:
		cout << curday << " is a workday.\n";
		break;
	case 2:
		cout << curday << " is a workday.\n";
		break;
	case 3:
		cout << curday << " is a workday.\n";
		break;
	case 4:
		cout << curday << " is a workday.\n";
		break;
	case 5:
		cout << curday << " is a workday.\n";
		break;
	case 6:
		cout << curday << " is weekend.\n";
		break;
	case 7:
		cout << curday << " is weekend.\n";
		break;
	default:
		cout << "NOT A VALID DAY PICKED.\n";
	}
}