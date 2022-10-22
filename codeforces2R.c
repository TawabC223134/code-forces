#include<stdio.h>
int main()
{
    int i,x,y,z,sum;


    while(1)
    {
        scanf("%d%d",&x,&y);
        sum=0;
        if(x>0 && y>0)
        {

        if(x>=y)
        {
            for(i=y;i<=x;i++)
        {
            z=i;
            sum+=i;
            printf("%d ",z);
        }

        }
        else if(x<=y)
        {
            for(i=x;i<=y;i++)
            {
                z=i;
                sum+=i;
                printf("%d ",z);
            }

        }



    }
    else{
            break;
        }
        printf("sum =%d\n",sum);

    }

}
