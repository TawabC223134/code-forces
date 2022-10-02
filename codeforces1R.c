#include<stdio.h>
int main()
{
    int x,y,m,d;
    scanf("%d",&x);
    y=x/365;
    x=x%365;
    m=x/30;
    d=x%30;

    printf("%d years\n%d months\n%d days\n",y,m,d);
    return 0;
}
