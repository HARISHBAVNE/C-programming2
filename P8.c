// Input : 15   5
// Output : True
// Input : 21   6
// Output : False

# include<stdio.h>
#include<stdbool.h>
bool CheckDivisible(int no1,int no2)
{
	
	
	if (no1%no2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	auto int no1 = 0,no2 = 0;
	bool ret = false;

	printf("Enter a third number:\n");
	scanf(" %d",&no1);
	
	printf("Enter a second number:\n");
	scanf(" %d",&no2);
	
	
	ret = CheckDivisible(no1,no2);				// function call
	if (ret == true)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	
	return 0;
}

