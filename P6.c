// Accept number from user and check whether that number is even or odd.
// Input : 4
// Output : Its even

// Input :7
// Output : Its odd
# include<stdio.h>
#include<stdbool.h>
bool Even(int no)
{
	
	if (no < 0)
	{
		no = -(no);
	}
	if ((no%2) == 0)
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
	
	
	ret = Even(no);				// function call
	if (ret == true)
	{
		printf("Its even.");
	}
	else
	{
		printf("Its odd.");
	}
	
	return 0;
}

