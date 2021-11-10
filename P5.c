// Accept number from user and return the addition of all numbers till that number
// Input : 4
// Output : 10 (1 +  2 +  3 +  4)

// Input : -6
// Output : 21  (1 +  2 +  3 +  4 +  5 +  6)
# include<stdio.h>

int Add(int no)
{
	int i = 0,iSum = 0;
	if (no < 0)
	{
		no = -(no);
	}

	for (i = 1;i<=no;i++)
	{
		iSum = iSum + i;
	}
	return iSum;
}
int main()
{
	auto int no = 0;
	int ret = 0;

	printf("Enter a number:\n");
	scanf(" %d",&no);
	
	
	ret = Add(no);				// function call
	printf("Addition of numbers till the given number is:%d",ret);   
	
	return 0;
}

