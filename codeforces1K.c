#include<stdio.h>
int main()
{
    int a,b,c,x,y;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c && b<=c)
    {
        x=a;
        y=b;
        printf("%d %d\n",y,x);
    }
    else if(a>=b && a>=c  && b>=c)
    {
        x=a;
        y=c;
        printf("%d %d\n",y,x);
    }
    else if(b>=a && b>=c && a<=c )
    {
        x=b;
        y=a;
        printf("%d %d\n",y,x);
    }
     else if(b>=a && b>=c && a>=c )
    {
        x=b;
        y=c;
        printf("%d %d\n",y,x);
    }
    else if(c>=a && c>=b  && a<=b )
    {
        x=c;
        y=a;
        printf("%d %d\n",y,x);
    }
    else if(c>=a && c>=b && a>=b)
    {
        x=c;
        y=b;
        printf("%d %d\n",y,x);
    }
    return 0;

}
