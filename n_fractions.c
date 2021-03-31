//WAP to find the sum of n fractions.
#include <stdio.h>
struct fraction
{
  int n, d;
};

int gcd(int a, int b)
{
    int i,gcd=1,temp;
    if( a < b) 
    {
          temp = a;
          a=b;
          b=temp;
    }
    if ( a % b == 0) 
    {
       return b;
     }
 
    for ( i = b/2; i >=2 ; i--)
    {
        if( a%i == 0 && b%i==0)
	return i;
    }
    return gcd;
}
struct fraction compute (struct fraction a, struct fraction b)
{
  struct fraction sum;
  int GCD;
  sum.n = (a.n * b.d) + (b.n * a.d);
  sum.d = a.d * b.d;
  GCD= gcd(sum.n, sum.d);
  sum.d = (sum.d) / GCD;
  sum.n = (sum.n) / GCD;
  return sum;
}
struct fraction compute_n(struct fraction a[], int n)
{
    struct fraction res;
    res.n = 0;
    res.d = 1;
    int i;
    for(i=0;i<n; i++)
    {
        res = compute(a[i],res);
    }
    return res;
}

struct fraction input ()
{
  struct fraction n;
  printf ("numerator:");
  scanf ("%d", &n.n);
  printf ("denominator:");
  scanf ("%d", &n.d);
  return n;
}
int value_n()
{
    int n;
    printf("Enter the number of fractions: \n");
    scanf("%d",&n);
    return n;
}
void input_n(struct fraction a[],int n)
{
    printf("Enter the values of the fraction\n");
    
    for(int i=0; i<n; i++)
    {
         a[i] = input();
    }
    
}

void output(struct fraction a[], struct fraction res, int n)
{
    printf("The sum of ");
    for(int i=0; i<n; i++)
    {
        if(i<n-1)
        printf("%d/%d + ", a[i].n,a[i].d);
        else
        printf("%d/%d", a[i].n,a[i].d);
    }
    printf(" is %d/%d ", res.n, res.d);
}

int main()
{
    struct fraction a[100],res;
    int n=value_n();
    input_n(a,n);
    res=compute_n(a,n);
    output(a,res,n);
    return 0;
}

