//Q5. Accept number of rows and number of columns from user and display below
// pattern.
// Input : iRow = 4 iCol = 4
// Output : 1 2 3 4 5
//          1 2     5
// 			1   3   5
// 			1     4 5
// 			1 2 3 4 5

#include<stdio.h>
void Pattern(unsigned int iRow,unsigned int iCol)
{
	int i = 0, j = 0;
	if (iRow != iCol)
	{return;}
	printf("\n");
	for (i =1;i<=iRow+1;i++)
	{
		for (j = 1;j <= iCol+1;j++)
		{
			if ((i==j)||((i==1)||(i==iRow+1)||(j==iCol+1)||(j==1)))
			{
				printf("%d\t",j);
			}
			else
			{
				printf(" \t");
			}
		}
		printf("\n");
	}
}
int main()
{
	unsigned int iValue1 = 0, iValue2 = 0;
	printf("Enter number of rows:");
	scanf("%u",&iValue1);
	
	printf("Enter number of columns:");
	scanf("%u",&iValue2);
	
	Pattern(iValue1,iValue2);
	return 0;
}
