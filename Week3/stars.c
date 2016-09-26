//Write a program to print  1000 stars onto the display.
#include<stdio.h>
int main()
{
	int counter=0;//Initialize a counter
	
	while(counter<1000) //Check condition(s)
	{
		printf("*\n"); //Do actions
		counter++; //Increment counter	(counter = counter + 1)
	}

	return 0;
}
