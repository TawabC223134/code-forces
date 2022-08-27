#include<stdio.h>
int main()
{
    int i,n,x,a;
    scanf("%d",&n);
    i=1;
    a=0;
    while(i<=n)
    {
        scanf("%d",&x);
        if(x>a)
        {
            a=x;
        }
        i++;
    }
    printf("%d",a);
}
