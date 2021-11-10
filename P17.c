// Accept number from user and check whether it is perfect or not
// Input : 6
// Output : True        ( 6)   1 +  2 +  3

// Input :  12
// output : False       (16)  1+ 2 + 3 + 4 + 6

# include<stdio.h>
# include<stdbool.h>

bool Perfect(int no)
{
	if (no < 0)
	{
		no = -no;
	}
	register int i = 0;
	int iSum = 0;
	for (i = 1;i <= no/2;i++)   // time complexity O(n/2)
	{
		if (no%i == 0)
		{
			iSum = iSum + i;
		}
	}
	if (iSum == no)
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
	bool bRet = 0;
	
	printf("Enter a number:\n");
	scanf("%d",&no);
	
	bRet = Perfect(no);
	
	if (bRet == true)
	{
		printf("%d is Perfect Number.",no);
	}
	else
	{
		printf("%d is not Perfect Number.",no);
	}
	
	return 0;
}