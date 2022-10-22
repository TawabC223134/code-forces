#include<stdio.h>
int main()
{
    int a,b,c,p,q,r,s;
    char ch,ch1;
    scanf("%d %c%d %c%d",&a,&ch,&b,&ch1,&c);
    p=a+b;
    q=a-b;
    r=a*b;
    s=a/b;

    if(ch==43 && p==c)
    {
        printf("Yes\n");

    }
    else if(ch==43 && p!=c)
    {
        printf("%d\n",p);
    }
    if(ch==45 && q==c)
    {
        printf("Yes\n");
    }
    else if(ch==45 && q!=c)
    {
        printf("%d\n",q);
    }
    if(ch==42 && r==c)
    {
        printf("Yes\n");
    }
    else if(ch==42 && r!=c)
    {
        printf("%d\n",r);
    }
    if(ch==44 && s==c)
    {
        printf("Yes\n");
    }
    else if(ch==44 && s!=c)
    {
        printf("%d\n",r);
    }
}
