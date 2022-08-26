#include<stdio.h>
int main()
{
    int a,b,sum;
    char c;
    scanf("%d %c%d",&a,&c,&b);


    if(c==43)
    {
        sum=a+b;
        printf("%d\n",sum);
    }
    else if(c==45)
    {
        sum=a-b;
        printf("%d\n",sum);
    }
    else if(c==42)
    {
        sum=a*b;
        printf("%d\n",sum);
    }
    else if(c==47)
    {
        sum=a/b;
        printf("%d\n",sum);
    }

    return 0;


}
