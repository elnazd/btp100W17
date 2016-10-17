/*
Write a program that will ask the user for a value from 1 to 12.  The program will then print the multiplication tables for that value and 1 to 100.  You do not need to error check the input

Sample run (NOTE, this is just an example.  Your code must work for any valid input):

Please enter a value (1 to 12): 3
Multiplication table for 3
==========================
3 * 1 = 3
3 * 2 = 6
3 * 3 = 9
3 * 4 = 12
3 * 5 = 15
3 * 6 = 18
...lots of lines later (this line is not part of output)
3 * 99 = 297
3 * 100 = 300

*/
#include<stdio.h>
int main()
{
	int number;
	printf("Please enter a value (1 to 12):");
	scanf("%d",&number);
    
    printf("Multiplication table for %d\n",number);
    printf("==========================\n");
	
	for(int i=0;i<10;i++)
        printf("%d * %d = %d\n", number,i+1,number*(i+1));
    
    return 0;


}


