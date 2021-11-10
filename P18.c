// Accept number from user and check whether it is prime or not
// Input : 7
// Output : True

// Input :  13
// output : Prime

// Input : 12
// Output : False

# include<stdio.h>
# include<stdbool.h>

bool CheckPrime(int no)
{
	if (no < 0)
	{
		no = -no;
	}
	auto int i = 0;
	for (i = 2;i <= (no/2);i++)
	{
		if (no%i == 0)
		{
			break;
		}
	}
	if (i==(no/2)+1)
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
	
	bRet = CheckPrime(no);
	
	if (bRet == true)
	{
		printf("%d is Prime Number.",no);
	}
	else
	{
		printf("%d is not Prime Number.",no);
	}
	
	return 0;
}