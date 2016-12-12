/*
 Write a function with the header
int postalCode(const char code[ ] )
that receives the address of a null-terminated string (code[ ]) and returns 1 if the code is a valid Canadian postal code and 0 otherwise.
A Canadian postal code consists of exactly 6 characters: the first, third and fifth are alphabetic, while the second, fourth and sixth are numeric.  Your function does not change the contents of code[ ].
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
#include<stdio.h>
#include<string.h>

int postalCode(const char code[ ] )
{
    int valid = 1;// Valid is 1: Representing the code is valid.
                  //When the postal code is invalid, we change valid to 0.
    
    
    //length
    int len = strlen(code);
    if(len==6)
    {
        for(int i=0; i<6 && valid;i++)
        {
            if(i%2 == 0)
                if(!(('a'<=code[i] && code[i]<='z') || ('A'<=code[i] && code[i]<='Z')))
                    valid = 0;
            if(i%2 == 1)
                if(!('0'<=code[i] && code[i]<='9'))
                    valid = 0;
        }
        
    }else
        valid =0;
        
    
    return valid;
}

int main()
{
    printf("%d\n", postalCode("M6P2T4"));
    printf("%d\n", postalCode("M6P.T4"));
    printf("%d\n", postalCode("M6P 2T4"));
}









