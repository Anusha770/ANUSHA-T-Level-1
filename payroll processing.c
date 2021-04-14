#include<stdio.h>
#include<string.h>
struct timecard
{
	char ename[50];
	float mins;
};
typedef struct timecard tc ;
struct Employee
{
	char name[100];
	float Hwage;
	float hours;
	float grosspay;
};
typedef struct Employee employee;



void input(employee *a)
{
	printf("Employee name and hourly wage:");
	scanf("%s%f",a->name,&a->Hwage);
	
}

void input_n(int n,employee e[])
{
	for(int i=0;i<n;i++)
		input(&e[i]);
}

void input_tc(int m,tc t[]){
	for(int i=0;i<m;i++)
	{
		printf("enter name of employee and minutes worked:");
		scanf("%s%f",t[i].ename,&t[i].mins);
		
	}
}

float compute(employee *a,int m,tc t[]){
	float tmins=1,thours=0;
	for(int i=0;i<m;i++){
		if(strcmp(a->name,t[i].ename)==0)
			tmins=tmins+t[i].mins;
	}
	thours=tmins/60;
	return thours;
}

void compute1(employee *a,int m,tc t[]){

	a->hours=compute(a,m,t);
	if(a->hours>40){
        a->grosspay=(40*a->Hwage+(a->hours-40)*(1.5*a->Hwage));
}
else{
	a->grosspay=a->hours*a->Hwage;
}
}

void computen(int n,employee e[],int m,tc t[]){
	for(int i=0;i<n;i++)
		compute1(&e[i],m,t);
}

void output(employee *a)
{
 if(a->hours!=0)
	printf("%s : %f hours , $ %f \n",a->name,a->hours,a->grosspay);
}

void outputn(int n,employee e[]){
	for(int i=0;i<n;i++)
		output(&e[i]);
}

int main()
{
	int n,m;
	printf("enter the number of employees:");
	scanf("%d",&n);
	employee e[n];
	input_n(n,e);
    printf("number of timecards submitted:");
    scanf("%d",&m);
	tc t[m];
	input_tc(m,t);
	computen(n,e,m,t);
	outputn(n,e);
	return 0;
}
