#include<stdio.h>
#include<string.h>
main()
{
    char sentence[100];
    gets(sentence);
    int i,len,T,j,flag;
    len=strlen(sentence);
    T=sentence[0];
    for (i=1; i<len; i++)
    {
        if (sentence[i]==' ')
        {
            j=sentence[i+1];
            if (j==T || j==T+32)
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
    }
    if (flag==1)
    {
        printf("Tautogram");
    }
    else
    {
        printf("Not Tautogram");
    }
}
