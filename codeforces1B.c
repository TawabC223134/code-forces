#include<stdio.h>
int main()
{
    int A;
    long long B;
    char ch;
    float D;
    double E;
    scanf("%d%lld %c%f%lf",&A,&B,&ch,&D,&E);
    printf("%d\n%lld\n%c\n%.2f\n%.1lf\n",A,B,ch,D,E);
}
