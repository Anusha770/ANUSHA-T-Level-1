//Write a program to add two user input numbers using one function.
#include<stdio.h>
int main()
{
  int a, b,s;
  printf("Enter the two numbers:");
  scanf("%d%d",&a,&b);
  s=a+b;
  printf("sum of %d and %d is %d",a,b,s);
  return 0;
}
