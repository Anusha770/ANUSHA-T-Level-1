//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int main()
{
  int x,n,total;
  printf("enter the total numbers\n");
  scanf("%d",&x);
  total=0;
  for(n=0;n<=x;n++)
  total=total+n;
  printf("the sum of %d numbers is %d",x,total);
  return 0;
}
