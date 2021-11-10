// Accept number from user and return its factorial
// Input : 5
// Output : 5*4*3*2*1       (120)

// Input :4
// Output : 4*3*2*1         (24)
//              1*2*3*4         (24)

# include<stdio.h>

int fact(int no)
{
	if (no < 0)
	{
		no = -no;
	}
	int iFact = 1;
	while(no > 0)
	{
		iFact = iFact * no;
		no --;
	}
	
	return iFact;
}

int main()
{
	auto int no = 0,iRet = 0;
	
	printf("Enter a number:\n");
	scanf("%d",&no);
	
	iRet = fact(no);
	
	printf("Factorial of %d is:%d",no,iRet);
	
	return 0;
}