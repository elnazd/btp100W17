/*Write a function to print “Hello world!”. 
Call that function from the main program.*/
#include<stdio.h>
void hello();//function prototype

int main()
{
	//Calling the function
	hello();

	return  0;
}
//This function displays a "hello world" message to users.
//This function returns nothing.
//This function takes no parameters.
void hello()
{
	printf("Hello world!\n");
}
