#include<stdio.h>

int Maximum(int,int);					//Function declaration

int main()
{
	auto int no1 = 0;
	auto int no2 = 0;
	register int ret = 0;
	
	printf("Enter first number:\n");
	scanf("%d",&no1);
	
	printf("Enter second number:\n");
	scanf("%d",&no2);
	
	ret = Maximum(no1,no2);				// function call
	printf("Maximum number is:%d",ret);   
	
	return 0;
}

int Maximum(int no1,int no2)
{
	if (no1 > no2)
	{
		return no1;
	}
	else
	{
		return no2;
	}
}