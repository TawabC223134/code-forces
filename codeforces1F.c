#include<stdio.h>
int main()
{
    long long int x,y,z,a,b;
    scanf("%lld%lld",&x,&y);
    a=x%10;
    b=y%10;
    z=a+b;
    printf("%lld\n",z);
    return 0;
}
