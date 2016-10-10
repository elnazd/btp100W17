#include <stdio.h>
#define NUMBER_COURSES 10

struct Student{
    int number;
    float grades[NUMBER_COURSES];
    
};


int main()
{
    struct Student harry;//Creating an object of structure Student
    //initialize harry with the following information:
    //number=123456
    //grades={45,89,90.5}
    
    harry.number=123456;
    harry.grades[0]=45;
    harry.grades[1]=89;
    harry.grades[2]=90.5;
    
    struct Student mary;
    mary.number=436789;
    mary.grades[0]=78.5;
    
    
    return 0;
    
    
    
}


