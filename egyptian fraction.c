#include<stdio.h>
struct fraction
{
	
	int num;
	int den;
};
typedef struct fraction fract;
struct efraction{
int n;
int deno[200];
fract sum;
};
typedef struct efraction efract;

int input()
{
int n;
printf("enter the number of total fractios:");
scanf("%d",&n);
return n;
}

void input1(efract *a)
{
printf("Enter the number of fraction\n");
scanf("%d",&a->n);
printf("enter the denominator:");
for (int i=0;i<a->n;i++)
scanf("%d",&a->deno[i]);
}

void input_n(efract a[],int n)
{
for (int i=0;i<n;i++)
input1(&a[i]);
}

int gcd(int a,int b)
{
a=a<b?a:b;
if(b%a==0)
return a;

for(int i=a/2;i>=2;i--)
{
if(a%i==0&&b%i==0)
return i;
}
return 1;
}

void compute(efract*a)
{
fract res;
res.num=0;
res.den=1;
int g;
for(int i=0;i<a->n;i++)
{
a->sum.num=(res.num*a->deno[i])+res.den;
a->sum.den=res.den*a->deno[i];
g=gcd(a->sum.num,a->sum.den);
a->sum.num=a->sum.num/g;
a->sum.den=a->sum.den/g;
res=a->sum;
}
}
void compute_n(efract a[],int n)
{
for(int i=0;i<n;i++)
compute(&a[i]);
}

void output(efract *a)
{
for(int i=0;i<(a->n)-1;i++)
printf("1/%d +",a->deno[i]);
printf("1/%d = %d/%d\n",a->deno[(a->n)-1],a->sum.num,a->sum.den);
}

void output_n(efract a[],int n)
{
for(int i=0;i<n;i++)
output(&a[i]);
}

int main()
{
int n;
efract a[100];
n=input();
input_n(a,n);
compute_n(a,n);
output_n(a,n);
return 0;
}

