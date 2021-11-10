// Accept number from user and count even digits of that numbers .
// Input : 4521
// Output :  2
// Input : 8642
// Output : 4
// Input : 7139
// Output : 0

# include<stdio.h>
# include<stdbool.h>

int EvenCount(int no)
{
	if (no < 0)
	{
		no = -no;
	}
	auto int icnt = 0;
	int idigit = 0;
	while(no != 0)
	{
		
		if ((no%10) != 0)
		{
			if ((no%10)%2==0)
			{
				icnt ++;
			}
		}
		no = no/10;
	}
	return icnt;
}

int main()
{
	auto int no = 0;
	int iRet = 0;	
	printf("Enter a number:\n");
	scanf("%d",&no);
	
	iRet = EvenCount(no);
	
	printf("Even digits are:%d",iRet);
	return 0;
}