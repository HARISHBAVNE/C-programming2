//Q4. Accept number of rows and number of columns from user and display
// below pattern.
// Input : iRow = 3 iCol = 4
// Output : * # * #
		 // * # * #
		 // * # * #

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i = 0;
	int j = 0;
	printf("\n");
	for (i=1;i<=iRow;i++)
	{
		for (j =1;j<=iCol;j++)
		{
			if ((j%2)!=0)
			{
				printf("*\t");
			}
			else
			{
				printf("#\t");
			}
		}
		printf("\n");
	}
	
}
int main()
{
	int No1 = 0,No2 = 0;
	printf("Enter number of Rows\n");
	scanf("%d",&No1);
	
	printf("Enter number of Columns\n");
	scanf("%d",&No2);
	
	Pattern(No1,No2);
	return 0;
}