//Q1. Accept number of rows and number of columns from user and display
// below pattern.
// Input : iRow = 4 iCol = 3
// Output : * * *
// 			* * *
// 			* * *
// 			* * *

#include<stdio.h>

void Pattern(unsigned int iRow,unsigned int iCol)
{
	int i = 0;
	int j = 0;
	printf("\n");
	for (i = 1;i <= iRow;i++)
	{
		for (j = 1;j <= iCol;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
}
int main()
{
	unsigned int No1 = 0,No2 = 0;
	printf("Enter number of Rows\n");
	scanf("%u",&No1);
	
	printf("Enter number of Columns\n");
	scanf("%u",&No2);
	
	Pattern(No1,No2);
	return 0;
}