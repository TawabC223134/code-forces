#include<stdio.h>
int main()
{
   int i,n,x,cnt1,cnt2,cnt3,cnt4;
   scanf("%d",&n);
   i=1;
   cnt1=0;
   cnt2=0;
   cnt3=0;
   cnt4=0;
 
   while(i<=n)
   {
       scanf("%d",&x);
       if(x%2==0)
       {
           cnt1++;
       }
       if(x%2!=0)
       {
           cnt2++;
       }
       if(x>0)
       {
           cnt3++;
       }
       if(x<0)
       {
           cnt4++;
       }
       i++;
   }
   printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",cnt1,cnt2,cnt3,cnt4);
   return 0;
 
}
