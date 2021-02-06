//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
float input()
{
    float n; 
    scanf("%f",&n);
    return n;
}
float distance(float a1, float b1 ,float a2,float b2)
{
    float dis;
    dis = sqrt((a2-a1)*(a2-a1)+(b2-b1)*(b2-b1));
    return dis;
}

void output(float a,float b,float c,float d,float e)

{
    printf("The distance between (%f,%f) and (%f,%f) is %f\n",b,c,d,e,a);
}
int main()
{
    float c,a,a1,b,b1;
    printf("Enter the a coordinate:\n");
    a=input();
    printf("Enter the b coordinate:\n");
    b=input();
    printf("Enter the a1 coordinate:\n");
    a1=input();
    printf("Enter the b1 coordinate:\n");
    b1=input();
    c=distance(a,b,a1,b1);
    output(c,a,b,a1,b1);
    return 0;
}
