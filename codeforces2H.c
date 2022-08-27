 #include<stdio.h>
 int main()
 {
     int i,a,f;
     scanf("%d",&a);
     f=0;
     for(i=2;i<a;i++)
     {
         if(a%i==0)
         {
             f=1;
         }
     }
         if(f==1)
         {
             printf("NO\n");
         }
         else
         {
             printf("YES\n");
         }
 
     return 0;
 }
