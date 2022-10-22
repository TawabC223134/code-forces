#include<stdio.h>
int main()
{
    int i,a,b,x,y,f,c=0;
    scanf("%d%d",&x ,&y);


    for( i=x;i<=y;i++)
    {
        f=1;

        for(a=i;a>=1 && a<=y; )
        {

            b=a%10;
            if(b!=4 && b!=7)
            {
                f=0;
            }
            a=a/10;

        }
        if(f==1)
        {
            printf("%d ",i);
            c++;

        }


    }
    if(c==0)
    {
        printf("-1\n");
    }




    return 0;
}




