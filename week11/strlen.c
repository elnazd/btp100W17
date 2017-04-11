/*
Write a program that prompts the user to input a string, (whitespaces allowed) 
Add code to:
allocate memory for the string
Scanf the string from the user
pass the string to the strlen() function to measure the length of the string

int length(const char str[]);
*/

#include<stdio.h>
#include<string.h>
#define SIZE 30+1
int main()
{
	//allocate memory for the string
	//Scanf the string from the user
	char name[SIZE];
	printf("Name:");
	scanf("%[^\n]",name);
	
	printf("The length of the string is: %d\n",strlen(name));
	
}



