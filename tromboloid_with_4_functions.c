//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float input()
{ 
    float a;
    printf("enter the values\n");
    scanf("%f",&a);
    return a;
}
float volume( float h,float b,float d)
{
   float volume;
   volume=((h*b*d)+(b/d))*1/3;
   return volume;
}
int output(float volume)
{
   printf("the volume of the tromboloid is %f",volume);
   return 0;
}
int main()
{
   float x,y,z,vol;
   x=input();
   y=input();
   z=input();
   vol=volume(x,y,z);
   output(vol);
   return 0;
}
