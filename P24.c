//Accept number from user and find frequency of second number provided by user.
// Input :  75845       5
// Output :     2
// Input : 89562        1
// Output :      0

#include<stdio.h>

int Frequency(int no1,int no2)
{
	int icnt = 0;
	int idigit = 0;
	while(no1 > 0)
	{
		idigit = (no1%10);
		if (idigit == no2)
		{
			icnt ++;
		}
		no1 = no1/10;
	}
	return icnt;
}

int main()
{
	int no1 = 0,no2 = 0;
	auto int iRet = 0;
	printf("Enter a number:\n");
	scanf("%d",&no1);
	
	printf("Enter a number to find its frequency:\n");
	scanf("%d",&no2);
	
	iRet = Frequency(no1,no2);
	
	printf("Frequency of %d in digit is:%d",no2,iRet);
	
	return 0;
}