#include<stdio.h>
#include<string.h>
main()
{
    char string1[100],string2[100];
    gets(string1);
    gets(string2);
    int len1,len2,i,j,count=0;
    len1=strlen(string1);
    len2=strlen(string2);
    if (len1==len2)
    {
        for (i=0; i<len1; i++)
        {
            for (j=0; j<len2; j++)
            {
                if (string1[i]==string2[j])
                {
                    count++;
                    break;
                }
            }
        }
    }
    if (count==len1)
    {
        printf("They are anagram");
    }
    else
    {
        printf("They are not anagram");
    }
}

