// Accept number from user and return its reverse number
// Input : 7521
// Output : 1257
// Input : 4502
// Output : 2054
// Input : 7500
// Output : 57

#include<stdio.h>

int Reverse(int no)
{
	int rev = 0;
	if (no < 0)
	{
		no = -no;
	}
	while(no > 0)
	{
		rev = (rev * 10)+(no%10);
		
		no = no/10;
	}
	return rev;
}

int main()
{
	int no = 0;
	auto int iRet = 0;
	printf("Enter a number:\n");
	scanf("%d",&no);	
	iRet = Reverse(no);
	
	printf("Reverse number is:%d",iRet);
	
	return 0;
}