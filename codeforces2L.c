#include<stdio.h>
int main()
{
    int a,b,c,i1,i2,x1,x2;
    scanf("%d%d",&x1,&x2);
    for(i1=1,i2=1;i1<=x1 && i2<=x2;i1++,i2++)
    {
        if(x1%i1==0)
        {
            a=i1;
        }
        if(x2%i2==0)
        {
            b=i2;
        }
        if(a==b)
        {
           c=a;
        }

    }
    printf("%d\n",c);

}
