// Accept number and display factors of that number
// Input : 6
// Output : 1   2   3   6

# include<stdio.h>

void fact(int no)
{
	if (no < 0)
	{
		no = -no;
	}
	int i = 0;
	for (i = 1;i <= no;i++)
	{
		if (no%i == 0)
		{
			printf("%d\t",i);
		}
	}
}

int main()
{
	auto int no = 0,iRet = 0;
	
	printf("Enter a number:\n");
	scanf("%d",&no);
	
	fact(no);
	
	return 0;
}