#include<stdio.h>
int main()
{

    double a,b,x,z;
    int c,d,y;
    scanf("%lf%lf",&a,&b);
    x=a/b;
    y=a/b;
    z=x-y;
    printf("floor %.0lf / %.0lf = %d\n",a,b,y);
    if(x==1)
    {
        printf("ceil %.0lf / %.0lf = %d\n",a,b,y);

    }
    else
    {
    d=y+1;
    printf("ceil %.0lf / %.0lf = %d\n",a,b,d);
    }

    if(z >= .5)
    {
        c=y+1;
        printf("round %.0lf / %.0lf = %d\n",a,b,c);
    }
    else if(z<.5)
    {
        c=y;
        printf("round %.0lf / %.0lf = %d\n",a,b,c);
    }

    return 0;
}
