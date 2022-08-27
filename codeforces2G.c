#include<stdio.h>
int main()
{
    int i,t,x,z,n;
    long long fact;
    scanf("%d",&t);
    for(i=1;i<=t && t<=15;i++)
    {
             scanf("%d",&n);
        fact=1;
        for(x=1; x<=n && n<=20; x++)
        {
            fact=fact*x;
        }
        printf("%lld\n",fact);

    }

    return 0;

}
