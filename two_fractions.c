//WAP to find the sum of two fractions.
#include <stdio.h>
#include <math.h>


    struct point
    {
       int n,d;
    };
    
     struct point compute(struct point a,struct point b)
    {
    struct point sum;
    if(a.d==b.d)
    {
        sum.n=a.n+b.n;
        sum.d=a.d;
        
    }
    else
    {
        sum.n=(a.n*b.d)+(b.n*a.d);
        sum.d=a.d*b.d;
    }
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
     


    int main()
    {
        struct point a,b,c;
        a=input();
        b=input();
        c=compute(a,b);
       
        printf("sum=%d/%d",c.n,c.d);
        return 0;
    }
     
