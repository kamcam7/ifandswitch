#pragma once
#include<iostream>
#include<string.h>
#include<cctype>

using namespace std;

void static schedule(int day) {

	enum daysofweek {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

	daysofweek curday;

	curday = daysofweek(day);

	switch (curday)
	{
	case 0:
		cout << "Monday is a workday.\n";
		break;
	case 1:
		cout << "Tuesday is a workday.\n";
		break;
	case 2:
		cout << "Wednesday is a workday.\n";
		break;
	case 3:
		cout << "Thusday is a workday.\n";
		break;
	case 4:
		cout << "Friday is a workday.\n";
		break;
	case 5:
		cout << "Saturday is not a workday.\n";
		break;
	case 6:
		cout << "Sunday is not a workday.\n";
		break;
	default:
		cout << "NOT A VALID DAY PICKED.\n";
	}
}