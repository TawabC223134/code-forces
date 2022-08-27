#include<stdio.h>
int main()
{
    int i,x,y;
    scanf("%d",&x);
    i=1;
    while (i<=12)
    {
        y=x*i;
        printf("%d * %d = %d\n",x,i,y);
        i++;
    }
}
