/*
Write a program that prompts the user to input a string, (whitespaces allowed) 
Add code to:
allocate memory for the string
Scanf the string from the user
pass the string to the length() function
in the length() function, count the number of characters in the string.
Pass the length of the string to the main function and display it.

int length(const char str[]);
*/

#include<stdio.h>
#define SIZE 30+1
int length(const char str[]);

int main()
{
	//allocate memory for the string
	//Scanf the string from the user
	char name[SIZE];
	printf("Name:");
	scanf("%[^\n]",name);
	
	printf("The length of the string is: %d\n",length(name));
	
}
int length(const char str[])
{
	int len = 0,i; //Represents the length of the string
	for(i = 0;str[i]!='\0';i++)
		len++;
	
	return len;
}


