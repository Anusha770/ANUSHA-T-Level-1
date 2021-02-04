//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main()
{
 float h,b,d,v;
 printf("Volume of tromboloid is given by : 1/3 of ((h x d x b) + ( d divided by b))\n");
 printf("Enter the values of height,breadth,depth");
 scanf("%f%f%f",&h,&b,&d);
 v=((h*b*d)+(d/b))/3;
 printf("volume of tromboloid=%f",v);
 return 0;
}
