/*
Write a program to define an array of five strings, called name. Then, your program displays the names.
Use the following names for initializing your array.
“Harry", "Jean", “John", “Bill", "Jim”
*/

#include<stdio.h>
int main()
{
	char name[5][10]  = {"Harry", "Jean", "John", "Bill", "Jim"};
	for(int i=0;i<5;i++)
		printf("%s\n",name[i]);
}
	
