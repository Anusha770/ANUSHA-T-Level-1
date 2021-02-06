//Write a program to add two user input numbers using 4 functions.
#include <stdio.h>
float input()
{
    float first; 
    printf("Enter a number\n");
    scanf("%f",&first);
    return first;
}

float compute(float first, float second)
{
    float s;
    s= first+second;
    return s;
}

void output(float first, float second, float z)
{
    printf(" the sum of %f and %f is %f\n",first,second,z);
}

int main()
{
    float a,b,c;
    a=input();
    b=input();
    c=compute(a,b);
    output(a,b,c);
    return 0;
}    
