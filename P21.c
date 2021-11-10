// Accept number from user and display the digits of that numbers separately in reverse order
// Input : 7521
// Output :  15     (7+5+2+1)

# include<stdio.h>
# include<stdbool.h>

int DigitSum(int no)
{
	if (no < 0)
	{
		no = -no;
	}
	auto int iSum = 0;
	while(no != 0)
	{
		iSum = iSum +(no%10);
		no = no/10;
	}
	return iSum;
}

int main()
{
	auto int no = 0;
	int iRet = 0;	
	printf("Enter a number:\n");
	scanf("%d",&no);
	
	iRet = DigitSum(no);
	
	printf("Digit sum is:%d",iRet);
	return 0;
}