#pragma once 
#include<iostream>

void static numChecker(int argnumber) {
	int mynum = argnumber;

	if (mynum > 7)
	{
		printf("mynum is greater than 7\n");
	}
	else if (mynum == 7)
	{
		printf("mynum is equal to 7");
	}
	else
	{
		printf("mynum is less than 7\n");
	}

	if (mynum > 3)
	{
		printf("mynum is greater than 3\n");
	}

}