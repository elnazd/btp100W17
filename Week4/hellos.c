/*Write a program to print 100 ‘Hello World!’ on the screen. Each ‘Hello World!’ must start from a new line.
*/
#include<stdio.h>
int main()
{
	//Step 1: Define and initialize a counter
	
	int counter = 0;
	
	//Step 2: Check the condition. If the condition is true, repeat the action.
	while(counter < 100)
	{
		printf("Hello world!\n");
		counter++;
		
	}
	
	
	return 0;
	
}