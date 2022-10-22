#include<stdio.h>
int main()
{
    int x,r,y;
    scanf("%d",&x);
    y=0;
    while(x>0)
    {
        r=x%10;
        y=(y*10)+r;
        x=x/10;

    }

    if(x==y)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

}
