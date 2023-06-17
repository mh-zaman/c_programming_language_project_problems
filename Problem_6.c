#include<stdio.h>
int Merge (int A[], int start, int end)
{
    int i,sum=0;
    for (i=start; i<=end; i++)
    {
        sum+=A[i];
    }
   return sum;
}
main()
{
    int numberofRods,i,j,arr[100];
    scanf("%d",&numberofRods);
    for (i=0; i<numberofRods; i++)
    {
        scanf("%d",&arr[i]);
    }
    int N;
    scanf("%d",&N);
    for (i=0; i<numberofRods; i++)
    {
        for (j=i; j<numberofRods; j++)
        {
           if (Merge(arr,i,j)==N)
           {
               printf("Yes. Can be done by merging from number %d to number %d rod.\n",i+1,j+1);
           }
        }
    }
}

