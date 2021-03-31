//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int compute (int n, int num)
{
  int total;
  printf ("enter the total numbers\n");
  scanf ("%d", &n);
  printf ("enter the numbers:");
  for (int c = 1; c <= n; c++)
    {
      scanf ("%d", &num);
      total = total + num;

    }
  return total;

}

void output (int total)
{
  printf ("the total is %d", total);

}

int main ()
{
  int n, num;
  int a = compute (n, num);
  output (a);
  return 0;
}


