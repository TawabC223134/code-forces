#include<stdio.h>
int main()
{
    int a,x;
    scanf("%d",&a);
    x=a%1000;
    x=a-x;
    x=x/1000;
    if(x%2==0)
    {
        printf("EVEN\n");
    }
    else if(x%2==1)
    {
        printf("ODD\n");
    }
    return 0;


}
