// 3. Accept number of rows and number of columns from user and display below
// pattern.
// Input : iRow = 5 iCol = 5
// Output : $ * * * *
// 			# $ * * *
// 			# # $ * *
// 			# # # $ *
// 			# # # # $
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
	if (iRow != iCol)
	{
		return;
	}
	int i = 0, j = 0;
	printf("\n");
	for (i = 1;i <=iRow;i++)
	{
		for (j = 1;j <= iCol;j++)
		{
			if (i == j)
			{
				printf("$\t");
			}
			else if (j<i)
			{
				printf("#\t");
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
}
int main()
{
	int iValue1 = 0, iValue2 = 0;
	printf("Enter number of rows:");
	scanf("%d",&iValue1);
	
	printf("Enter number of columns:");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	return 0;
}
