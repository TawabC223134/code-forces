#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a>=65 && a<=90)
    {
        a+=32;
        printf("%c\n",a);
    }
    else if(a>=97 && a<=122)
    {
        a-=32;
        printf("%c\n",a);
    }
    return 0;
}
