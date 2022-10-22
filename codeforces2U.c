#include<stdio.h>
int main()
{
    int i,n,x,y,z,a,s,sum;
    scanf("%d",&n);
    sum=0;

    scanf("%d%d",&x,&y);
    for(i=1;i<=n;i++)
    {
        s=0;
        for(a=i;a>0; )
        {
           z=a%10;
           s+=z;
           a/=10;
        }
        if(s>=x && s<=y)
        {
            sum+=i;
        }

    }
    printf("%d\n",sum);
 }
