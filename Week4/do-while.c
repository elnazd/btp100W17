/*
Write a program to repeatedly input integers from the user.
The user must input ‘0’ to exit.

*/
#include<stdio.h>
int main()
{
	
	//step 1: prompt the user to input an integer
	//step 2: Read the integer
	// Repeat step 1 and 2 as long as the user has not entered 0 to exit.
	int input;
	do{
		
		printf("Please input an integer. Input 0 to exit.");
		scanf("%d", &input);
	
	}while(input!=0);
	
	return 0;
}




