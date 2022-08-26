#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a>=65 && a<=90)
    {
        printf("ALPHA\nIS CAPITAL\n",a);
    }
    else if(a>=97 && a<=122)
    {
        printf("ALPHA\nIS SMALL\n",a);
    }
    else if(a>=48 && a<=57)
    {
        printf("IS DIGIT\n",a);
    }
    return 0;
}
