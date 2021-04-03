#include<stdio.h>
struct student
{
    char name[200];
    int marks[200];
    char grade;
    float score;
};
typedef struct student std;

struct gradebook
{
   char subject[200];
   int num_weights;
   float weights[200];
   int num_students;
   std student[200];
};
typedef struct gradebook gb;
 
void input(gb *a,int n)
{
    //printf("enter the number of gradebooks:\n");
   //scanf("%d",&n);
   printf("enter the course name:\n");
   scanf("%s",a->subject);
   printf("enter the no of students:\n");
   scanf("%d",&a->num_students);
   printf("enter the number of weights:\n");
   scanf("%d",&a->num_weights);
    for(int i=0;i<a->num_weights;i++)
    {
       printf("enter the weights:\n");
       scanf("%f",&a->weights[i]);
    }
   for(int j=0;j<a->num_students;j++)
         {
       printf("enter the name:");
       scanf("%s",a->student[j].name);
       for(int k=0;k<a->num_weights;k++)
       {
           printf("enter the marks of the student\n");
           scanf("%d",&a->student[j].marks[k]);
           }
         }
}
void input_n(int n,gb a[ ])
{
    for(int i=0;i<n;i++)
     input(n,&a[i]);
}
char grade( float m)
{
    if(m>=0 && m<60)
      return 'F';
    else if(m>=60 && m<70)
      return 'D';
   else if(m>=70 && m<80)
      return 'C';
    else if(m>=80 && m<90)
      return 'B';
    else
       return 'A';
}

void compute(gb *a)
{
    float weight=0.0;
   for(int i=0;i<a->num_weights;i++)
    {
       weight+=a->weights[i];
      }
      int i;
   for( i=0;i<a->num_students;i++)
  {
    a->student[i].score=0.0;
    for (int j=0;j<a->num_weights;j++)
    {
      a->student[i].score += a->student[i].marks[j]*a->weights[j];  
   
   }


a->student[i].score = a->student[i].score / weight;
a->student[i].grade=grade(a->student[i].score);
}
}
void compute_n(int n,gb a[ ])
{
    for ( int i=0;i<n;i++)
        compute(&a[i]);
}


void output(gb *a)
{
  printf("%s\n",a->subject);
  for(int i=0;i<a->num_students;i++)
     printf("%s\t%f\t%c\n" ,a->student[i].name,a->student[i].score,a->student[i].grade);
}

void output_n(int n, gb a[])
{
   for(int i=0;i<n;i++)
    output(&a[i]);
}

int main()
{
   int n;
   //printf("enter the number of gradebooks:\n");
   scanf("%d",&n);
   gb a[n];
   input_n(n,a);
   compute_n(n,a);
   output_n(n,a);
   return 0;
}
