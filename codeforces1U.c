#include<stdio.h>
int main()
{
    double x;
    scanf("%lf",&x);
    int a = x;

    double y=x-a;
    if(y>0)
    {
        printf("float %d %.3lf\n",a,y);

    }

    else
    {
        printf("int %d\n",a);
    }
    return 0;

}
