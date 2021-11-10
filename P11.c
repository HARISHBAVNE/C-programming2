# include<stdio.h>

int Power(int no1,int no2)
{
	if (no1 < 0)
	{
		no1 = -no1;
	}
	if (no2 < 0)
	{
		no2 = -no2;
	}
	int iMult = 1;
	register int i = 0;
	for (i = 0;i<no2;i++)
	{
		iMult = iMult * no1;
	}
	return iMult;
}

int main()
{
	auto int no1 = 0,no2 = 0,iRet = 0;
	printf("Enter a first number:\n");
	scanf("%d",&no1);
	
	printf("Enter a second number:\n");
	scanf("%d",&no2);
	
	iRet = Power(no1,no2);
	
	printf("Power of %d by %d is:%d",no1,no2,iRet);
	
	return 0;
}