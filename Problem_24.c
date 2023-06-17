#include<stdio.h>
main()
{
    int n,i,Height[100];
    char Position[100];
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%d",&Height[i]);
    }
    for (i=0; i<n; i++)
    {
        scanf("%c",&Position[i]);
    }
    int count=0;
    for (i=0; i<n; i++)
    {
        if ((Height[i]==1 || Height[i]==2) && Position[i]==83)
        {
            count++;
        }
        if (Height[i]>2 && Position[i]==74)
        {
            count++;
        }
    }
    printf("%d",count);
}
