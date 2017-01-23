/*
Write a C program that prompts the user to enter the amount of cash in their pockets, accepts the user's input, and displays the amount in the format shown below.  If the user has entered 4.52, your program displays.

How much money do you have in your pockets ? 4.52 
The amount of money in your pockets is $4.52 
*/

/*
Step 0: Starting the program, defining variables
Step 1: prompts the user to enter the amount of cash in their pockets
Step 2: accepts the user's input
Step 3: displays the amount in the format 
Step 4: return 0

*/
#include<stdio.h>
int main()
{
	//Step 0:
	float price;
	
	//step1:
	printf("How much money do you have in your pockets ?");
	//step 2:
	scanf("%f",&price);
	//step3:
	printf("The amount of money in your pockets is $%.2f\n",price);
	return 0;
}
