#include<stdio.h>
#include<string.h>
main()
{
    char sequence1[100],sequence2[100];
    gets(sequence1);
    gets(sequence2);
    int i,j,k,t,len,flag=0;
    len=strlen(sequence1);
    for (j=1; j<=len; j++)
    {
        //Here I am right rotating the string//
        t=sequence1[len-1];
        for(i=len-1; i>0; i--)
        {
            sequence1[i]=sequence1[i-1];
        }
        sequence1[0]=t;
        if (strcmp(sequence1,sequence2)==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        printf("Same sequence");
    }
    else
    {
        printf("Not Same sequence");
    }
}
