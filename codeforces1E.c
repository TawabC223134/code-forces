#include<stdio.h>
#define PI 3.141592653
int main()
{
    double  a,r;

    scanf("%lf",&r);
    a=PI*r*r;
    printf("%.10lf\n",a);
    return 0;
}
