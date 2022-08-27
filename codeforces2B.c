#include<stdio.h>
int main()
{
    int i,n,x;
    scanf("%d",&n);
    i=1;
 
    while(i<=n)
    {
 
 
        if(i%2==0)
        {
 
            printf("%d\n",i);
 
        }
         else if(n==1)
        {
            printf("-1\n");
            break;
        }
 
        i++;
 
    }
}
 
