// Accept number from user and check whether that number is dicisible by 3 and 5.
// Input : 10
// Output : No

// Input :15
// Output : Yes
# include<stdio.h>
#include<stdbool.h>
bool check(int no)
{
	
	if (no < 0)
	{
		no = -(no);
	}
	if ((no%3 == 0)&&(no%5 == 0))
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
	auto int no = 0;
	bool ret = false;

	printf("Enter a number:\n");
	scanf(" %d",&no);
	
	
	ret = check(no);				// function call
	if (ret == true)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	
	return 0;
}

