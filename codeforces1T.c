#include<stdio.h>
int main()
{
    int a,b,c,x,y,z;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c && b>=c)
    {
        x=a;
        y=b;
        z=c;
        printf("%d\n%d\n%d\n",z,y,x);
        printf("\n");
        printf("%d\n%d\n%d\n",a,b,c);
    }
    else if(a>=b && a>=c && c>=b)
    {
        x=a;
        y=c;
        z=b;
        printf("%d\n%d\n%d\n",z,y,x);
        printf("\n");
        printf("%d\n%d\n%d\n",a,b,c);
    }
    else if(b>=a && b>=c && a>=c)
    {
        z=c;
        y=a;
        x=b;
        printf("%d\n%d\n%d\n",z,y,x);
        printf("\n");
        printf("%d\n%d\n%d\n",a,b,c);
    }
    else if(b>=a && b>=c && c>=a)
    {
        z=a;
        y=c;
        x=b;
        printf("%d\n%d\n%d\n",z,y,x);
        printf("\n");
        printf("%d\n%d\n%d\n",a,b,c);
    }
    else if(c>=a && c>=b && a>=b)
    {
        z=b;
        y=a;
        x=c;
        printf("%d\n%d\n%d\n",z,y,x);
        printf("\n");
        printf("%d\n%d\n%d\n",a,b,c);
    }
    else if(c>=a && c>=b && b>=a)
    {
        z=a;
        y=b;
        x=c;
        printf("%d\n%d\n%d\n",z,y,x);
        printf("\n");
        printf("%d\n%d\n%d\n",a,b,c);
    }
    return 0;
}
