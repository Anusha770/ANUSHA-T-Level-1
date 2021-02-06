//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int main()
{
   int n,num,total,c;
   total=0;
   printf("enter the total numbers\n");
   scanf("%d",&n);
   printf("enter the numbers:");
   for(c=1;c<=n;c++)
    {
       scanf("%d",&num);
       total=total+num:
     }
    printf("the total sum of %d numbers is %d",n,total);
    return 0;
}

