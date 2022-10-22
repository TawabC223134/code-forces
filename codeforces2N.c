#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    int i,j,n,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        for(j=1;j<=x;j++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
}
