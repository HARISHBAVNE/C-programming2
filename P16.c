// Accept number and return the addition of its factors
// Input : 6
// Output : ( 6)   1 +  2 +  3

// Input :  12
// output : (16)  1+ 2 + 3 + 4 + 6

# include<stdio.h>

int factAdd(int no)
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
	return iSum;
}

int main()
{
	auto int no = 0,iRet = 0;
	
	printf("Enter a number:\n");
	scanf("%d",&no);
	
	iRet = factAdd(no);
	printf("factors Addition of %d is:%d",no,iRet);
	
	return 0;
}