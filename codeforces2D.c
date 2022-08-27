#include<stdio.h>
int main()
{
    int i;
 
    while(1)
    {
        scanf("%d",&i);
        if(i!=1999)
        {
            printf("Wrong\n");
        }
        else if(i==1999)
        {
            printf("Correct\n");
            break;
        }
    }
}
