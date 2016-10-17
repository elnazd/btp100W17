/*Write a program to input a person's name and displays it.*/
#include<stdio.h>
#define MAX_NAME_LENGTH 30

int main()
{
	char name[MAX_NAME_LENGTH+1];
	printf("Please input your name:");
	scanf("%s",name);//harry
	
	printf("Your name is: %s",name);
    
    return 0;

}
