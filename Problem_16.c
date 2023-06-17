#include <stdio.h>
int main ()
{
    int N,i,Weights[100],Prices[1000],Total_value=0;
    while (scanf("%d",&N)!=EOF)
    {
        for (i=0; i<N; i++)
        {
            scanf ("%d",&Weights[i]);
        }
        for (i=0; i<N; i++)
        {
            scanf ("%d",&Prices[i]);
        }
        int max,index,t=N;
        while (N>=0)
        {
            max=-9999;
            for (i=0; i<t; i++)
            {
                if (max<Prices[i]/Weights[i])
                {
                    max=Prices[i]/Weights[i];
                    index=i;
                }
            }
            if (Weights[index]>=N)
            {
                Total_value += N*(Prices[index]/Weights[index]);
                break;
            }
            else
            {
                Total_value += Weights[index]*(Prices[index]/Weights[index]);
            }
            N=N-Weights[index];
            Prices[index]=-1;
        }
        printf("Total value = %d tk",Total_value);
    }
}
