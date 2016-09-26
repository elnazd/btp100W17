/*Write a program to prompt the user to input an integer. 
Your program should specify if the input value is an even or an odd number. Then, print a suitable message.
An even number is divisible by 2. An odd number is not divisible by 2. 
*/
#include<stdio.h>
int main()
{
	int number,remainder;
	printf("Please input an integer");
	scanf("%d",&number);
	//if the number is divisible by 2:
	remainder = number % 2;
	if(remainder == 0)
		printf("The number is even!\n");
	else
		printf("The number is odd!\n");
	

	return 0;
}
