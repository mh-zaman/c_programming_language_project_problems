#include<stdio.h>
int isPrime (int x)
{
    int i;
    if (x==1)
    {
        return 0;
    }
    for (i=2; i<=x/2; i++)
    {
        if (x%i==0)
        {
            return 0;
        }
    }
    return 1;
}
main()
{
    int n,i;
    scanf("%d",&n);
    int Primes[1000],size=0;
    for (i=1; i<=n; i++)
    {
        if (isPrime(i)==1)
        {
           Primes[size]=i;
           size++;
        }
    }
    for (i=0; i<size; i++)
    {
      if (Primes[i+1]-Primes[i]==2)
      {
          printf("%d,%d  ",Primes[i],Primes[i+1]);
      }
    }
}
