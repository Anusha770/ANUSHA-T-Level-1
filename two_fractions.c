//WAP to find the sum of two fractions.
#include <stdio.h>
#include <math.h>


    struct point
    {
       int n,d;
    };
    
    int g(int a , int b)
    {
    int gcd=1,i=1;
   
    while (i<=a&&i<=b)
    {
    if(a%i==0&&b%i==0)
    gcd=i;
    i++;
    }
    return gcd;
    }
     struct point compute(struct point a,struct point b)
    {
    struct point sum;
        sum.n=(a.n*b.d)+(b.n*a.d);
        sum.d=a.d*b.d;
        int gcd=g(sum.n,sum.d);
        sum.d=(sum.d)/gcd;
        sum.n=(sum.n)/gcd;
    return sum;
    }
    struct point input()
    {
        struct point n;
        printf("numerator:");
        scanf("%d",&n.n);
        printf("denominator:");
        scanf("%d",&n.d);
        return n;
    }
     
 void out(struct point c)
    {
        printf("sum=%d/%d",c.n,c.d);
    }


    int main()
    {
        struct point a,b,c;
        a=input();
        b=input();
        c=compute(a,b);
       
        out(c);
        return 0;
    }
