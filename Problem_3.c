#include<stdio.h>
#include<math.h>
int ConvertDecimal(int n)
{
    int i,digit,sum=0;
	for(i=0; n!=0; i++)
	{
		digit=n%10;
		sum=digit*(pow(2,i))+sum;
		n=n/10;
	}
	return sum;
}
main()
{
    int Dec1,Dec2,Dec3,Dec4,Bin1,Bin2,Bin3,Bin4;
    scanf("%d%d%d%d",&Dec1,&Dec2,&Dec3,&Dec4);
    scanf("%d%d%d%d",&Bin1,&Bin2,&Bin3,&Bin4);
    if(Dec1==ConvertDecimal(Bin1) && Dec2==ConvertDecimal(Bin2) && Dec3==ConvertDecimal(Bin3) && Dec4==ConvertDecimal(Bin4))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
