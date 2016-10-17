//positives.h
//The function prints positive integers from 1 to 100
//The function returns nothing
//The function takes no parameters
#include<stdio.h>
#define MAX 100

void displayPositives()
{
	int i;
	for(i=1;i<=MAX;i++)
		printf("%d ",i);
}
