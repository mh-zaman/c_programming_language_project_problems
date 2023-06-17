#include<stdio.h>
#include<string.h>
main()
{
    char name[100];
    gets(name);
    int i,len,j;
    len=strlen(name);
    for (i=0; i<len; i++)
    {
        j=name[i];
        if (j>=65 && j<=90)
        {
            printf("%c",name[i]);
        }
    }
}
