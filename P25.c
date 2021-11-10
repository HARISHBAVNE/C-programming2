// Accept number from user and return multiplication of digits
// Input : 7521
// Output : 70
// Input : 4502
// Output : 40

#include<stdio.h>

int Multiplication(int no)
{
	int mult = 1;
	if (no < 0)
	{
		no = -no;
	}
	while(no > 0)
	{
		if ((no%10)!=0)
		{
			mult = mult * (no%10);
		}
		no = no/10;
	}
	return mult;
}

int main()
{
	int no = 0;
	auto int iRet = 0;
	printf("Enter a number:\n");
	scanf("%d",&no);	
	iRet = Multiplication(no);
	
	printf("Multiplication of digits is:%d",iRet);
	
	return 0;
}