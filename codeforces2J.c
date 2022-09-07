#include<stdio.h>
int main()
{
    int i,n,f,l;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        f=1;
        for(l=2;l<i  ;l++)
        {
            if(i%l == 0)
            {
                f=2;
            }
        }
             if(f==1)
            {
                printf("%d ",i);
            }

    }
    return 0;
}
