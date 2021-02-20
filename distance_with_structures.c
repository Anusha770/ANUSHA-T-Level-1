//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include <math.h>


    struct points
    {
       int x,y;
    };
    float distance(struct points a, struct points b)
    {
        float dis;
        dis=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
        return dis;
    }
    
     struct points input()
    {
        struct points a;
    printf("enter x coordinates");
    scanf("%d",&a.x);
    printf("enter y coordinates");
    scanf("%d",&a.y);
    return a;
    }
    void out(float dist)
    {
       
        printf("distance=%f",dist);
    }
    int main()
    {
        struct points a,b;
        float c;
        a=input();
        b=input();
        c=distance(a,b);
     out(c);
    return 0;
    }
    

