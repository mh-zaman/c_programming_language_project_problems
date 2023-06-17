#include<stdio.h>
int powerOfX (int n, int x)
{
   int y=0,p=1;
   n=n-1;
   while (p<n)
   {
       p=p*x;
       y++;
   }
   if (p==n)
   {
       return y;
   }
   else
   {
       return -1;
   }
}
main()
{
   int y;
   scanf("%d",&y);
   int t,x=2;
   t=powerOfX(y,x);
   if (t==-1)
   {
     printf("Not a fermat number");
   }
   int i;
   for (i=1; i<=t; i=i*2)
   {
       if(t==i)
       {
           printf("Fermat number");
       }
   }
}
