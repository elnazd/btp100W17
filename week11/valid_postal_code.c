/*
Write a function with the header 

int postalCode(const char code[ ] )	

that receives the address of a null-terminated string (code[ ]) and returns 1 if the code is a valid Canadian postal code and 0 otherwise.  
A Canadian postal code consists of exactly 6 characters: the first, third and fifth are alphabetic, while the second, fourth and sixth are numeric.  Your function does not change the contents of code[ ].  
The following calls 
 printf("%d\n", postalCode("M6P2T4"));
 printf("%d\n", postalCode("M6P.T4"));
 printf("%d\n", postalCode("M6P 2T4"));	
display respectively: 
 1
 0
 0	
That is, the first code is valid, the second code is invalid because the fourth character is not numeric, and the third code is invalid because of the string contains 7 characters. 
*/
#include<string.h>
#include<stdio.h>

int postalCode(const char code[])
{
	int valid = 0,i; //assume the postal code is invalid
	
	//A Canadian postal code consists of exactly 6 characters: 
	//the first, third and fifth are alphabetic, while the second, fourth and sixth are numeric. 

	if  ((strlen(code) == 6)&&
        (code[0] > 'A' && code[0] <'z') &&
        (code[2] > 'A' && code[2] <'z') &&
        (code[4] > 'A' && code[4] <'z') &&
		(code[1] > '0' && code[1] <'9') &&
		(code[3] > '0' && code[3] <'9') &&
		(code[5] > '0' && code[5] <'9'))
		
			valid  = 1;
	
	
	return valid;
}

int main()
{
    printf("%d\n", postalCode("M6P2T4"));
    printf("%d\n", postalCode("M6P.T4"));
    printf("%d\n", postalCode("M6P 2T4"));
    
}







