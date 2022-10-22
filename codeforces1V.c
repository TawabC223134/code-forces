#include<stdio.h>
int main()
{
    int x,y;

    char ch;
    scanf("%d %c%d",&x,&ch,&y);

    if(x>y && ch==62)
    {
        printf("Right\n");
    }
    else if(x>y && ch!=62)
    {
        printf("Wrong\n");
    }
    else if(x<y && ch==60)
    {
        printf("Right\n");
    }
    else if(x<y && ch!=60)
    {
       printf("Wrong\n");
    }
    else if(x==y && ch==61)
    {
        printf("Right\n");
    }
    else if(x==y && ch!=61)
    {
        printf("Wrong\n");
    }
    return 0;

}
