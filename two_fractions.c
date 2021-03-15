//WAP to find the sum of two fractions.
#include <stdio.h>
struct point
{
  int n, d;
};

int
greatestcommondivisor (int a, int b)
{
  int gcd = 1, i;

  for (i = 1; i <= a && i <= b; i++)
    {
      if (a % i == 0 && b % i == 0)
	gcd = i;
    }
  return gcd;
}

struct point
compute (struct point a, struct point b)
{
  struct point sum;
  int gcd;
  sum.n = (a.n * b.d) + (b.n * a.d);
  sum.d = a.d * b.d;
  gcd = greatestcommondivisor (sum.n, sum.d);
  sum.d = (sum.d) / gcd;
  sum.n = (sum.n) / gcd;
  return sum;
}

struct point
input ()
{
  struct point n;
  printf ("numerator:");
  scanf ("%d", &n.n);
  printf ("denominator:");
  scanf ("%d", &n.d);
  return n;
}

void
out (struct point a, struct point b, struct point c)
{
  printf ("sum of %d/%d and %d/%d is %d/%d", a.n, a.d, b.n, b.d, c.n, c.d);
}

int
main ()
{
  struct point a, b, c;
  a = input ();
  b = input ();
  c = compute (a, b);
  out (a, b, c);
  return 0;
}

