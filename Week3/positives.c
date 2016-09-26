/*Write a program to print positive numbers from 1 to 100 on the screen:
0,1,2,…,100.
*/
#include<stdio.h>
int main()
{
	int counter = 0;
	while(counter <= 100)
	{
		printf("%d , ",counter);
		counter = counter + 1; //counter++;
	}

	return 0;

}
