#include<stdio.h>
int main()
{

    long long x,i,j,n,y;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&x);
        if(x==0)
            {
                printf("0 ");
            }
        else
            {

        while(x)
        {
            y=x%10;
            printf("%lld ",y);
            x=x/10;


        }
            }

        printf("\n");

    }
}
