#include<stdio.h>
int main()
{
    int i,j,n,x;
    scanf("%d",&n);
    x=1;
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=3;j++)
        {
            printf("%d ",x);
            x++;
        }
        printf("PUM\n");
        x++;
    }
}
