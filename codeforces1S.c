#include<stdio.h>
int main()
{
    double x;
    scanf("%lf",&x);
    if(x>=0 && x<=25.0000)
    {
        printf("Interval [0,25]\n");
    }
    else if(x>=25.00001 && x<=50.00000000)
    {
       printf("Interval (25,50]\n");
    }
    else if(x>=50.00000001 && x<=75.0000000000)
    {
       printf("Interval (50,75]\n");
    }
    else if(x>=75.00000000001 && x<=100.0000000000000)
    {
       printf("Interval (75,100]\n");
    }
    else
        printf("Out of Intervals\n");
    return 0;
}
